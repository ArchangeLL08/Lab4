

#include<fstream>
#include<thread>
#include<random>
#include<time.h>
#include<Windows.h>
#include<iostream>

using namespace std;

struct neuron //структура, обозначаюшщая нейрон
{
	double value; //значение
	double error; //ошибка
	void act() //функция активации
	{
		value = (1 / (1 + pow(2.71828, -value)));
	}
};

struct data_one // хранит правильные результаты из файла lib2.0.txt
{
	double info[4096];
	int rresult;
};

struct data_one1 // хранит правильные результаты из файла lib2.0(5*7).txt
{
	double info[35];
	int rresult;
};

class network {
public:
	int layers; // Количество слоев нейросети
	neuron** neurons; // двумерный массив нейронов
	double*** weights; // Веса
	// слой
	// номер нейрона
	// номер связи нейрона со следующим нейроном
	int* size; // Количество нейронов в каждом слою
	int threadsNum = 1;/* int(thread::hardware_concurrency());*/
	double sigm_pro(double x) //проивзодная от сигмоидной функции
	{
		if ((fabs(x - 1) < 1e-9) || (fabs(x) < 1e-9)) return 0.0;
		double res = x * (1.0 - x);
		return res;
	}
	double predict(double x) 
	{
		if (x >= 0.9) {
			return 1;
		}
		else {
			return 0;
		}
	}
	void setLayersNotStudy(int n, int* p, string filename) // Функция, необходимая для получения слоев из файла без обучения нейросети
	{
		ifstream fin;
		fin.open(filename);
		srand(time(0));
		layers = n;
		neurons = new neuron * [n];
		weights = new double** [n - 1];
		size = new int[n];
		for (int i = 0; i < n; i++) {
			size[i] = p[i];
			neurons[i] = new neuron[p[i]];
			if (i < n - 1) {
				weights[i] = new double* [p[i]];
				for (int j = 0; j < p[i]; j++) {
					weights[i][j] = new double[p[i + 1]];
					for (int k = 0; k < p[i + 1]; k++) {
						fin >> weights[i][j][k];
					}
				}
			}
		}
	}
	void setLayers(int n, int* p) 
	{
		srand(time(0));
		layers = n;
		neurons = new neuron * [n];
		weights = new double** [n - 1];
		size = new int[n];
		for (int i = 0; i < n; i++) {
			size[i] = p[i];
			neurons[i] = new neuron[p[i]];
			if (i < n - 1) {
				weights[i] = new double* [p[i]];
				for (int j = 0; j < p[i]; j++) {
					weights[i][j] = new double[p[i + 1]];
					for (int k = 0; k < p[i + 1]; k++) {
						weights[i][j][k] = ((rand() % 100)) * 0.01 / size[i]; //случайная генерация весов
					}
				}
			}
		}
	}
	void setRandomInput()  //Функция, принимающая входные значения для нейросети(градиент серого)
	{
		for (int i = 0; i < size[0]; i++) {
			neurons[0][i].value = (rand() % 256) / 255;
		}
	}
	void set_input(double p[]) //Функция, принимающая входные значения для нейросети
	{
		for (int i = 0; i < size[0]; i++) {
			neurons[0][i].value = p[i];
		}
	}
	/*void show() {
		setlocale(LC_ALL, "ru");
		cout << "Ядер процессора: " << thread::hardware_concurrency() << endl;
		cout << "Нейронная сеть имеет архитектуру: ";
		for (int i = 0; i < layers; i++) {
			cout << size[i];
			if (i < layers - 1) {
				cout << " - ";
			}
		}cout << endl;
		for (int i = 0; i < layers; i++) {
			cout << "\n#Слой " << i + 1 << "\n\n";
			for (int j = 0; j < size[i]; j++) {
				cout << "Нейрон #" << j + 1 << ": \n";
				cout << "Значение: " << neurons[i][j].value << endl;
				if (i < layers - 1) {
					cout << "Веса: \n";
					for (int k = 0; k < size[i + 1]; k++) {
						cout << "#" << k + 1 << ": ";
						cout << weights[i][j][k] << endl;
					}
				}
			}
		}
	}*/

