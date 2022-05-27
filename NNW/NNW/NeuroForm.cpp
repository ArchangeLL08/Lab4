#include "NeuroForm.h"
#include "Network.cpp"
#include "Network.h"
#include<iostream>
#include<fstream>
#include<thread> // для многопоточности
#include<random>
#include<time.h>
#include<Windows.h>
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace System::Drawing;

int** Matrix; // Матрица 5 на 7
int N, M; // рамерность матрицы

struct Vector2D 
{
	int X,
		Y;
};
Vector2D mousePosition;


NNW::NeuroForm::NeuroForm(void) // фильтры для сохранения изображений
{

	InitializeComponent();

	openFileDialog1->Filter = "Image Files(*.BMP)|*.BMP|Image Files(*.JPG)|*.JPG|Image Files(*.GIF)|*.GIF|Image Files(*.PNG)|*.PNG|All files (*.*)|*.*";
	saveFileDialog1->Filter = "Image Files(*.BMP)|*.BMP|Image Files(*.JPG)|*.JPG|Image Files(*.GIF)|*.GIF|Image Files(*.PNG)|*.PNG|All files (*.*)|*.*";
}


System::Void NNW::NeuroForm::button5_Click(System::Object^ sender, System::EventArgs^ e) // кнопка сформировать матрицу 5 на 7 или изображение 256 на 256
{
	if (radioButton1->Checked) // для матрицы 5 на 7
	{
		if (Matrix) delete[] Matrix;
		N = 7;
		M = 5;
		Matrix = new int* [N];
		for (int i = 0; i < N; i++)
		{
			Matrix[i] = new int[M];
			for (int j = 0; j < M; j++)
				Matrix[i][j] = 0;
		}
		groupBox2->Visible = true;
		groupBox3->Visible = false;
	}
	if (radioButton2->Checked) // для изображения
	{
		size = 7;
		color = Color::FromArgb(255,0,0,0);
		color1 = Color::FromArgb(255, 20, 20, 20);
		color2= Color::FromArgb(255, 30, 40, 40);
		color3 = Color::FromArgb(255, 40, 40, 40);
		color4 = Color::FromArgb(255, 45, 45, 45);
		pen = gcnew Pen(color, size);
		pen1 = gcnew Pen(color1, size + 3);
		pen2 = gcnew Pen(color2, size + 5);
		pen3 = gcnew Pen(color3, size + 6);
		pen4 = gcnew Pen(color4, size + 8);

		points = gcnew List <Point>();
		draw = false;
		statePen = 1;
		Bitmap^ Img = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		canvas = Graphics::FromImage(Img);
		pictureBox1->Image = Img;
		pictureBox1->BackColor = Color::White;
		points->Clear();
		canvas->Clear(Color::White);
		groupBox3->Visible = true;
		groupBox2->Visible = false;
	}
}



void NNW::NeuroForm::Click(int i, int j, PictureBox^ button) // функция, реализованная матрицы для закрашивания и стирания pictureBox в матрице
{
	//throw gcnew System::NotImplementedException();
	if (button->BackColor != System::Drawing::Color::Black)
	{
		button->BackColor = System::Drawing::Color::Black;
		Matrix[i][j] = 1;
	}
	else
	{
		button->BackColor = System::Drawing::Color::White;
		Matrix[i][j] = 0;
	}
}
void NNW::NeuroForm::Clear(PictureBox^ button)  // функция, реализованная матрицы для очистки pictureBox в матрице
{
	//throw gcnew System::NotImplementedException();
	if (button->BackColor == System::Drawing::Color::Black)
	{
		button->BackColor = System::Drawing::Color::White;
	}
}



