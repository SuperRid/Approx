#pragma once
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>

namespace Approx {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	protected:


	private: System::Windows::Forms::MenuStrip^ menuStrip1;




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_n;

	private: System::Windows::Forms::TextBox^ textBox_b;

	private: System::Windows::Forms::TextBox^ textBox_a;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_m;
	private: System::Windows::Forms::TextBox^ textBox_c;
	private: System::Windows::Forms::ToolStripMenuItem^ построитьГрафикToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститьГрафикToolStripMenuItem1;
	private: System::Windows::Forms::GroupBox^ gbD;

	private: System::Windows::Forms::TextBox^ TB9;

	private: System::Windows::Forms::TextBox^ TB8;



	private: System::Windows::Forms::TextBox^ TB7;


	private: System::Windows::Forms::TextBox^ TB6;


	private: System::Windows::Forms::TextBox^ TB5;


	private: System::Windows::Forms::TextBox^ TB4;


	private: System::Windows::Forms::TextBox^ TB3;


	private: System::Windows::Forms::TextBox^ TB2;
	private: System::Windows::Forms::TextBox^ TB1;



	private: System::Windows::Forms::Label^ LBd1;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ TB15;

	private: System::Windows::Forms::TextBox^ TB14;


	private: System::Windows::Forms::TextBox^ TB13;


	private: System::Windows::Forms::TextBox^ TB12;


	private: System::Windows::Forms::TextBox^ TB11;