	void LayersCleaner(int LayerNumber, int start, int stop) //Функция, очищающая слои
	{
		srand(time(0));
		for (int i = start; i < stop; i++) {
			neurons[LayerNumber][i].value = 0;
			//cout << "neurons[" << LayerNumber << "][" << i << "].value = " << neurons[LayerNumber][i].value << endl;
		}
	}

	void ForwardFeeder(int LayerNumber, int start, int stop) //Метод ForwardFeeder
	{
		for (int j = start; j < stop; j++) {
			for (int k = 0; k < size[LayerNumber - 1]; k++) {
				neurons[LayerNumber][j].value += neurons[LayerNumber - 1][k].value * weights[LayerNumber - 1][k][j];
			}
			//cout << "До активации: " << neurons[i][j].value << endl;
			neurons[LayerNumber][j].act();
		}
	}

	double ForwardFeed() //Метод ForwardFeeder (используется многопоточность, для ускорения(не реализовано))
	{
		setlocale(LC_ALL, "ru");
		//cout << "Function ForwardFeed:\n";
		//cout << "Threads: " << threadsNum << endl;
		for (int i = 1; i < layers; i++) {
			if (threadsNum == 1) {
				//cout << "Выполняю очистку слоя 1-м ядром...\n";
				thread th1([&]() {
					LayersCleaner(i, 0, size[i]);
					});
				th1.join();
			}
			if (threadsNum == 2) {
				//cout << "Выполняю очистку слоя 2-мя ядрами...\n";
				thread th1([&]() {
					LayersCleaner(i, 0, int(floor(size[i] / 2)));
					});
				thread th2([&]() {
					LayersCleaner(i, int(floor(size[i] / 2)), size[i]);
					});
				th1.join();
				th2.join();
			}
			if (threadsNum == 4) {
				if (size[i] == 1) {
					//cout << "Выполняю очистку слоя 1-м ядром...\n";
					thread th1([&]() {
						LayersCleaner(i, 0, size[i]);

						});
					th1.join();
				}
				if ((size[i] == 2) || (size[i] == 3)) {
					//cout << "Выполняю очистку слоя 2-мя ядрами...\n";
					thread th1([&]() {
						LayersCleaner(i, 0, int(floor(size[i] / 2)));
						});
					thread th2([&]() {LayersCleaner(i, int(floor(size[i] / 2)), size[i]); });
					th1.join();
					th2.join();
				}
				if (size[i] >= 4) {
					//cout << "Выполняю очистку слоя 4-мя ядрами...\n";
					int start1 = 0;	int stop1 = int(size[i] / 4);
					int start2 = int(size[i] / 4); int stop2 = int(size[i] / 2);
					int start3 = int(size[i] / 2); int stop3 = int(size[i] - floor(size[i] / 4));
					int start4 = int(size[i] - floor(size[i] / 4));	int stop4 = size[i];
					thread th1([&]() {LayersCleaner(i, start1, stop1);  });
					thread th2([&]() {LayersCleaner(i, start2, stop2);  });
					thread th3([&]() {LayersCleaner(i, start3, stop3);  });
					thread th4([&]() {LayersCleaner(i, start4, stop4);  });
					th1.join();
					th2.join();
					th3.join();
					th4.join();
				}
			}
			if (threadsNum == 1) {
				thread th1([&]() {
					ForwardFeeder(i, 0, size[i]);
					});
				th1.join();
			}
			if (threadsNum == 2) {
				thread th1([&]() {
					ForwardFeeder(i, 0, int(floor(size[i] / 2)));
					});
				thread th2([&]() {
					ForwardFeeder(i, int(floor(size[i] / 2)), size[i]);
					});
				th1.join();
				th2.join();
			}
			if (threadsNum == 4) {
				if ((size[i] == 2) || (size[i] == 3)) {
					thread th1([&]() {
						ForwardFeeder(i, 0, int(floor(size[i] / 2)));
						});
					thread th2([&]() {
						ForwardFeeder(i, int(floor(size[i] / 2)), size[i]);
						});
					th1.join();
					th2.join();

				}
				if (size[i] >= 4) {
					int start1 = 0;	int stop1 = int(floor(size[i] / 4));
					int start2 = int(size[i] / 4); int stop2 = int(size[i] / 2);
					int start3 = int(size[i] / 2); int stop3 = int(size[i] - floor(size[i] / 4));
					int start4 = int(size[i] - floor(size[i] / 4));	int stop4 = size[i];
					thread th1([&]() {ForwardFeeder(i, start1, stop1);  });
					thread th2([&]() {ForwardFeeder(i, start2, stop2);  });
					thread th3([&]() {ForwardFeeder(i, start3, stop3);  });
					thread th4([&]() {ForwardFeeder(i, start4, stop4);  });
					th1.join();
					th2.join();
					th3.join();
					th4.join();
				}
			}
		}
		double max = 0;
		double prediction = 0;
		for (int i = 0; i < size[layers - 1]; i++) {

			if (neurons[layers - 1][i].value > max) {
				max = neurons[layers - 1][i].value;
				prediction = i;
			}
		}
		return prediction;
	}
	double ForwardFeed(string param) //Метод ForwardFeeder (используется многопоточность, для ускорения(не реализовано))
	{
		setlocale(LC_ALL, "ru");
		ofstream fout;
		fout.open("Значения сигмоидной функции.txt");
		//cout << "Function ForwardFeed:\n";
		//cout << "Threads: " << threadsNum << endl;
		for (int i = 1; i < layers; i++) {
			if (threadsNum == 1) {
				//cout << "Выполняю очистку слоя 1-м ядром...\n";
				thread th1([&]() {
					LayersCleaner(i, 0, size[i]);
					});
				th1.join();
			}
			if (threadsNum == 2) {
				//cout << "Выполняю очистку слоя 2-мя ядрами...\n";
				thread th1([&]() {
					LayersCleaner(i, 0, int(floor(size[i] / 2)));
					});
				thread th2([&]() {
					LayersCleaner(i, int(floor(size[i] / 2)), size[i]);
					});
				th1.join();
				th2.join();
			}
			if (threadsNum == 4) {
				if (size[i] == 1) {
					//cout << "Выполняю очистку слоя 1-м ядром...\n";
					thread th1([&]() {
						LayersCleaner(i, 0, size[i]);

						});
					th1.join();
				}
				if ((size[i] == 2) || (size[i] == 3)) {
					//cout << "Выполняю очистку слоя 2-мя ядрами...\n";
					thread th1([&]() {
						LayersCleaner(i, 0, int(floor(size[i] / 2)));
						});
					thread th2([&]() {LayersCleaner(i, int(floor(size[i] / 2)), size[i]); });
					th1.join();
					th2.join();
				}
				if (size[i] >= 4) {
					//cout << "Выполняю очистку слоя 4-мя ядрами...\n";
					int start1 = 0;	int stop1 = int(size[i] / 4);
					int start2 = int(size[i] / 4); int stop2 = int(size[i] / 2);
					int start3 = int(size[i] / 2); int stop3 = int(size[i] - floor(size[i] / 4));
					int start4 = int(size[i] - floor(size[i] / 4));	int stop4 = size[i];
					thread th1([&]() {LayersCleaner(i, start1, stop1);  });
					thread th2([&]() {LayersCleaner(i, start2, stop2);  });
					thread th3([&]() {LayersCleaner(i, start3, stop3);  });
					thread th4([&]() {LayersCleaner(i, start4, stop4);  });
					th1.join();
					th2.join();
					th3.join();
					th4.join();
				}
			}
			if (threadsNum == 1) {
				thread th1([&]() {
					ForwardFeeder(i, 0, size[i]);
					});
				th1.join();
			}
			if (threadsNum == 2) {
				thread th1([&]() {
					ForwardFeeder(i, 0, int(floor(size[i] / 2)));
					});
				thread th2([&]() {
					ForwardFeeder(i, int(floor(size[i] / 2)), size[i]);
					});
				th1.join();
				th2.join();
			}
			if (threadsNum == 4) {
				if ((size[i] == 2) || (size[i] == 3)) {
					thread th1([&]() {
						ForwardFeeder(i, 0, int(floor(size[i] / 2)));
						});
					thread th2([&]() {
						ForwardFeeder(i, int(floor(size[i] / 2)), size[i]);
						});
					th1.join();
					th2.join();

				}
				if (size[i] >= 4) {
					int start1 = 0;	int stop1 = int(floor(size[i] / 4));
					int start2 = int(size[i] / 4); int stop2 = int(size[i] / 2);
					int start3 = int(size[i] / 2); int stop3 = int(size[i] - floor(size[i] / 4));
					int start4 = int(size[i] - floor(size[i] / 4));	int stop4 = size[i];
					thread th1([&]() {ForwardFeeder(i, start1, stop1);  });
					thread th2([&]() {ForwardFeeder(i, start2, stop2);  });
					thread th3([&]() {ForwardFeeder(i, start3, stop3);  });
					thread th4([&]() {ForwardFeeder(i, start4, stop4);  });
					th1.join();
					th2.join();
					th3.join();
					th4.join();
				}
			}
		}
		double max = 0;
		double prediction = 0;
		for (int i = 0; i < size[layers - 1]; i++) {
			fout << neurons[layers - 1][i].value << endl;
			if (neurons[layers - 1][i].value > max) {
				max = neurons[layers - 1][i].value;
				prediction = i;
			}
		}
		return prediction;
	}