System::Void NNW::NeuroForm::pictureBox00_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(0, 0, pictureBox00);
}
System::Void NNW::NeuroForm::pictureBox01_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(0, 1, pictureBox01);
}
System::Void NNW::NeuroForm::pictureBox02_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(0, 2, pictureBox02);
}
System::Void NNW::NeuroForm::pictureBox03_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(0, 3, pictureBox03);
}
System::Void NNW::NeuroForm::pictureBox04_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(0, 4, pictureBox04);
}
System::Void NNW::NeuroForm::pictureBox10_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(1, 0, pictureBox10);
}
System::Void NNW::NeuroForm::pictureBox11_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(1, 1, pictureBox11);
}
System::Void NNW::NeuroForm::pictureBox12_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(1, 2, pictureBox12);
}
System::Void NNW::NeuroForm::pictureBox13_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(1, 3, pictureBox13);
}
System::Void NNW::NeuroForm::pictureBox14_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(1, 4, pictureBox14);
}
System::Void NNW::NeuroForm::pictureBox20_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(2, 0, pictureBox20);
}
System::Void NNW::NeuroForm::pictureBox21_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(2, 1, pictureBox21);
}
System::Void NNW::NeuroForm::pictureBox22_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(2, 2, pictureBox22);
}
System::Void NNW::NeuroForm::pictureBox23_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(2, 3, pictureBox23);
}
System::Void NNW::NeuroForm::pictureBox24_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(2, 4, pictureBox24);
}
System::Void NNW::NeuroForm::pictureBox30_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(3, 0, pictureBox30);
}
System::Void NNW::NeuroForm::pictureBox31_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(3, 1, pictureBox31);
}
System::Void NNW::NeuroForm::pictureBox32_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(3, 2, pictureBox32);
}
System::Void NNW::NeuroForm::pictureBox33_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(3, 3, pictureBox33);
}
System::Void NNW::NeuroForm::pictureBox34_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(3, 4, pictureBox34);
}
System::Void NNW::NeuroForm::pictureBox40_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(4, 0, pictureBox40);
}
System::Void NNW::NeuroForm::pictureBox41_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(4, 1, pictureBox41);
}
System::Void NNW::NeuroForm::pictureBox42_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(4, 2, pictureBox42);
}
System::Void NNW::NeuroForm::pictureBox43_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(4, 3, pictureBox43);
}
System::Void NNW::NeuroForm::pictureBox44_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(4, 4, pictureBox44);
}
System::Void NNW::NeuroForm::pictureBox50_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(5, 0, pictureBox50);
}
System::Void NNW::NeuroForm::pictureBox51_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(5, 1, pictureBox51);
}
System::Void NNW::NeuroForm::pictureBox52_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(5, 2, pictureBox52);
}
System::Void NNW::NeuroForm::pictureBox53_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(5, 3, pictureBox53);
}
System::Void NNW::NeuroForm::pictureBox54_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(5, 4, pictureBox54);
}
System::Void NNW::NeuroForm::pictureBox60_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(6, 0, pictureBox60);
}
System::Void NNW::NeuroForm::pictureBox61_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(6, 1, pictureBox61);
}
System::Void NNW::NeuroForm::pictureBox62_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(6, 2, pictureBox62);
}
System::Void NNW::NeuroForm::pictureBox63_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(6, 3, pictureBox63);
}
System::Void NNW::NeuroForm::pictureBox64_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(6, 4, pictureBox64);
}

System::Void NNW::NeuroForm::pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) // при опускании мыши
{
	//Проверка пера

	if (statePen == 1) {
		//Отслеживаем нажатие кнопки мишы
		points->Clear();//каждый раз рисуем заного, по этому очием список
		points->Add(e->Location);//запоминаем точку
		draw = true;//разрешаем рисовать

		pictureBox1->SizeMode = PictureBoxSizeMode::Normal;
	}
	else {
		//Запоминиаем позицию мышки
		mousePosition.X = e->Location.X;
		mousePosition.Y = e->Location.Y;
	}

	pictureBox1->Invalidate();//перерисовываем 
}

System::Void NNW::NeuroForm::pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) // при поднятии мыши
{
	draw = false;
	pictureBox1->Invalidate();

	mousePosition.X = -1;
	mousePosition.Y = -1;
}

System::Void NNW::NeuroForm::pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) // при движении мыши
{
	//Проверяем можно ли рисовать
	if (draw && points->Contains(Point(e->X, e->Y)) == false) {
		//Проверяем нажатие левой кнопки мишы
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			//Добавляем точку 
			points->Add(e->Location);
		}
		//Перерисовываем 
		pictureBox1->Invalidate();
	}
}

System::Void NNW::NeuroForm::pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) // рисование 
{
	//рисуем линию
		if (points->Count > 1) 
		{
			canvas->DrawLines(pen4, points->ToArray());
			canvas->DrawLines(pen3, points->ToArray());
			canvas->DrawLines(pen2, points->ToArray());
			canvas->DrawLines(pen1, points->ToArray());
			canvas->DrawLines(pen, points->ToArray());
		}


	if (clearAll) {
		points->Clear();
		canvas->Clear(Color::White);
		clearAll = false;

		mousePosition.X = -1;
		mousePosition.Y = -1;
	}
}


