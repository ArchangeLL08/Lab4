#pragma once

namespace NNW {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для NeuroNet
	/// </summary>
	public ref class NeuroForm : public System::Windows::Forms::Form
	{
	public:



		NeuroForm(void);

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~NeuroForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox00;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::PictureBox^ pictureBox30;
	private: System::Windows::Forms::PictureBox^ pictureBox64;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox40;
	private: System::Windows::Forms::PictureBox^ pictureBox63;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::PictureBox^ pictureBox50;
	private: System::Windows::Forms::PictureBox^ pictureBox62;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::PictureBox^ pictureBox60;
	private: System::Windows::Forms::PictureBox^ pictureBox61;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::PictureBox^ pictureBox31;
	private: System::Windows::Forms::PictureBox^ pictureBox54;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox53;
	private: System::Windows::Forms::PictureBox^ pictureBox32;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox52;
	private: System::Windows::Forms::PictureBox^ pictureBox33;
	private: System::Windows::Forms::PictureBox^ pictureBox01;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox51;
	private: System::Windows::Forms::PictureBox^ pictureBox34;
	private: System::Windows::Forms::PictureBox^ pictureBox02;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox44;
	private: System::Windows::Forms::PictureBox^ pictureBox41;
	private: System::Windows::Forms::PictureBox^ pictureBox03;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox43;
	private: System::Windows::Forms::PictureBox^ pictureBox42;
	private: System::Windows::Forms::PictureBox^ pictureBox04;
	private: System::Windows::Forms::GroupBox^ groupBox3;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ настройкиToolStripMenuItem;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button8;

	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::GroupBox^ groupBox4;

	protected:











































	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox00 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox01 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox02 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox03 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox04 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->настройкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox00))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox01))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox02))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox03))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox04))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(565, 235);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 42);
			this->button1->TabIndex = 44;
			this->button1->Text = L"Обучить нейросеть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NeuroForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Location = System::Drawing::Point(565, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(157, 114);
			this->groupBox1->TabIndex = 50;
			this->groupBox1->TabStop = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 43);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(117, 17);
			this->radioButton2->TabIndex = 46;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Рисунок 256 x 256";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 20);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(95, 17);
			this->radioButton1->TabIndex = 45;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Матрица 5 x 7";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 66);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(145, 42);
			this->button5->TabIndex = 54;
			this->button5->Text = L"Сформировать матрицу";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &NeuroForm::button5_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(565, 285);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 42);
			this->button2->TabIndex = 51;
			this->button2->Text = L"Начать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &NeuroForm::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->pictureBox00);
			this->groupBox2->Controls->Add(this->pictureBox24);
			this->groupBox2->Controls->Add(this->pictureBox30);
			this->groupBox2->Controls->Add(this->pictureBox64);
			this->groupBox2->Controls->Add(this->pictureBox23);
			this->groupBox2->Controls->Add(this->pictureBox40);
			this->groupBox2->Controls->Add(this->pictureBox63);
			this->groupBox2->Controls->Add(this->pictureBox22);
			this->groupBox2->Controls->Add(this->pictureBox50);
			this->groupBox2->Controls->Add(this->pictureBox62);
			this->groupBox2->Controls->Add(this->pictureBox21);
			this->groupBox2->Controls->Add(this->pictureBox60);
			this->groupBox2->Controls->Add(this->pictureBox61);
			this->groupBox2->Controls->Add(this->pictureBox20);
			this->groupBox2->Controls->Add(this->pictureBox31);
			this->groupBox2->Controls->Add(this->pictureBox54);
			this->groupBox2->Controls->Add(this->pictureBox14);
			this->groupBox2->Controls->Add(this->pictureBox53);
			this->groupBox2->Controls->Add(this->pictureBox32);
			this->groupBox2->Controls->Add(this->pictureBox13);
			this->groupBox2->Controls->Add(this->pictureBox52);
			this->groupBox2->Controls->Add(this->pictureBox33);
			this->groupBox2->Controls->Add(this->pictureBox01);
			this->groupBox2->Controls->Add(this->pictureBox12);
			this->groupBox2->Controls->Add(this->pictureBox51);
			this->groupBox2->Controls->Add(this->pictureBox34);
			this->groupBox2->Controls->Add(this->pictureBox02);
			this->groupBox2->Controls->Add(this->pictureBox11);
			this->groupBox2->Controls->Add(this->pictureBox44);
			this->groupBox2->Controls->Add(this->pictureBox41);
			this->groupBox2->Controls->Add(this->pictureBox03);
			this->groupBox2->Controls->Add(this->pictureBox10);
			this->groupBox2->Controls->Add(this->pictureBox43);
			this->groupBox2->Controls->Add(this->pictureBox42);
			this->groupBox2->Controls->Add(this->pictureBox04);
			this->groupBox2->Location = System::Drawing::Point(348, 31);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(190, 328);
			this->groupBox2->TabIndex = 52;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Матрица 5 x 7";
			this->groupBox2->Visible = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(162, 84);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(22, 117);
			this->button3->TabIndex = 53;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &NeuroForm::button3_Click_1);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 295);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 52;
			this->textBox2->Text = L"0";
			// 
			// pictureBox00
			// 
			this->pictureBox00->BackColor = System::Drawing::Color::White;
			this->pictureBox00->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox00->Location = System::Drawing::Point(6, 24);
			this->pictureBox00->Name = L"pictureBox00";
			this->pictureBox00->Size = System::Drawing::Size(30, 30);
			this->pictureBox00->TabIndex = 0;
			this->pictureBox00->TabStop = false;
			this->pictureBox00->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox00_Click);
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::White;
			this->pictureBox24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox24->Location = System::Drawing::Point(126, 84);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(30, 30);
			this->pictureBox24->TabIndex = 21;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox24_Click);
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackColor = System::Drawing::Color::White;
			this->pictureBox30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox30->Location = System::Drawing::Point(6, 114);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(30, 30);
			this->pictureBox30->TabIndex = 22;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox30_Click);
			// 
			// pictureBox64
			// 
			this->pictureBox64->BackColor = System::Drawing::Color::White;
			this->pictureBox64->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox64->Location = System::Drawing::Point(126, 204);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(30, 30);
			this->pictureBox64->TabIndex = 41;
			this->pictureBox64->TabStop = false;
			this->pictureBox64->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox64_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::White;
			this->pictureBox23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox23->Location = System::Drawing::Point(96, 84);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(30, 30);
			this->pictureBox23->TabIndex = 20;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox23_Click);
			// 
			// pictureBox40
			// 
			this->pictureBox40->BackColor = System::Drawing::Color::White;
			this->pictureBox40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox40->Location = System::Drawing::Point(6, 144);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(30, 30);
			this->pictureBox40->TabIndex = 23;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox40_Click);
			// 
			// pictureBox63
			// 
			this->pictureBox63->BackColor = System::Drawing::Color::White;
			this->pictureBox63->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox63->Location = System::Drawing::Point(96, 204);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(30, 30);
			this->pictureBox63->TabIndex = 40;
			this->pictureBox63->TabStop = false;
			this->pictureBox63->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox63_Click);
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::White;
			this->pictureBox22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox22->Location = System::Drawing::Point(66, 84);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(30, 30);
			this->pictureBox22->TabIndex = 19;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox22_Click);
			// 
			// pictureBox50
			// 
			this->pictureBox50->BackColor = System::Drawing::Color::White;
			this->pictureBox50->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox50->Location = System::Drawing::Point(6, 174);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(30, 30);
			this->pictureBox50->TabIndex = 24;
			this->pictureBox50->TabStop = false;
			this->pictureBox50->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox50_Click);
			// 
			// pictureBox62
			// 
			this->pictureBox62->BackColor = System::Drawing::Color::White;
			this->pictureBox62->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox62->Location = System::Drawing::Point(66, 204);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(30, 30);
			this->pictureBox62->TabIndex = 39;
			this->pictureBox62->TabStop = false;
			this->pictureBox62->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox62_Click);
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::White;
			this->pictureBox21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox21->Location = System::Drawing::Point(36, 84);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(30, 30);
			this->pictureBox21->TabIndex = 18;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox21_Click);
			// 
			// pictureBox60
			// 
			this->pictureBox60->BackColor = System::Drawing::Color::White;
			this->pictureBox60->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox60->Location = System::Drawing::Point(6, 204);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(30, 30);
			this->pictureBox60->TabIndex = 25;
			this->pictureBox60->TabStop = false;
			this->pictureBox60->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox60_Click);
			// 
			// pictureBox61
			// 
			this->pictureBox61->BackColor = System::Drawing::Color::White;
			this->pictureBox61->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox61->Location = System::Drawing::Point(36, 204);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(30, 30);
			this->pictureBox61->TabIndex = 38;
			this->pictureBox61->TabStop = false;
			this->pictureBox61->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox61_Click);
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::White;
			this->pictureBox20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox20->Location = System::Drawing::Point(6, 84);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(30, 30);
			this->pictureBox20->TabIndex = 17;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox20_Click);
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::White;
			this->pictureBox31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox31->Location = System::Drawing::Point(36, 114);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(30, 30);
			this->pictureBox31->TabIndex = 26;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox31_Click);
			// 
			// pictureBox54
			// 
			this->pictureBox54->BackColor = System::Drawing::Color::White;
			this->pictureBox54->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox54->Location = System::Drawing::Point(126, 174);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(30, 30);
			this->pictureBox54->TabIndex = 37;
			this->pictureBox54->TabStop = false;
			this->pictureBox54->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox54_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::White;
			this->pictureBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox14->Location = System::Drawing::Point(126, 54);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(30, 30);
			this->pictureBox14->TabIndex = 16;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox14_Click);
			// 
			// pictureBox53
			// 
			this->pictureBox53->BackColor = System::Drawing::Color::White;
			this->pictureBox53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox53->Location = System::Drawing::Point(96, 174);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(30, 30);
			this->pictureBox53->TabIndex = 36;
			this->pictureBox53->TabStop = false;
			this->pictureBox53->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox53_Click);
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackColor = System::Drawing::Color::White;
			this->pictureBox32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox32->Location = System::Drawing::Point(66, 114);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(30, 30);
			this->pictureBox32->TabIndex = 27;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox32_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::White;
			this->pictureBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox13->Location = System::Drawing::Point(96, 54);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(30, 30);
			this->pictureBox13->TabIndex = 15;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox13_Click);
			// 
			// pictureBox52
			// 
			this->pictureBox52->BackColor = System::Drawing::Color::White;
			this->pictureBox52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox52->Location = System::Drawing::Point(66, 174);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(30, 30);
			this->pictureBox52->TabIndex = 35;
			this->pictureBox52->TabStop = false;
			this->pictureBox52->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox52_Click);
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackColor = System::Drawing::Color::White;
			this->pictureBox33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox33->Location = System::Drawing::Point(96, 114);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(30, 30);
			this->pictureBox33->TabIndex = 28;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox33_Click);
			// 
			// pictureBox01
			// 
			this->pictureBox01->BackColor = System::Drawing::Color::White;
			this->pictureBox01->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox01->Location = System::Drawing::Point(36, 24);
			this->pictureBox01->Name = L"pictureBox01";
			this->pictureBox01->Size = System::Drawing::Size(30, 30);
			this->pictureBox01->TabIndex = 1;
			this->pictureBox01->TabStop = false;
			this->pictureBox01->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox01_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::White;
			this->pictureBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox12->Location = System::Drawing::Point(66, 54);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(30, 30);
			this->pictureBox12->TabIndex = 14;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox12_Click);
			// 
			// pictureBox51
			// 
			this->pictureBox51->BackColor = System::Drawing::Color::White;
			this->pictureBox51->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox51->Location = System::Drawing::Point(36, 174);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(30, 30);
			this->pictureBox51->TabIndex = 34;
			this->pictureBox51->TabStop = false;
			this->pictureBox51->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox51_Click);
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackColor = System::Drawing::Color::White;
			this->pictureBox34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox34->Location = System::Drawing::Point(126, 114);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(30, 30);
			this->pictureBox34->TabIndex = 29;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox34_Click);
			// 
			// pictureBox02
			// 
			this->pictureBox02->BackColor = System::Drawing::Color::White;
			this->pictureBox02->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox02->Location = System::Drawing::Point(66, 24);
			this->pictureBox02->Name = L"pictureBox02";
			this->pictureBox02->Size = System::Drawing::Size(30, 30);
			this->pictureBox02->TabIndex = 7;
			this->pictureBox02->TabStop = false;
			this->pictureBox02->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox02_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::White;
			this->pictureBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox11->Location = System::Drawing::Point(36, 54);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(30, 30);
			this->pictureBox11->TabIndex = 13;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox11_Click);
			// 
			// pictureBox44
			// 
			this->pictureBox44->BackColor = System::Drawing::Color::White;
			this->pictureBox44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox44->Location = System::Drawing::Point(126, 144);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(30, 30);
			this->pictureBox44->TabIndex = 33;
			this->pictureBox44->TabStop = false;
			this->pictureBox44->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox44_Click);
			// 
			// pictureBox41
			// 
			this->pictureBox41->BackColor = System::Drawing::Color::White;
			this->pictureBox41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox41->Location = System::Drawing::Point(36, 144);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(30, 30);
			this->pictureBox41->TabIndex = 30;
			this->pictureBox41->TabStop = false;
			this->pictureBox41->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox41_Click);
			// 
			// pictureBox03
			// 
			this->pictureBox03->BackColor = System::Drawing::Color::White;
			this->pictureBox03->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox03->Location = System::Drawing::Point(96, 24);
			this->pictureBox03->Name = L"pictureBox03";
			this->pictureBox03->Size = System::Drawing::Size(30, 30);
			this->pictureBox03->TabIndex = 8;
			this->pictureBox03->TabStop = false;
			this->pictureBox03->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox03_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::White;
			this->pictureBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox10->Location = System::Drawing::Point(6, 54);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(30, 30);
			this->pictureBox10->TabIndex = 12;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox10_Click);
			// 
			// pictureBox43
			// 
			this->pictureBox43->BackColor = System::Drawing::Color::White;
			this->pictureBox43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox43->Location = System::Drawing::Point(96, 144);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(30, 30);
			this->pictureBox43->TabIndex = 32;
			this->pictureBox43->TabStop = false;
			this->pictureBox43->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox43_Click);
			// 
			// pictureBox42
			// 
			this->pictureBox42->BackColor = System::Drawing::Color::White;
			this->pictureBox42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox42->Location = System::Drawing::Point(66, 144);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(30, 30);
			this->pictureBox42->TabIndex = 31;
			this->pictureBox42->TabStop = false;
			this->pictureBox42->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox42_Click);
			// 
			// pictureBox04
			// 
			this->pictureBox04->BackColor = System::Drawing::Color::White;
			this->pictureBox04->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox04->Location = System::Drawing::Point(126, 24);
			this->pictureBox04->Name = L"pictureBox04";
			this->pictureBox04->Size = System::Drawing::Size(30, 30);
			this->pictureBox04->TabIndex = 11;
			this->pictureBox04->TabStop = false;
			this->pictureBox04->Click += gcnew System::EventHandler(this, &NeuroForm::pictureBox04_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Location = System::Drawing::Point(7, 31);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(325, 328);
			this->groupBox3->TabIndex = 53;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Рисунок 256 x 256";
			this->groupBox3->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 295);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 51;
			this->textBox1->Text = L"0";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(285, 87);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(22, 117);
			this->button4->TabIndex = 50;
			this->button4->Text = L"Очистить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &NeuroForm::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(23, 19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(256, 256);
			this->pictureBox1->TabIndex = 42;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &NeuroForm::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &NeuroForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &NeuroForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &NeuroForm::pictureBox1_MouseUp);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->настройкиToolStripMenuItem,
					this->оПрограммеToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1026, 24);
			this->menuStrip1->TabIndex = 55;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->Enabled = false;
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->настройкиToolStripMenuItem->Text = L"Настройки ";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Enabled = false;
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Enabled = false;
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &NeuroForm::выходToolStripMenuItem_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(598, 152);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 23);
			this->button6->TabIndex = 56;
			this->button6->Text = L"Сохранить ";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &NeuroForm::button6_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(30, 365);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(64, 64);
			this->pictureBox2->TabIndex = 58;
			this->pictureBox2->TabStop = false;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(30, 435);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(68, 24);
			this->button7->TabIndex = 59;
			this->button7->Text = L"цвет";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &NeuroForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(565, 182);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(157, 23);
			this->button8->TabIndex = 60;
			this->button8->Text = L"Добавить в библиотеку";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &NeuroForm::button8_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(748, 264);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 62;
			this->label2->Text = L"label2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 13);
			this->label4->TabIndex = 64;
			this->label4->Text = L"0:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 35);
			this->label5->Margin = System::Windows::Forms::Padding(1, 0, 3, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 13);
			this->label5->TabIndex = 65;
			this->label5->Text = L"1:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(20, 50);
			this->label6->Margin = System::Windows::Forms::Padding(1, 0, 3, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 13);
			this->label6->TabIndex = 66;
			this->label6->Text = L"2:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(20, 65);
			this->label7->Margin = System::Windows::Forms::Padding(1, 0, 3, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 13);
			this->label7->TabIndex = 67;
			this->label7->Text = L"3:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(20, 80);
			this->label8->Margin = System::Windows::Forms::Padding(1, 0, 3, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 13);
			this->label8->TabIndex = 68;
			this->label8->Text = L"4:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(20, 95);
			this->label9->Margin = System::Windows::Forms::Padding(1, 0, 3, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 13);
			this->label9->TabIndex = 69;
			this->label9->Text = L"5:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(20, 110);
			this->label10->Margin = System::Windows::Forms::Padding(1, 0, 3, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(16, 13);
			this->label10->TabIndex = 70;
			this->label10->Text = L"6:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(20, 125);
			this->label11->Margin = System::Windows::Forms::Padding(1, 0, 3, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(16, 13);
			this->label11->TabIndex = 71;
			this->label11->Text = L"7:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(20, 140);
			this->label12->Margin = System::Windows::Forms::Padding(1, 0, 3, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(16, 13);
			this->label12->TabIndex = 72;
			this->label12->Text = L"8:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(20, 155);
			this->label13->Margin = System::Windows::Forms::Padding(1, 0, 3, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(16, 13);
			this->label13->TabIndex = 73;
			this->label13->Text = L"9:";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Location = System::Drawing::Point(728, 31);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(239, 189);
			this->groupBox4->TabIndex = 74;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Значения Лог-сигмоидной функции";
			// 
			// NeuroForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1026, 500);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"NeuroForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox00))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox01))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox02))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox03))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox04))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion		

		Graphics^ canvas;
		List <Point>^ points;
		Pen^ pen;
		Pen^ pen1;
		Pen^ pen2;
		Pen^ pen3;
		Pen^ pen4;
		Color color;
		Color color1;
		Color color2;
		Color color3;
		Color color4;
		bool draw;
		Bitmap^ background;
		Bitmap^ texture;
		float size;
		bool clearAll;
		String^ filename;
		int statePen;
		private: void Click(int i, int j, PictureBox^ button);
		private: void Clear(PictureBox^ button);
		private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox00_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox01_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox02_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox03_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox04_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox13_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox14_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox20_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox21_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox22_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox23_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox24_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox30_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox31_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox32_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox33_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox34_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox40_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox41_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox42_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox43_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox44_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox50_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox51_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox52_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox53_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox54_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox60_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox61_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox62_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox63_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox64_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);		
		private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
		private :System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
};
}