	void ErrorCounter(int LayerNumber, int start, int stop, double prediction, double rresult, double lr) // вычисляет ошибку для каждого нейрона
	{
		if (LayerNumber == layers - 1) {
			for (int j = start; j < stop; j++) {
				if (j != int(rresult)) {
					neurons[LayerNumber][j].error = -pow((neurons[LayerNumber][j].value), 2);
				}
				else {
					neurons[LayerNumber][j].error = pow(1.0 - neurons[LayerNumber][j].value, 2);
				}
			}
		}
		else {
			for (int j = start; j < stop; j++) {
				double error = 0.0;
				for (int k = 0; k < size[LayerNumber + 1]; k++) {
					error += neurons[LayerNumber + 1][k].error * weights[LayerNumber][j][k];
				}
				neurons[LayerNumber][j].error = error;
			}
		}

	}

	void WeightsUpdater(int start, int stop, int LayerNum, int lr)  // Функция, обновлящая веса
	{
		int i = LayerNum;
		for (int j = start; j < stop; j++) {
			for (int k = 0; k < size[i + 1]; k++) {
				weights[i][j][k] += lr * neurons[i + 1][k].error * sigm_pro(neurons[i + 1][k].value) * neurons[i][j].value;
			}
		}
	}

	void BackPropogation(double prediction, double rresult, double lr) //метод BackPropogation
	{
		for (int i = layers - 1; i > 0; i--) {
			if (threadsNum == 1) {
				if (i == layers - 1) {
					for (int j = 0; j < size[i]; j++) {
						if (j != int(rresult)) {
							neurons[i][j].error = -pow((neurons[i][j].value), 2);
						}
						else {
							neurons[i][j].error = pow(1.0 - neurons[i][j].value, 2);
						}

					}
				}
				else {
					for (int j = 0; j < size[i]; j++) {
						double error = 0.0;
						for (int k = 0; k < size[i + 1]; k++) {
							error += neurons[i + 1][k].error * weights[i][j][k];
						}
						neurons[i][j].error = error;
					}
				}
			}
			if (threadsNum == 2) {
				thread th1([&]() {
					ErrorCounter(i, 0, int(size[i] / 2), prediction, rresult, lr);
					});
				thread th2([&]() {
					ErrorCounter(i, int(size[i] / 2), size[i], prediction, rresult, lr);
					});
				th1.join();
				th2.join();
			}
			if (threadsNum == 4) {
				if (size[i] < 4) {
					if (i == layers - 1) {
						for (int j = 0; j < size[i]; j++) {
							if (j != int(rresult)) {
								neurons[i][j].error = -(neurons[i][j].value);
							}
							else {
								neurons[i][j].error = 1.0 - neurons[i][j].value;
							}

						}
					}
					else {
						for (int j = 0; j < size[i]; j++) {
							double error = 0.0;
							for (int k = 0; k < size[i + 1]; k++) {
								error += neurons[i + 1][k].error * weights[i][j][k];
							}
							neurons[i][j].error = error;
						}
					}
				}
				if (size[i] >= 4) {
					int start1 = 0;	int stop1 = int(size[i] / 4);
					int start2 = int(size[i] / 4); int stop2 = int(size[i] / 2);
					int start3 = int(size[i] / 2); int stop3 = int(size[i] - floor(size[i] / 4));
					int start4 = int(size[i] - floor(size[i] / 4));	int stop4 = size[i];
					thread th1([&]() {
						ErrorCounter(i, start1, stop1, prediction, rresult, lr);
						});
					thread th2([&]() {
						ErrorCounter(i, start2, stop2, prediction, rresult, lr);
						});
					thread th3([&]() {
						ErrorCounter(i, start3, stop3, prediction, rresult, lr);
						});
					thread th4([&]() {
						ErrorCounter(i, start4, stop4, prediction, rresult, lr);
						});
					th1.join();
					th2.join();
					th3.join();
					th4.join();

				}
			}
		}
		for (int i = 0; i < layers - 1; i++) {
			if (threadsNum == 1) {
				for (int j = 0; j < size[i]; j++) {
					for (int k = 0; k < size[i + 1]; k++) {
						weights[i][j][k] += lr * neurons[i + 1][k].error * sigm_pro(neurons[i + 1][k].value) * neurons[i][j].value;
					}
				}
			}
			if (threadsNum == 2) {
				thread th1([&]() {
					WeightsUpdater(0, int(size[i] / 2), i, lr);
					});
				thread th2([&]() {
					WeightsUpdater(int(size[i] / 2), size[i], i, lr);
					});
				th1.join();
				th2.join();
			}
			if (threadsNum == 4) {
				if (size[i] < 4) {
					for (int j = 0; j < size[i]; j++) {
						for (int k = 0; k < size[i + 1]; k++) {
							weights[i][j][k] += lr * neurons[i + 1][k].error * sigm_pro(neurons[i + 1][k].value) * neurons[i][j].value;
						}
					}
				}
				if (size[i] >= 4) {
					int start1 = 0;	int stop1 = int(size[i] / 4);
					int start2 = int(size[i] / 4); int stop2 = int(size[i] / 2);
					int start3 = int(size[i] / 2); int stop3 = int(size[i] - floor(size[i] / 4));
					int start4 = int(size[i] - floor(size[i] / 4));	int stop4 = size[i];
					thread th1([&]() {
						WeightsUpdater(start1, stop1, i, lr);
						});
					thread th2([&]() {
						WeightsUpdater(start2, stop2, i, lr);
						});
					thread th3([&]() {
						WeightsUpdater(start3, stop3, i, lr);
						});
					thread th4([&]() {
						WeightsUpdater(start4, stop4, i, lr);
						});
					th1.join();
					th2.join();
					th3.join();
					th4.join();

				}
			}
		}
	}

	bool SaveWeights(string filename)  // Функция, сохраняющая веса
	{
		ofstream fout;
		fout.open(filename);
		for (int i = 0; i < layers; i++) {
			if (i < layers - 1) {
				for (int j = 0; j < size[i]; j++) {
					for (int k = 0; k < size[i + 1]; k++) {
						fout << weights[i][j][k] << " ";
					}
				}
			}
		}
		fout.close();
		return 1;
	}
};