System::Void NNW::NeuroForm::button1_Click(System::Object^ sender, System::EventArgs^ e) // обучение нейросети
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	if (radioButton1->Checked) //для матрицы 
	{
		ifstream fin;
		ofstream fout;
		fout.open("log.txt");
		const int l = 3; // число слоев
		const int input_l = 35; // число входный нейронов
		int size[l] = { input_l, 7, 10 }; // хранит число нейронов в каждом слою
		network nn;// объект класса network
		double input[input_l];
		int rresult; // правильный результат
		int result;
		double ra = 0; // число правильных ответов
		int maxra = 0; // макс. число правильных ответов
		int maxraepoch = 0;  // макс. число правильных ответов за эпоху
		const int n = 10; // число обучающих параметров
		bool to_study = 1; 
		double time = 0;
		data_one1* data = new data_one1[n];

		if (to_study) {
			fin.open("lib2.0(5x7).txt");
			for (int i = 0; i < n; i++) // сохраняте правильные значения из файлов для обучения
			{
				for (int j = 0; j < input_l; j++) {
					fin >> data[i].info[j];
				}
				fin >> data[i].rresult;
			}
			double FF_start = clock();
			nn.setLayers(l, size);
			for (int e = 0; ra / n * 100 < 100; e++) // пока число правильных ответов не будет 100% за эпоху
			{
				fout << "Epoch # " << e << endl;
				double epoch_start = clock();
				ra = 0;
				double w_delta = 0;

				for (int i = 0; i < n; i++) {

					for (int j = 0; j < 35; j++) {
						input[j] = data[i].info[j];
					}
					rresult = data[i].rresult;
					nn.set_input(input);

					
					result = nn.ForwardFeed();

					//nn.show();
					if (result == rresult) {
						//cout << "Результат верный!\n";
						//cout << "Угадал цифру " << rresult << "\t\t\t****" << endl;
						ra++;
					}
					else {
						//cout << "Результат " << result << " неверный!\n";
						//cout << "Не угадал букву " << char(rresult + 65) << "\n";
						double BP_start = clock();
						nn.BackPropogation(result, rresult, 0.5);
						double BP_stop = clock();
						//cout << "BackPropogation time: " << BP_stop - BP_start << endl;
					}
				}


				double epoch_stop = clock();
				fout << "Right answers: " << ra / n * 100 << "% \t Max RA: " << double(maxra) / n * 100 << "(epoch " << maxraepoch << " )" << endl;
				time = 0;
				//cout << "W_Delta: " << w_delta << endl;
				if (ra > maxra) {
					maxra = ra;
					maxraepoch = e;
				}
				if (maxraepoch < e - 250) {
					maxra = 0;
				}
			}
			double FF_stop = clock();
			fout << "training time: " << FF_stop - FF_start << endl; // время обучения
			//fout.close();
			if (nn.SaveWeights("weights1.txt")) {
				fout << "Веса сохранены!";
			}
		}
		else {
			nn.setLayersNotStudy(l, size, "weights1.txt");
		}
		fin.close();

	}
	if (radioButton2->Checked) //для изображения (аналогично)
	{

		ifstream fin;
		ofstream fout;
		fout.open("log.txt");
		const int l = 3;
		const int input_l = 4096;
		int size[l] = { input_l, 64, 10 };
		network nn;

		double input[input_l];
		//double rresult;
		int rresult;
		int result;
		double ra = 0;
		int maxra = 0;
		int maxraepoch = 0;
		const int n = 163;
		bool to_study = 1;
		double time = 0;
		data_one* data = new data_one[n];

		if (to_study) {
			fin.open("lib2.0.txt");
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < input_l; j++) {
					fin >> data[i].info[j];
				}
				fin >> data[i].rresult;
			}

			nn.setLayers(l, size);
			for (int e = 0; ra / n * 100 < 100; e++) {
				//cout << "Epoch #" << e << endl;
				fout << "Epoch # " << e << endl;
				double epoch_start = clock();
				ra = 0;
				double w_delta = 0;



				for (int i = 0; i < n; i++) {

					for (int j = 0; j < 4096; j++) {
						input[j] = data[i].info[j];
					}
					rresult = data[i].rresult;
					//cout << int(rresult) << endl;
					//cout << "Цифра " << rresult << endl;
					nn.set_input(input);
					double FF_start = clock();

					result = nn.ForwardFeed();

					double FF_stop = clock();
					//cout << "ForwardFeed Time: " << FF_stop - FF_start << endl;
					//nn.show();
					if (result == rresult) {
						//cout << "Результат верный!\n";
						//cout << "Угадал цифру " << rresult << "\t\t\t****" << endl;
						ra++;
					}
					else {
						//cout << "Результат " << result << " неверный!\n";
						//cout << "Не угадал букву " << char(rresult + 65) << "\n";
						double BP_start = clock();
						nn.BackPropogation(result, rresult, 0.5);
						double BP_stop = clock();
						//cout << "BackPropogation time: " << BP_stop - BP_start << endl;
					}
				}

				double epoch_stop = clock();
				fout << "Right answers: " << ra / n * 100 << "% \t Max RA: " << double(maxra) / n * 100 << "(epoch " << maxraepoch << " )" << endl;
				time = 0;
				//cout << "W_Delta: " << w_delta << endl;
				if (ra > maxra) {
					maxra = ra;
					maxraepoch = e;
				}
				if (maxraepoch < e - 250) {
					maxra = 0;
				}
			}
			//fout.close();
			if (nn.SaveWeights("weights.txt")) {
				fout << "Веса сохранены!";
			}
		}
		else {
			nn.setLayersNotStudy(l, size, "weights.txt");
		}
		fin.close();
	}
	
}