	private: System::Windows::Forms::TextBox^ TB10;



	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TextBox^ TB16;


private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ TBS;






	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->построитьГрафикToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьГрафикToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_c = (gcnew System::Windows::Forms::TextBox());
			this->textBox_m = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_n = (gcnew System::Windows::Forms::TextBox());
			this->textBox_b = (gcnew System::Windows::Forms::TextBox());
			this->textBox_a = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gbD = (gcnew System::Windows::Forms::GroupBox());
			this->TB16 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->TB15 = (gcnew System::Windows::Forms::TextBox());
			this->TB14 = (gcnew System::Windows::Forms::TextBox());
			this->TB13 = (gcnew System::Windows::Forms::TextBox());
			this->TB12 = (gcnew System::Windows::Forms::TextBox());
			this->TB11 = (gcnew System::Windows::Forms::TextBox());
			this->TB10 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->LBd1 = (gcnew System::Windows::Forms::Label());
			this->TB9 = (gcnew System::Windows::Forms::TextBox());
			this->TB8 = (gcnew System::Windows::Forms::TextBox());
			this->TB7 = (gcnew System::Windows::Forms::TextBox());
			this->TB6 = (gcnew System::Windows::Forms::TextBox());
			this->TB5 = (gcnew System::Windows::Forms::TextBox());
			this->TB4 = (gcnew System::Windows::Forms::TextBox());
			this->TB3 = (gcnew System::Windows::Forms::TextBox());
			this->TB2 = (gcnew System::Windows::Forms::TextBox());
			this->TB1 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->TBS = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->gbD->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(0, 33);
			this->chart->Name = L"chart";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series1->Color = System::Drawing::Color::Blue;
			series1->Legend = L"Legend1";
			series1->Name = L"Точки";
			series1->YValuesPerPoint = 10;
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::DarkOrchid;
			series2->Legend = L"Legend1";
			series2->Name = L"Функция";
			series3->BorderWidth = 3;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::Coral;
			series3->Legend = L"Legend1";
			series3->Name = L"Полином";
			this->chart->Series->Add(series1);
			this->chart->Series->Add(series2);
			this->chart->Series->Add(series3);
			this->chart->Size = System::Drawing::Size(976, 389);
			this->chart->TabIndex = 1;
			this->chart->Text = L"chart";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->построитьГрафикToolStripMenuItem1,
					this->очиститьГрафикToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1182, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// построитьГрафикToolStripMenuItem1
			// 
			this->построитьГрафикToolStripMenuItem1->Name = L"построитьГрафикToolStripMenuItem1";
			this->построитьГрафикToolStripMenuItem1->Size = System::Drawing::Size(97, 24);
			this->построитьГрафикToolStripMenuItem1->Text = L"Построить";
			this->построитьГрафикToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::построитьToolStripMenuItem_Click);
			// 
			// очиститьГрафикToolStripMenuItem1
			// 
			this->очиститьГрафикToolStripMenuItem1->Name = L"очиститьГрафикToolStripMenuItem1";
			this->очиститьГрафикToolStripMenuItem1->Size = System::Drawing::Size(87, 24);
			this->очиститьГрафикToolStripMenuItem1->Text = L"Очистить";
			this->очиститьГрафикToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::очиститьToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->textBox_c);
			this->groupBox1->Controls->Add(this->textBox_m);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox_n);
			this->groupBox1->Controls->Add(this->textBox_b);
			this->groupBox1->Controls->Add(this->textBox_a);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(982, 33);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(188, 389);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры";
			// 
			// textBox_c
			// 
			this->textBox_c->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_c->Location = System::Drawing::Point(69, 226);
			this->textBox_c->Name = L"textBox_c";
			this->textBox_c->Size = System::Drawing::Size(100, 34);
			this->textBox_c->TabIndex = 9;
			// 
			// textBox_m
			// 
			this->textBox_m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_m->Location = System::Drawing::Point(69, 177);
			this->textBox_m->Name = L"textBox_m";
			this->textBox_m->Size = System::Drawing::Size(100, 34);
			this->textBox_m->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(22, 226);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 29);
			this->label5->TabIndex = 7;
			this->label5->Text = L"c = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(22, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"m = ";
			// 
			// textBox_n
			// 
			this->textBox_n->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_n->Location = System::Drawing::Point(69, 129);
			this->textBox_n->Name = L"textBox_n";
			this->textBox_n->Size = System::Drawing::Size(100, 34);
			this->textBox_n->TabIndex = 5;
			// 
			// textBox_b
			// 
			this->textBox_b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_b->Location = System::Drawing::Point(69, 88);
			this->textBox_b->Name = L"textBox_b";
			this->textBox_b->Size = System::Drawing::Size(100, 34);
			this->textBox_b->TabIndex = 4;
			// 
			// textBox_a
			// 
			this->textBox_a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_a->Location = System::Drawing::Point(69, 44);
			this->textBox_a->Name = L"textBox_a";
			this->textBox_a->Size = System::Drawing::Size(100, 34);
			this->textBox_a->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(22, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"n = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(22, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"b = ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(22, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"a = ";
			// 
			// gbD
			// 
			this->gbD->BackColor = System::Drawing::Color::White;
			this->gbD->Controls->Add(this->TBS);
			this->gbD->Controls->Add(this->label21);
			this->gbD->Controls->Add(this->TB16);
			this->gbD->Controls->Add(this->label6);
			this->gbD->Controls->Add(this->label20);
			this->gbD->Controls->Add(this->label19);
			this->gbD->Controls->Add(this->label18);
			this->gbD->Controls->Add(this->label17);
			this->gbD->Controls->Add(this->label16);
			this->gbD->Controls->Add(this->label15);
			this->gbD->Controls->Add(this->TB15);
			this->gbD->Controls->Add(this->TB14);
			this->gbD->Controls->Add(this->TB13);
			this->gbD->Controls->Add(this->TB12);
			this->gbD->Controls->Add(this->TB11);
			this->gbD->Controls->Add(this->TB10);
			this->gbD->Controls->Add(this->label14);
			this->gbD->Controls->Add(this->label13);
			this->gbD->Controls->Add(this->label12);
			this->gbD->Controls->Add(this->label11);
			this->gbD->Controls->Add(this->label10);
			this->gbD->Controls->Add(this->label9);
			this->gbD->Controls->Add(this->label8);
			this->gbD->Controls->Add(this->label7);
			this->gbD->Controls->Add(this->LBd1);
			this->gbD->Controls->Add(this->TB9);
			this->gbD->Controls->Add(this->TB8);
			this->gbD->Controls->Add(this->TB7);
			this->gbD->Controls->Add(this->TB6);
			this->gbD->Controls->Add(this->TB5);
			this->gbD->Controls->Add(this->TB4);
			this->gbD->Controls->Add(this->TB3);
			this->gbD->Controls->Add(this->TB2);
			this->gbD->Controls->Add(this->TB1);
			this->gbD->Location = System::Drawing::Point(0, 428);
			this->gbD->Name = L"gbD";
			this->gbD->Size = System::Drawing::Size(1170, 220);
			this->gbD->TabIndex = 4;
			this->gbD->TabStop = false;
			this->gbD->Text = L"Невязки";
			// 
			// TB16
			// 
			this->TB16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TB16->Location = System::Drawing::Point(867, 21);
			this->TB16->Name = L"TB16";
			this->TB16->Size = System::Drawing::Size(100, 34);
			this->TB16->TabIndex = 40;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(804, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 25);
			this->label6->TabIndex = 39;
			this->label6->Text = L"D15 :";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(470, 179);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(59, 25);
			this->label20->TabIndex = 38;
			this->label20->Text = L"D11 :";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(637, 179);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(59, 25);
			this->label19->TabIndex = 37;
			this->label19->Text = L"D14 :";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(637, 104);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(59, 25);
			this->label18->TabIndex = 36;
			this->label18->Text = L"D13 :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(637, 21);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(59, 25);
			this->label17->TabIndex = 35;
			this->label17->Text = L"D12 :";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(470, 104);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(59, 25);
			this->label16->TabIndex = 34;
			this->label16->Text = L"D10 :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(470, 21);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(48, 25);
			this->label15->TabIndex = 33;
			this->label15->Text = L"D9 :";
			// 
			// TB15
			// 
			this->TB15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TB15->Location = System::Drawing::Point(700, 179);
			this->TB15->Name = L"TB15";
			this->TB15->Size = System::Drawing::Size(100, 34);
			this->TB15->TabIndex = 32;
			// 
			// TB14
			// 
			this->TB14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TB14->Location = System::Drawing::Point(700, 104);
			this->TB14->Name = L"TB14";
			this->TB14->Size = System::Drawing::Size(100, 34);
			this->TB14->TabIndex = 31;
			// 
			// TB13
			// 
			this->TB13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TB13->Location = System::Drawing::Point(700, 21);
			this->TB13->Name = L"TB13";
			this->TB13->Size = System::Drawing::Size(100, 34);
			this->TB13->TabIndex = 30;
			// 
			// TB12
			// 
			this->TB12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TB12->Location = System::Drawing::Point(533, 179);
			this->TB12->Name = L"TB12";
			this->TB12->Size = System::Drawing::Size(100, 34);
			this->TB12->TabIndex = 29;
			// 
			// TB11
			// 
			this->TB11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TB11->Location = System::Drawing::Point(533, 104);
			this->TB11->Name = L"TB11";
			this->TB11->Size = System::Drawing::Size(100, 34);
			this->TB11->TabIndex = 28;
			// 
			// TB10
			// 
			this->TB10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TB10->Location = System::Drawing::Point(533, 21);
			this->TB10->Name = L"TB10";
			this->TB10->Size = System::Drawing::Size(100, 34);
			this->TB10->TabIndex = 27;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(313, 179);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(48, 25);
			this->label14->TabIndex = 26;
			this->label14->Text = L"D8 :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(313, 104);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(48, 25);
			this->label13->TabIndex = 25;
			this->label13->Text = L"D7 :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(313, 21);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(48, 25);
			this->label12->TabIndex = 24;
			this->label12->Text = L"D6 :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(157, 179);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(48, 25);
			this->label11->TabIndex = 23;
			this->label11->Text = L"D5 :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(157, 104);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 25);
			this->label10->TabIndex = 22;
			this->label10->Text = L"D4 :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(157, 21);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(48, 25);
			this->label9->TabIndex = 21;
			this->label9->Text = L"D3 :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(0, 179);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 25);
			this->label8->TabIndex = 20;
			this->label8->Text = L"D2 :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(0, 104);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 25);
			this->label7->TabIndex = 19;
			this->label7->Text = L"D1 :";
			// 
			// LBd1
			// 
			this->LBd1->AutoSize = true;
			this->LBd1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LBd1->Location = System::Drawing::Point(0, 21);
			this->LBd1->Name = L"LBd1";
			this->LBd1->Size = System::Drawing::Size(48, 25);
			this->LBd1->TabIndex = 10;
			this->LBd1->Text = L"D0 :";
			// 
			// TB9
			// 
			this->TB9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TB9->Location = System::Drawing::Point(365, 179);
			this->TB9->Name = L"TB9";
			this->TB9->Size = System::Drawing::Size(100, 34);
			this->TB9->TabIndex = 18;
			// 
			// TB8
			// 
			this->TB8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TB8->Location = System::Drawing::Point(365, 104);
			this->TB8->Name = L"TB8";
			this->TB8->Size = System::Drawing::Size(100, 34);
			this->TB8->TabIndex = 17;
			// 
			// TB7
			// 
			this->TB7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TB7->Location = System::Drawing::Point(365, 21);
			this->TB7->Name = L"TB7";
			this->TB7->Size = System::Drawing::Size(100, 34);
			this->TB7->TabIndex = 16;
			// 
			// TB6
			// 
			this->TB6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TB6->Location = System::Drawing::Point(209, 179);
			this->TB6->Name = L"TB6";
			this->TB6->Size = System::Drawing::Size(100, 34);
			this->TB6->TabIndex = 15;
			// 
			// TB5
			// 
			this->TB5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TB5->Location = System::Drawing::Point(209, 104);
			this->TB5->Name = L"TB5";
			this->TB5->Size = System::Drawing::Size(100, 34);
			this->TB5->TabIndex = 14;
			// 
			// TB4
			// 
			this->TB4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TB4->Location = System::Drawing::Point(209, 21);
			this->TB4->Name = L"TB4";
			this->TB4->Size = System::Drawing::Size(100, 34);
			this->TB4->TabIndex = 13;
			// 
			// TB3
			// 
			this->TB3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TB3->Location = System::Drawing::Point(52, 179);
			this->TB3->Name = L"TB3";
			this->TB3->Size = System::Drawing::Size(100, 34);
			this->TB3->TabIndex = 12;
			// 
			// TB2
			// 
			this->TB2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TB2->Location = System::Drawing::Point(52, 104);
			this->TB2->Name = L"TB2";
			this->TB2->Size = System::Drawing::Size(100, 34);
			this->TB2->TabIndex = 11;
			// 
			// TB1
			// 
			this->TB1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TB1->Location = System::Drawing::Point(52, 21);
			this->TB1->Name = L"TB1";
			this->TB1->Size = System::Drawing::Size(100, 34);
			this->TB1->TabIndex = 10;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(1019, 21);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(40, 25);
			this->label21->TabIndex = 41;
			this->label21->Text = L"S :";
			// 
			// TBS
			// 
			this->TBS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TBS->Location = System::Drawing::Point(1064, 21);
			this->TBS->Name = L"TBS";
			this->TBS->Size = System::Drawing::Size(100, 34);
			this->TBS->TabIndex = 42;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->ClientSize = System::Drawing::Size(1182, 653);
			this->Controls->Add(this->gbD);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Approx";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->gbD->ResumeLayout(false);
			this->gbD->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: double a, b,c;
		private: int n, m;
		private:   double** A; //Матрица 
			       double* D; //Вспомогательный массив для A
			       double* C; //Столбец неизвестных коэфицентов
				   double* B; //Столбец свободных членов
				   double* B1;
			       double* x; //Динамичесий масиив для x
				   double* f; //Динамичесий масиив для f для вывода точек
				   double z;  //Динамичесий масиив для z случайно распределенных точек от 0 до 1
				   double* p; //Динамичесий масиив p для вывода полинома 
				   double s, delta;
				   double* d;
			       int k, index;
      

	   

private: System::Void построитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void очиститьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);


	   public: double P(double);
	   public: void	GeneratePoints();
	   public: void Matrix();
	   public: void	Max();
	   public: double* Gauss();
	   public: void fail();
	   public: void DefaultParams();
	  
};
}