System::Void NNW::NeuroForm::button2_Click(System::Object^ sender, System::EventArgs^ e) // кнопка начать (по значению сигмоидной функции определяет результат)
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	if (radioButton1->Checked) // для матрицы 
	{
		ifstream fin;
		ofstream fout;
		fout.open("log.txt");
		const int l = 3;
		const int input_l = 35;
		int size[l] = { input_l, 7, 10 };
		network nn;
		double input[input_l];
		int result;
		double time = 0;
		nn.setLayersNotStudy(l, size, "weights1.txt");
		bool to_start_test = 1;
		int right_res;
		if (to_start_test)
		{
			fin.open("test1.txt");
			for (int i = 0; i < input_l; i++) {
				fin >> input[i];
			}
			nn.set_input(input);
			result = nn.ForwardFeed(string("show results"));
			fout << "Полученный результат:  " << result << "\n\n";
			label2->Text = "Полученный результат: " + result;

			ifstream fin2;
			char buff[385]; // буфер промежуточного хранения считываемого из файла текста
			fin2.open("Значения сигмоидной функции.txt");
			fin2.getline(buff, 385);
			string s = buff;
			label4->Text = "0->" + gcnew System::String(s.c_str());
			fin2.getline(buff, 385);
			s = buff;
			label5->Text = "1->" + gcnew System::String(s.c_str());
			fin2.getline(buff, 385);
			s = buff;
			label6->Text = "2->" + gcnew System::String(s.c_str());
			fin2.getline(buff, 385);
			s = buff;
			label7->Text = "3->" + gcnew System::String(s.c_str());
			fin2.getline(buff, 385);
			s = buff;
			label8->Text = "4->" + gcnew System::String(s.c_str());
			fin2.getline(buff, 385);
			s = buff;
			label9->Text = "5->" + gcnew System::String(s.c_str());
			fin2.getline(buff, 385);
			s = buff;
			label10->Text = "6->" + gcnew System::String(s.c_str());
			fin2.getline(buff, 385);
			s = buff;
			label11->Text = "7->" + gcnew System::String(s.c_str());
			fin2.getline(buff, 385);
			s = buff;
			label12->Text = "8->" + gcnew System::String(s.c_str());
			fin2.getline(buff, 385);
			s = buff;
			label13->Text = "9->" + gcnew System::String(s.c_str());
			//	fin.open("test1.txt");
			//fout.open("lib2.0(5*7).txt", ios_base::app);
			//char buff[385]; // буфер промежуточного хранения считываемого из файла текста
			//while (!fin.eof())
			//{
			//	fin.getline(buff, 385); // считали строку из файла
			//	fout << buff << endl;
			//}
			//fin.close(); // закрываем файл
		}
	}
	if (radioButton2->Checked) // для матрицы
	{
		ifstream fin;
		ofstream fout;
		fout.open("log.txt");
		const int l = 3;
		const int input_l = 4096;
		int size[l] = { input_l, 64, 10 };
		network nn;
		double input[input_l];
		int result;
		double time = 0;
		nn.setLayersNotStudy(l, size, "weights.txt");
		bool to_start_test = 1;
		int right_res;
		if (to_start_test)
		{
			fin.open("test.txt");
			for (int i = 0; i < input_l; i++) {
				fin >> input[i];
			}
			nn.set_input(input);
			result = nn.ForwardFeed(string("show results"));
			fout << "Полученный результат: " << result << "\n\n";
			label2->Text = "Полученный результат:  " + result;
		}
		ifstream fin2;
		char buff[385]; // буфер промежуточного хранения считываемого из файла текста
		fin2.open("Значения сигмоидной функции.txt");
		fin2.getline(buff, 385);
		string s = buff;
		label4->Text = "0->" + gcnew System::String(s.c_str());
		fin2.getline(buff, 385);
		s = buff;
		label5->Text = "1->" + gcnew System::String(s.c_str());
		fin2.getline(buff, 385);
		s = buff;
		label6->Text = "2->" + gcnew System::String(s.c_str());
		fin2.getline(buff, 385);
		s = buff;
		label7->Text = "3->" + gcnew System::String(s.c_str());
		fin2.getline(buff, 385);
		s = buff;
		label8->Text = "4->" + gcnew System::String(s.c_str());
		fin2.getline(buff, 385);
		s = buff;
		label9->Text = "5->" + gcnew System::String(s.c_str());
		fin2.getline(buff, 385);
		s = buff;
		label10->Text = "6->" + gcnew System::String(s.c_str());
		fin2.getline(buff, 385);
		s = buff;
		label11->Text = "7->" + gcnew System::String(s.c_str());
		fin2.getline(buff, 385);
		s = buff;
		label12->Text = "8->" + gcnew System::String(s.c_str());
		fin2.getline(buff, 385);
		s = buff;
		label13->Text = "9->" + gcnew System::String(s.c_str());
	}
}
System::Void NNW::NeuroForm::button4_Click(System::Object^ sender, System::EventArgs^ e) // кнопка очистить
{
	clearAll = true;
	pictureBox1->Refresh();
	pictureBox1->Invalidate();

	return System::Void();
}


System::Void NNW::NeuroForm::button6_Click(System::Object^ sender, System::EventArgs^ e) // создает тестовые файлы
{
	ofstream fout;
	fout.open("test1.txt");
	if (radioButton1->Checked)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{ 
				if (Matrix[i][j] == 0)
				{
					fout << "0.000" << ' ';
				}
				if (Matrix[i][j] == 1)
				{
					fout << "1.000" << ' ';
				}
			}
			fout  << '\n';
		}
		fout << System::Convert::ToInt32(textBox2->Text);
		fout.close(); // закрываем файл
		return System::Void();
	}
	if (radioButton2->Checked)
	{
		if (pictureBox1->Image != nullptr) pictureBox1->Image->Save("whi1te.png", System::Drawing::Imaging::ImageFormat::Png);
		Bitmap^ bitmap1 = gcnew Bitmap(pictureBox1->Image); //взяли рисунок из компоненты
		Graphics^ Gr1 = Graphics::FromImage(bitmap1); //получили поверхность рисования из исходного рисунка
		Bitmap^ bitmap2 = gcnew Bitmap(bitmap1->Width / 4, bitmap1->Height / 4, Gr1);
		//уменьшаем рисунок с тем же разрешением
		Graphics^ Gr2 = Graphics::FromImage(bitmap2); //получили поверхность рисования из меньшего рисунка
		System::Drawing::Rectangle compressionRectangle = System::Drawing::Rectangle(0, 0, bitmap1->Width / 4, bitmap1->Height / 4);
		//определили масштабирующий прямоугольник
		Gr2->DrawImage(bitmap1, compressionRectangle);
		//отрисовали на поверхности второго рисунка первый со сжатием

		pictureBox2->Image = bitmap2; //назначили второй рисунок компоненте
		pictureBox2->Size = bitmap2->Size; //поставили размер компоненты по размерам нового рисунка

		if (pictureBox2->Image != nullptr) pictureBox2->Image->Save("C:\\Users\\User\\source\\repos\\NNW\\NNW\\HOHO.png", System::Drawing::Imaging::ImageFormat::Png);

		ofstream fout;
		fout.open("test.txt");

		Bitmap^ bitmap = gcnew Bitmap(pictureBox2->Image);




		Color color;
		for (int i = 0; i < pictureBox2->Height; i++) {

			for (int j = 0; j < pictureBox2->Width; j++)
			{
				color = bitmap->GetPixel(j, i);
				if ((1 - (System::Convert::ToDouble(color.R)) / 255) == 1)
				{
					fout << "1.000" << ' ';
				}
				else
				{
					if ((1 - (System::Convert::ToDouble(color.R)) / 255) == 0)
					{
						fout << "0.000" << ' ';
					}
					else fout << setprecision(3) << (1 - (System::Convert::ToDouble(color.R)) / 255) << ' ';
				}
			}
			fout << endl;
		}
		fout << System::Convert::ToInt32(textBox1->Text);
		fout.close(); // закрываем файл
		if (pictureBox2->Image != nullptr) pictureBox2->Image->Save("C:\\Users\\User\\source\\repos\\NNW\\NNW\\HOHO.png", System::Drawing::Imaging::ImageFormat::Png);
	}
}

System::Void NNW::NeuroForm::button7_Click(System::Object^ sender, System::EventArgs^ e) // выбор цвета (нужно было для определения градиента(бесполезно))
{
	colorDialog1->ShowDialog();
	color = colorDialog1->Color;

	//label1->Text = System::Convert::ToString(color);
	pen = gcnew Pen(color, size);
	return System::Void();
}

System::Void NNW::NeuroForm::button8_Click(System::Object^ sender, System::EventArgs^ e) // сохранение в библиотеку
{
	if(radioButton1->Checked)
	{
		ifstream fin;
		ofstream fout;
		fin.open("test1.txt");
		fout.open("lib2.0(5*7).txt", ios_base::app);
		char buff[385]; // буфер промежуточного хранения считываемого из файла текста
		while (!fin.eof())
		{
			fin.getline(buff, 385); // считали строку из файла
			fout << buff << endl;
		}
		fin.close(); // закрываем файл
		return System::Void();
	}
	else
	{
		if (radioButton2->Checked)
		{
			ifstream fin;
			ofstream fout;
			fin.open("test.txt");
			fout.open("lib2.0.txt", ios_base::app);
			char buff[385]; // буфер промежуточного хранения считываемого из файла текста
			while (!fin.eof())
			{
				fin.getline(buff, 385); // считали строку из файла
				fout << buff << endl;
			}
			fin.close(); // закрываем файл
			//cout << buff << endl; // напечатали эту строку
			//label3->Text = System::Convert::ToString(System::Convert::ToInt32(label3->Text) + 1);
			int a = System::Convert::ToInt32(textBox1->Text);
			a++;
			if (a == 10) a = 0;
			textBox1->Text = System::Convert::ToString(a);
			return System::Void();
		}
		else
		{

		}
	}

	

}

System::Void NNW::NeuroForm::button9_Click(System::Object^ sender, System::EventArgs^ e)
{
	

}

System::Void NNW::NeuroForm::button10_Click(System::Object^ sender, System::EventArgs^ e)
{

}

System::Void NNW::NeuroForm::button3_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	Clear(pictureBox00);
	Clear(pictureBox01);
	Clear(pictureBox02);
	Clear(pictureBox03);
	Clear(pictureBox04);
	Clear(pictureBox10);
	Clear(pictureBox11);
	Clear(pictureBox12);
	Clear(pictureBox13);
	Clear(pictureBox14);
	Clear(pictureBox20);
	Clear(pictureBox21);
	Clear(pictureBox22);
	Clear(pictureBox23);
	Clear(pictureBox24);
	Clear(pictureBox30);
	Clear(pictureBox31);
	Clear(pictureBox32);
	Clear(pictureBox33);
	Clear(pictureBox34);
	Clear(pictureBox40);
	Clear(pictureBox41);
	Clear(pictureBox42);
	Clear(pictureBox43);
	Clear(pictureBox44);
	Clear(pictureBox50);
	Clear(pictureBox51);
	Clear(pictureBox52);
	Clear(pictureBox53);
	Clear(pictureBox54);
	Clear(pictureBox60);
	Clear(pictureBox61);
	Clear(pictureBox62);
	Clear(pictureBox63);
	Clear(pictureBox64);
	return System::Void();
}
