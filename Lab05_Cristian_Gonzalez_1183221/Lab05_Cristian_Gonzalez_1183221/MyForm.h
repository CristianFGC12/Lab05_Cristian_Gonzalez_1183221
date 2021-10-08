#pragma once
#include "pch.h"
#include "Lista.h"
#include "Pila.h"
#include "Cola.h"
#include"ListaString.h"

namespace Lab05CristianGonzalez1183221 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Button^ button15;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(13, 13);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(922, 389);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->textBox11);
			this->tabPage1->Controls->Add(this->textBox10);
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button11);
			this->tabPage1->Controls->Add(this->button10);
			this->tabPage1->Controls->Add(this->button9);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(914, 360);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Pruebas";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(724, 155);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(26, 17);
			this->label17->TabIndex = 38;
			this->label17->Text = L"PE";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(724, 80);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(26, 17);
			this->label16->TabIndex = 37;
			this->label16->Text = L"PE";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(493, 195);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(26, 17);
			this->label15->TabIndex = 36;
			this->label15->Text = L"PE";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(493, 156);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(26, 17);
			this->label14->TabIndex = 35;
			this->label14->Text = L"PE";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(387, 301);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(54, 17);
			this->label13->TabIndex = 34;
			this->label13->Text = L"label13";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(302, 301);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(78, 17);
			this->label12->TabIndex = 33;
			this->label12->Text = L"Elementos:";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(443, 239);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 22);
			this->textBox11->TabIndex = 31;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(618, 193);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 30;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(618, 153);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 29;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(618, 74);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 28;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(724, 114);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 27;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(618, 114);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 26;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(724, 35);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 25;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(618, 35);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 24;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(386, 193);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 23;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(387, 152);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 22;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(387, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 21;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(343, 239);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(94, 23);
			this->button11->TabIndex = 20;
			this->button11->Text = L"Remove at";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(537, 192);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 19;
			this->button10->Text = L"Remove";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(537, 152);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 18;
			this->button9->Text = L"Last Index Of";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(537, 113);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 17;
			this->button8->Text = L"Set Item";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(537, 74);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 16;
			this->button7->Text = L"Get Item";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(537, 34);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Insert";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(305, 192);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 14;
			this->button5->Text = L"IndexOf";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(305, 152);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Contain";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(305, 113);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Count";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(305, 74);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(305, 34);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button15);
			this->tabPage2->Controls->Add(this->label25);
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Controls->Add(this->label23);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->button14);
			this->tabPage2->Controls->Add(this->button13);
			this->tabPage2->Controls->Add(this->button12);
			this->tabPage2->Controls->Add(this->textBox15);
			this->tabPage2->Controls->Add(this->textBox14);
			this->tabPage2->Controls->Add(this->textBox13);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(914, 360);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Solitario";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(808, 13);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 25;
			this->button15->Text = L"Siguiente";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(80, 19);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(54, 17);
			this->label25->TabIndex = 24;
			this->label25->Text = L"label25";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(602, 83);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(54, 17);
			this->label24->TabIndex = 23;
			this->label24->Text = L"label24";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(512, 83);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(54, 17);
			this->label23->TabIndex = 22;
			this->label23->Text = L"label23";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(406, 83);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(54, 17);
			this->label22->TabIndex = 21;
			this->label22->Text = L"label22";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(316, 83);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(54, 17);
			this->label21->TabIndex = 20;
			this->label21->Text = L"label21";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(224, 83);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(54, 17);
			this->label20->TabIndex = 19;
			this->label20->Text = L"label20";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(122, 83);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(54, 17);
			this->label19->TabIndex = 18;
			this->label19->Text = L"label19";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(27, 83);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(54, 17);
			this->label18->TabIndex = 17;
			this->label18->Text = L"label18";
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(646, 13);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 16;
			this->button14->Text = L"Crear";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(718, 191);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 15;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(727, 13);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 14;
			this->button12->Text = L"Reapartir";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(783, 152);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 22);
			this->textBox15->TabIndex = 13;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(783, 109);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 22);
			this->textBox14->TabIndex = 12;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(783, 66);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 22);
			this->textBox13->TabIndex = 11;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(715, 152);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(56, 17);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Destino";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(715, 109);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(51, 17);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Origen";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(715, 66);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 17);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Posición";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(602, 66);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 17);
			this->label8->TabIndex = 7;
			this->label8->Text = L"G7";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(512, 66);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"G6";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(406, 66);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"G5";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(316, 66);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"G4";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(224, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"G3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(122, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"G2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"G1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"MAZO:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(968, 414);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
		
#pragma endregion
		List* MiLista = new List();
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int a;
		try
		{
			a = Convert::ToInt32(textBox1->Text);
			MiLista->Add(a);
		}
		catch (FormatException^ e)
		{
			MessageBox::Show("No Valido");
		}	
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	
		MiLista->Clear();
	
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int a = 0;
		a = MiLista->Count();
		label13->Text = Convert::ToString(a);
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		bool Valor;
		int a;
		a = Convert::ToInt64(textBox2->Text);
		Valor = MiLista->Contains(a);
		if (Valor==true)
		{
			label14->Text = "SI";
		}
		else
		{
			label14->Text = "No";
		}
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int a,b;
		a = Convert::ToInt32(textBox3->Text);
		b = MiLista->IndexOf(a);
		label15->Text = Convert::ToString(b);
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int a, b;
	a = Convert::ToInt32(textBox4->Text);
	b = Convert::ToInt32(textBox5->Text);
	MiLista->Insert(a, b);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	int a;
	a = Convert::ToInt32(textBox8->Text);
	label16->Text = Convert::ToString(MiLista->GetItem(a));
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	int a, b;
	a = Convert::ToInt32(textBox6->Text);
	b = Convert::ToInt32(textBox7->Text);
	MiLista->SetItem(a, b);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	int a;
	a = Convert::ToInt32(textBox9->Text);
	label17->Text = Convert::ToString(MiLista->LastIndexOf(a));
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	int a;
	a = Convert::ToInt32(textBox10->Text);
	MiLista->Remove(a);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	int a;
	a = Convert::ToInt32(textBox11->Text);
	MiLista->RemoveAt(a);
}
	   ListaString* Naipes = new ListaString();
	   Pila* Mazo = new Pila();

private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	srand(time(NULL));
	int aleatorio;
	Naipes->Add("N01");
	Naipes->Add("N02");
	Naipes->Add("N03");
	Naipes->Add("N04");
	Naipes->Add("N05");
	Naipes->Add("N06");
	Naipes->Add("N07");
	Naipes->Add("N08");
	Naipes->Add("N09");
	Naipes->Add("N10");
	Naipes->Add("N0J");
	Naipes->Add("N0Q");
	Naipes->Add("N0K");
	Naipes->Add("R01");
	Naipes->Add("R02");
	Naipes->Add("R03");
	Naipes->Add("R04");
	Naipes->Add("R05");
	Naipes->Add("R06");
	Naipes->Add("R07");
	Naipes->Add("R08");
	Naipes->Add("R09");
	Naipes->Add("R10");
	Naipes->Add("R0J");
	Naipes->Add("R0Q");
	Naipes->Add("R0K");
	Naipes->Add("N01");
	Naipes->Add("N02");
	Naipes->Add("N03");
	Naipes->Add("N04");
	Naipes->Add("N05");
	Naipes->Add("N06");
	Naipes->Add("N07");
	Naipes->Add("N08");
	Naipes->Add("N09");
	Naipes->Add("N10");
	Naipes->Add("N0J");
	Naipes->Add("N0Q");
	Naipes->Add("N0K");
	Naipes->Add("R01");
	Naipes->Add("R02");
	Naipes->Add("R03");
	Naipes->Add("R04");
	Naipes->Add("R05");
	Naipes->Add("R06");
	Naipes->Add("R07");
	Naipes->Add("R08");
	Naipes->Add("R09");
	Naipes->Add("R10");
	Naipes->Add("R0J");
	Naipes->Add("R0Q");
	Naipes->Add("R0K");
	int a = Naipes->Count();
	while (a != 0)
	{
		
		aleatorio = rand() % a;
		//aleatorio = 2;
		string b = Naipes->GetItem(aleatorio);
		a = Naipes->Count();
		Mazo->Insertar(b);
		Naipes->RemoveAt(aleatorio);

		a = Naipes->Count();
	}
}
	   Pila* G1 = new Pila();
	   Pila* G2 = new Pila();
	   Pila* G3 = new Pila();
	   Pila* G4 = new Pila();
	   Pila* G5 = new Pila();
	   Pila* G6 = new Pila();
	   Pila* G7 = new Pila();
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	int b = Mazo->Tamano();
	for (int i = 0; i < 7; i++)
	{
		string a = Mazo->Quitar();
		G1->Insertar(a);
	}
	string g1 = G1->Cima();
	String^ str2 = gcnew String(g1.c_str());
	label18->Text = str2;
	for (int i = 0; i < 6; i++)
	{
		G2->Insertar(Mazo->Quitar());
	}
	string g2 = G2->Cima();
	String^ str3 = gcnew String(g2.c_str());
	label19->Text = str3;
	for (int i = 0; i < 5; i++)
	{
		G3->Insertar(Mazo->Quitar());
	}
	string g3 = G3->Cima();
	String^ str4 = gcnew String(g3.c_str());
	label20->Text = str4;
	for (int i = 0; i < 4; i++)
	{
		G4->Insertar(Mazo->Quitar());
	}
	string g4 = G4->Cima();
	String^ str5 = gcnew String(g4.c_str());
	label21->Text = str5;
	for (int i = 0; i < 3; i++)
	{
		G5->Insertar(Mazo->Quitar());
	}
	string g5 = G5->Cima();
	String^ str6 = gcnew String(g5.c_str());
	label22->Text = str6;
	for (int i = 0; i < 2; i++)
	{
		G6->Insertar(Mazo->Quitar());
	}
	string g6 = G6->Cima();
	String^ str7 = gcnew String(g6.c_str());
	label23->Text = str7;
	for (int i = 0; i < 1; i++)
	{
		G7->Insertar(Mazo->Quitar());
	}
	string g7 = G7->Cima();
	String^ str8 = gcnew String(g7.c_str());
	label24->Text = str8;
	string k = Mazo->Cima();
	String^ str9 = gcnew String(k.c_str());
	label25->Text = str9;
}
	   Pila* Mazo2 = new Pila();
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	string a;
	string b;
	if (Mazo->Tamano() != 0 ) 
	{
		a = Mazo->Quitar();
		Mazo2->Insertar(a);
		string k = Mazo->Cima();
		String^ str10 = gcnew String(k.c_str());
		label25->Text = str10;
	}
	else
	{
		while (Mazo2->Tamano() !=0 )
		{
			b = Mazo2->Quitar();
			Mazo->Insertar(b);
			string j = Mazo->Cima();
			String^ str11 = gcnew String(j.c_str());
			label25->Text = str11;
		}
	}
}
	   int countg1 = 1;
	   int countg2 = 1;
	   int countg3 = 1;
	   int countg4 = 1;
	   int countg5 = 1;
	   int countg6 = 1;
	   int countg7 = 1;
	   Pila* Guardar = new Pila();
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	int Posicion = Convert::ToInt32(textBox13->Text);
	String^ Origen = textBox14->Text;
	String^ Destino = textBox15->Text;
	if (Origen=="g1")
	{
		if (Destino=="g2")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G1->Quitar());
				G2->Insertar(Guardar->Quitar());
				string j = G1->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label18->Text =  valor1;
				string i = G2->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label19->Text += "\n" + valor2;
				countg2++;
				countg1--;
			}
			else if(Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G1->Quitar());
				}
				for (int t  = 0; t < Posicion; t++)
				{
					G2->Insertar(Guardar->Quitar());
					string j = G1->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label18->Text = valor1;
					string m = G2->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label19->Text += "\n" + valor2;
					countg2;
					countg1--;
				}
				
			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino=="g3")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G1->Quitar());
				G3->Insertar(Guardar->Quitar());
				string j = G1->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label18->Text =  valor1;
				string i = G3->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label20->Text += "\n" + valor2;
				countg3++;
				countg1--;
			}
			else if(Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G1->Quitar());
				}
				for (int t = 0; t < Posicion; t++){
					G3->Insertar(Guardar->Quitar());
					string j = G1->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label18->Text = valor1;
					string m = G3->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label20->Text += "\n" + valor2;
					countg3++;
					countg1--;
				}
				
			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g4")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G1->Quitar());
				G4->Insertar(Guardar->Quitar());
				string j = G1->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label18->Text = valor1;
				string i = G4->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label21->Text += "\n" + valor2;
				countg4++;
				countg1--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G1->Quitar());
				}
				for (int t = 0; t < Posicion; t++) {
					G4->Insertar(Guardar->Quitar());
					string j = G1->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label18->Text = valor1;
					string m = G4->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label21->Text += "\n" + valor2;
					countg4++;
					countg1--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g5")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G1->Quitar());
				G5->Insertar(Guardar->Quitar());
				string j = G1->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label18->Text = valor1;
				string i = G5->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label22->Text += "\n" + valor2;
				countg5++;
				countg1--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G1->Quitar());
				}
				for (int t = 0; t < Posicion; t++){
					G5->Insertar(Guardar->Quitar());
					string j = G1->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label18->Text = valor1;
					string m = G5->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label22->Text += "\n" + valor2;
					countg5;
					countg1--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g6")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G1->Quitar());
				G6->Insertar(Guardar->Quitar());
				string j = G1->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label18->Text = valor1;
				string i = G6->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label23->Text += "\n" + valor2;
				countg6++;
				countg1--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G1->Quitar());
				}
				for (int t = 0; t < Posicion; t++){
					G6->Insertar(Guardar->Quitar());
					string j = G1->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label18->Text = valor1;
					string m = G6->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label23->Text += "\n" + valor2;
					countg6++;
					countg1--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g7")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G1->Quitar());
				G7->Insertar(Guardar->Quitar());
				string j = G1->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label18->Text = valor1;
				string i = G7->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label24->Text += "\n" + valor2;
				countg7++;
				countg1--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G1->Quitar());
				}
				for (int t = 0; t < Posicion; t++){
					G7->Insertar(Guardar->Quitar());
					string j = G1->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label18->Text = valor1;
					string m = G7->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label24->Text += "\n" + valor2;
					countg7++;
					countg1--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else
		{
			MessageBox::Show("No Valido");
		}
	}
	else if (Origen == "g2")
	{
		if (Destino == "g1")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G2->Quitar());
				G1->Insertar(Guardar->Quitar());
				string j = G2->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label19->Text = valor1;
				string i = G1->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label18->Text += "\n" + valor2;
				countg1++;
				countg2--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G2->Quitar());
				}
				for (int t = 0; t < Posicion; t++){
					G1->Insertar(Guardar->Quitar());
					string j = G2->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label19->Text = valor1;
					string m = G1->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label18->Text += "\n" + valor2;
					countg1++;
					countg2--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g3")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G2->Quitar());
				G3->Insertar(Guardar->Quitar());
				string j = G2->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label19->Text = valor1;
				string i = G3->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label20->Text += "\n" + valor2;
				countg3++;
				countg2--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G2->Quitar());
				}
				for (int t = 0; t < Posicion; t++){
					G3->Insertar(Guardar->Quitar());
					string j = G2->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label19->Text = valor1;
					string m = G3->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label20->Text += "\n" + valor2;
					countg3++;
					countg2--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g4")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G2->Quitar());
				G4->Insertar(Guardar->Quitar());
				string j = G2->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label19->Text = valor1;
				string i = G4->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label21->Text += "\n" + valor2;
				countg4++;
				countg2--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G2->Quitar());
				}
				for (int t = 0; t < Posicion; t++){
					G4->Insertar(Guardar->Quitar());
					string j = G2->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label19->Text = valor1;
					string m = G4->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label21->Text += "\n" + valor2;
					countg4++;
					countg2--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g5")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G2->Quitar());
				G5->Insertar(Guardar->Quitar());
				string j = G2->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label19->Text = valor1;
				string i = G5->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label22->Text += "\n" + valor2;
				countg5++;
				countg2--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G2->Quitar());
				}
				for (int t = 0; t < Posicion; t++){
					G5->Insertar(Guardar->Quitar());
					string j = G2->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label19->Text = valor1;
					string m = G5->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label22->Text += "\n" + valor2;
					countg5;
					countg2--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g6")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G2->Quitar());
				G6->Insertar(Guardar->Quitar());
				string j = G2->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label19->Text = valor1;
				string i = G6->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label23->Text += "\n" + valor2;
				countg6++;
				countg2--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G2->Quitar());
				}for (int t = 0; t < Posicion; t++){
					G6->Insertar(Guardar->Quitar());
					string j = G2->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label19->Text = valor1;
					string m = G6->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label23->Text += "\n" + valor2;
					countg6;
					countg2--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g7")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G2->Quitar());
				G7->Insertar(Guardar->Quitar());
				string j = G2->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label19->Text = valor1;
				string i = G7->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label24->Text += "\n" + valor2;
				countg7++;
				countg2--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G2->Quitar());
				}
				for (int t = 0; t < Posicion; t++){
					G7->Insertar(Guardar->Quitar());
					string j = G2->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label19->Text = valor1;
					string m = G7->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label24->Text += "\n" + valor2;
					countg7++;
					countg2--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else
		{
			MessageBox::Show("No Valido");
		}
	}
	else if (Origen == "g3")
	{
	if (Destino == "g2")
	{
		if (Posicion == 1)
		{
			Guardar->Insertar(G3->Quitar());
			G2->Insertar(Guardar->Quitar());
			string j = G3->Cima();
			String^ valor1 = gcnew String(j.c_str());
			label20->Text = valor1;
			string i = G2->Cima();
			String^ valor2 = gcnew String(i.c_str());
			label19->Text += "\n" + valor2;
			countg2++;
			countg3--;
		}
		else if (Posicion > 1 && Posicion <= 5)
		{
			for (int i = 0; i < Posicion; i++)
			{
				Guardar->Insertar(G3->Quitar());
			}
			for (int t = 0; t < Posicion; t++){
				G2->Insertar(Guardar->Quitar());
				string j = G3->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label20->Text = valor1;
				string m = G2->Cima();
				String^ valor2 = gcnew String(m.c_str());
				label19->Text += "\n" + valor2;
				countg2++;
				countg3--;
			}

		}
		else
		{
			MessageBox::Show("No Valido");
		}
	}
	else if (Destino == "g1")
	{
		if (Posicion == 1)
		{
			Guardar->Insertar(G3->Quitar());
			G1->Insertar(Guardar->Quitar());
			string j = G3->Cima();
			String^ valor1 = gcnew String(j.c_str());
			label20->Text = valor1;
			string i = G1->Cima();
			String^ valor2 = gcnew String(i.c_str());
			label18->Text += "\n" + valor2;
			countg1++;
			countg3--;
		}
		else if (Posicion > 1 && Posicion <= 5)
		{
			for (int i = 0; i < Posicion; i++)
			{
				Guardar->Insertar(G3->Quitar());
			}
			for (int t = 0; t < Posicion; t++){
				G1->Insertar(Guardar->Quitar());
				string j = G3->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label20->Text = valor1;
				string m = G1->Cima();
				String^ valor2 = gcnew String(m.c_str());
				label18->Text += "\n" + valor2;
				countg1++;
				countg3--;
			}

		}
		else
		{
			MessageBox::Show("No Valido");
		}
	}
	else if (Destino == "g4")
	{
		if (Posicion == 1)
		{
			Guardar->Insertar(G3->Quitar());
			G4->Insertar(Guardar->Quitar());
			string j = G3->Cima();
			String^ valor1 = gcnew String(j.c_str());
			label20->Text = valor1;
			string i = G4->Cima();
			String^ valor2 = gcnew String(i.c_str());
			label21->Text += "\n" + valor2;
			countg4++;
			countg3--;
		}
		else if (Posicion > 1 && Posicion <= 5)
		{
			for (int i = 0; i < Posicion; i++)
			{
				Guardar->Insertar(G3->Quitar());
			}for (int t = 0; t < Posicion; t++)
			{
				G4->Insertar(Guardar->Quitar());
				string j = G3->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label20->Text = valor1;
				string m = G4->Cima();
				String^ valor2 = gcnew String(m.c_str());
				label21->Text += "\n" + valor2;
				countg4++;
				countg3--;
			}

		}
		else
		{
			MessageBox::Show("No Valido");
		}
	}
	else if (Destino == "g5")
	{
		if (Posicion == 1)
		{
			Guardar->Insertar(G3->Quitar());
			G5->Insertar(Guardar->Quitar());
			string j = G3->Cima();
			String^ valor1 = gcnew String(j.c_str());
			label20->Text = valor1;
			string i = G5->Cima();
			String^ valor2 = gcnew String(i.c_str());
			label22->Text += "\n" + valor2;
			countg5++;
			countg3--;
		}
		else if (Posicion > 1 && Posicion <= 5)
		{
			for (int i = 0; i < Posicion; i++)
			{
				Guardar->Insertar(G3->Quitar());
			}
			for (int t = 0; t < Posicion; t++)
			{
				G5->Insertar(Guardar->Quitar());
				string j = G3->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label20->Text = valor1;
				string m = G5->Cima();
				String^ valor2 = gcnew String(m.c_str());
				label22->Text += "\n" + valor2;
				countg5++;
				countg3--;
			}

		}
		else
		{
			MessageBox::Show("No Valido");
		}
	}
	else if (Destino == "g6")
	{
		if (Posicion == 1)
		{
			Guardar->Insertar(G3->Quitar());
			G6->Insertar(Guardar->Quitar());
			string j = G3->Cima();
			String^ valor1 = gcnew String(j.c_str());
			label20->Text = valor1;
			string i = G6->Cima();
			String^ valor2 = gcnew String(i.c_str());
			label23->Text += "\n" + valor2;
			countg6++;
			countg3--;
		}
		else if (Posicion > 1 && Posicion <= 5)
		{
			for (int i = 0; i < Posicion; i++)
			{
				Guardar->Insertar(G3->Quitar());
			}
			for (int t = 0; t < Posicion; t++)
			{
				G6->Insertar(Guardar->Quitar());
				string j = G3->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label20->Text = valor1;
				string m = G6->Cima();
				String^ valor2 = gcnew String(m.c_str());
				label23->Text += "\n" + valor2;
				countg6++;
				countg3--;
			}

		}
		else
		{
			MessageBox::Show("No Valido");
		}
	}
	else if (Destino == "g7")
	{
		if (Posicion == 1)
		{
			Guardar->Insertar(G3->Quitar());
			G7->Insertar(Guardar->Quitar());
			string j = G3->Cima();
			String^ valor1 = gcnew String(j.c_str());
			label20->Text = valor1;
			string i = G7->Cima();
			String^ valor2 = gcnew String(i.c_str());
			label24->Text += "\n" + valor2;
			countg7++;
			countg3--;
		}
		else if (Posicion > 1 && Posicion <= 5)
		{
			for (int i = 0; i < Posicion; i++)
			{
				Guardar->Insertar(G3->Quitar());
			}
			for (int t = 0; t < Posicion; t++){
				G7->Insertar(Guardar->Quitar());
				string j = G3->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label20->Text = valor1;
				string m = G7->Cima();
				String^ valor2 = gcnew String(m.c_str());
				label24->Text += "\n" + valor2;
				countg7++;
				countg3--;
			}

		}
		else
		{
			MessageBox::Show("No Valido");
		}
	}
	else
	{
		MessageBox::Show("No Valido");
	}
	}
	else if (Origen == "g4")
	{
	if (Destino == "g1")
	{
		if (Posicion == 1)
		{
			Guardar->Insertar(G4->Quitar());
			G1->Insertar(Guardar->Quitar());
			string j = G4->Cima();
			String^ valor1 = gcnew String(j.c_str());
			label21->Text = valor1;
			string i = G1->Cima();
			String^ valor2 = gcnew String(i.c_str());
			label18->Text += "\n" + valor2;
			countg1++;
			countg4--;
		}
		else if (Posicion > 1 && Posicion <= 5)
		{
			for (int i = 0; i < Posicion; i++)
			{
				Guardar->Insertar(G4->Quitar());
			}for (int t = 0; t < Posicion; t++){
				G1->Insertar(Guardar->Quitar());
				string j = G4->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label21->Text = valor1;
				string m = G1->Cima();
				String^ valor2 = gcnew String(m.c_str());
				label18->Text += "\n" + valor2;
				countg1++;
				countg4--;
			}

		}
		else
		{
			MessageBox::Show("No Valido");
		}
	}
	else if (Destino == "g3")
	{
		if (Posicion == 1)
		{
			Guardar->Insertar(G4->Quitar());
			G3->Insertar(Guardar->Quitar());
			string j = G4->Cima();
			String^ valor1 = gcnew String(j.c_str());
			label21->Text = valor1;
			string i = G3->Cima();
			String^ valor2 = gcnew String(i.c_str());
			label20->Text += "\n" + valor2;
			countg3++;
			countg4--;
		}
		else if (Posicion > 1 && Posicion <= 5)
		{
			for (int i = 0; i < Posicion; i++)
			{
				Guardar->Insertar(G4->Quitar());
			}
			for (int t = 0; t < Posicion; t++){
				G3->Insertar(Guardar->Quitar());
				string j = G4->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label21->Text = valor1;
				string m = G3->Cima();
				String^ valor2 = gcnew String(m.c_str());
				label20->Text += "\n" + valor2;
				countg3++;
				countg4--;
			}

		}
		else
		{
			MessageBox::Show("No Valido");
		}
	}
	else if (Destino == "g2")
	{
		if (Posicion == 1)
		{
			Guardar->Insertar(G4->Quitar());
			G2->Insertar(Guardar->Quitar());
			string j = G4->Cima();
			String^ valor1 = gcnew String(j.c_str());
			label21->Text = valor1;
			string i = G2->Cima();
			String^ valor2 = gcnew String(i.c_str());
			label19->Text += "\n" + valor2;
			countg2++;
			countg4--;
		}
		else if (Posicion > 1 && Posicion <= 5)
		{
			for (int i = 0; i < Posicion; i++)
			{
				Guardar->Insertar(G4->Quitar());
			}
			for (int t = 0; t < Posicion; t++){
				G2->Insertar(Guardar->Quitar());
				string j = G4->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label21->Text = valor1;
				string m = G2->Cima();
				String^ valor2 = gcnew String(m.c_str());
				label19->Text += "\n" + valor2;
				countg2++;
				countg4--;
			}

		}
		else
		{
			MessageBox::Show("No Valido");
		}
	}
	else if (Destino == "g5")
	{
		if (Posicion == 1)
		{
			Guardar->Insertar(G4->Quitar());
			G5->Insertar(Guardar->Quitar());
			string j = G4->Cima();
			String^ valor1 = gcnew String(j.c_str());
			label21->Text = valor1;
			string i = G5->Cima();
			String^ valor2 = gcnew String(i.c_str());
			label22->Text += "\n" + valor2;
			countg5++;
			countg4--;
		}
		else if (Posicion > 1 && Posicion <= 5)
		{
			for (int i = 0; i < Posicion; i++)
			{
				Guardar->Insertar(G4->Quitar());
			}
			for (int t = 0; t < Posicion; t++){
				G5->Insertar(Guardar->Quitar());
				string j = G4->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label21->Text = valor1;
				string m = G5->Cima();
				String^ valor2 = gcnew String(m.c_str());
				label22->Text += "\n" + valor2;
				countg5++;
				countg4--;
			}

		}
		else
		{
			MessageBox::Show("No Valido");
		}
	}
	else if (Destino == "g6")
	{
		if (Posicion == 1)
		{
			Guardar->Insertar(G4->Quitar());
			G6->Insertar(Guardar->Quitar());
			string j = G4->Cima();
			String^ valor1 = gcnew String(j.c_str());
			label21->Text = valor1;
			string i = G6->Cima();
			String^ valor2 = gcnew String(i.c_str());
			label23->Text += "\n" + valor2;
			countg6++;
			countg4--;
		}
		else if (Posicion > 1 && Posicion <= 5)
		{
			for (int i = 0; i < Posicion; i++)
			{
				Guardar->Insertar(G4->Quitar());
			}
			for (int t = 0; t < Posicion; t++){
				G6->Insertar(Guardar->Quitar());
				string j = G4->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label21->Text = valor1;
				string m = G6->Cima();
				String^ valor2 = gcnew String(m.c_str());
				label23->Text += "\n" + valor2;
				countg6++;
				countg4--;
			}

		}
		else
		{
			MessageBox::Show("No Valido");
		}
	}
	else if (Destino == "g7")
	{
		if (Posicion == 1)
		{
			Guardar->Insertar(G4->Quitar());
			G7->Insertar(Guardar->Quitar());
			string j = G4->Cima();
			String^ valor1 = gcnew String(j.c_str());
			label21->Text = valor1;
			string i = G7->Cima();
			String^ valor2 = gcnew String(i.c_str());
			label24->Text += "\n" + valor2;
			countg7++;
			countg4--;
		}
		else if (Posicion > 1 && Posicion <= 5)
		{
			for (int i = 0; i < Posicion; i++)
			{
				Guardar->Insertar(G4->Quitar());
			}for (int t = 0; t < Posicion; t++){
				G7->Insertar(Guardar->Quitar());
				string j = G4->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label21->Text = valor1;
				string m = G7->Cima();
				String^ valor2 = gcnew String(m.c_str());
				label24->Text += "\n" + valor2;
				countg7++;
				countg4--;
			}

		}
		else
		{
			MessageBox::Show("No Valido");
		}
	}
	else
	{
		MessageBox::Show("No Valido");
	}
	}
	else if (Origen == "g5")
	{
		if (Destino == "g2")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G5->Quitar());
				G2->Insertar(Guardar->Quitar());
				string j = G5->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label22->Text = valor1;
				string i = G2->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label19->Text += "\n" + valor2;
				countg2++;
				countg5--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G5->Quitar());
				}for (int t = 0; t < Posicion; t++)
				{
					G2->Insertar(Guardar->Quitar());
					string j = G5->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label22->Text = valor1;
					string m = G2->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label19->Text += "\n" + valor2;
					countg2++;
					countg5--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g3")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G5->Quitar());
				G3->Insertar(Guardar->Quitar());
				string j = G5->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label22->Text = valor1;
				string i = G3->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label20->Text += "\n" + valor2;
				countg3++;
				countg5--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G5->Quitar());
				}
				for (int t = 0; t < Posicion; t++)
				{
					G3->Insertar(Guardar->Quitar());
					string j = G5->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label22->Text = valor1;
					string m = G3->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label20->Text += "\n" + valor2;
					countg3++;
					countg5--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g4")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G5->Quitar());
				G4->Insertar(Guardar->Quitar());
				string j = G5->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label22->Text = valor1;
				string i = G4->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label21->Text += "\n" + valor2;
				countg4++;
				countg5--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G5->Quitar());
				}
				for (int t = 0; t < Posicion; t++)
				{
					G4->Insertar(Guardar->Quitar());
					string j = G5->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label22->Text = valor1;
					string m = G4->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label21->Text += "\n" + valor2;
					countg4++;
					countg5--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g1")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G5->Quitar());
				G1->Insertar(Guardar->Quitar());
				string j = G5->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label22->Text = valor1;
				string i = G1->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label18->Text += "\n" + valor2;
				countg1++;
				countg5--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G5->Quitar());
				}
				for (int t = 0; t < Posicion; t++)
				{
					G1->Insertar(Guardar->Quitar());
					string j = G5->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label22->Text = valor1;
					string m = G1->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label18->Text += "\n" + valor2;
					countg1++;
					countg5--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g6")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G5->Quitar());
				G6->Insertar(Guardar->Quitar());
				string j = G5->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label22->Text = valor1;
				string i = G6->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label23->Text += "\n" + valor2;
				countg6++;
				countg5--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G5->Quitar());
				}
				for (int t = 0; t < Posicion; t++)
				{
					G6->Insertar(Guardar->Quitar());
					string j = G5->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label22->Text = valor1;
					string m = G6->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label23->Text += "\n" + valor2;
					countg6++;
					countg5--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g7")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G5->Quitar());
				G7->Insertar(Guardar->Quitar());
				string j = G5->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label22->Text = valor1;
				string i = G7->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label24->Text += "\n" + valor2;
				countg6++;
				countg5--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G5->Quitar());
				}
				for (int t = 0; t < Posicion; t++){
					G7->Insertar(Guardar->Quitar());
					string j = G5->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label22->Text = valor1;
					string m = G7->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label24->Text += "\n" + valor2;
					countg6++;
					countg5--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else
		{
			MessageBox::Show("No Valido");
		}
	}
	else if (Origen == "g6")
	{
		if (Destino == "g1")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G6->Quitar());
				G1->Insertar(Guardar->Quitar());
				string j = G6->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label23->Text = valor1;
				string i = G1->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label18->Text += "\n" + valor2;
				countg1++;
				countg6--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G6->Quitar());
				}
				for (int t = 0; t < Posicion; t++)
				{
					G1->Insertar(Guardar->Quitar());
					string j = G6->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label23->Text = valor1;
					string m = G1->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label18->Text += "\n" + valor2;
					countg1++;
					countg6--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g3")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G6->Quitar());
				G3->Insertar(Guardar->Quitar());
				string j = G6->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label23->Text = valor1;
				string i = G3->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label20->Text += "\n" + valor2;
				countg3++;
				countg6--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G6->Quitar());
				}
				for (int t = 0; t < Posicion; t++)
				{
					G3->Insertar(Guardar->Quitar());
					string j = G6->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label23->Text = valor1;
					string m = G3->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label20->Text += "\n" + valor2;
					countg3++;
					countg6--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g4")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G6->Quitar());
				G4->Insertar(Guardar->Quitar());
				string j = G6->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label23->Text = valor1;
				string i = G4->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label21->Text += "\n" + valor2;
				countg4++;
				countg6--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G6->Quitar());
				}
				for (int t = 0; t < Posicion; t++)
				{
					G4->Insertar(Guardar->Quitar());
					string j = G6->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label23->Text = valor1;
					string m = G4->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label21->Text += "\n" + valor2;
					countg4++;
					countg6--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g5")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G6->Quitar());
				G5->Insertar(Guardar->Quitar());
				string j = G6->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label23->Text = valor1;
				string i = G5->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label22->Text += "\n" + valor2;
				countg5++;
				countg6--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G6->Quitar());
				}
				for (int t = 0; t < Posicion; t++)
				{
					G5->Insertar(Guardar->Quitar());
					string j = G6->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label23->Text = valor1;
					string m = G5->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label22->Text += "\n" + valor2;
					countg5++;
					countg6--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g2")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G6->Quitar());
				G2->Insertar(Guardar->Quitar());
				string j = G6->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label23->Text = valor1;
				string i = G2->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label19->Text += "\n" + valor2;
				countg2++;
				countg6--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G6->Quitar());
				}
				for (int t = 0; t < Posicion; t++)
				{
					G2->Insertar(Guardar->Quitar());
					string j = G6->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label23->Text = valor1;
					string m = G2->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label19->Text += "\n" + valor2;
					countg2++;
					countg6--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g7")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G6->Quitar());
				G7->Insertar(Guardar->Quitar());
				string j = G6->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label23->Text = valor1;
				string i = G7->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label24->Text += "\n" + valor2;
				countg7++;
				countg6--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G6->Quitar());
				}
				for (int t = 0; t < Posicion; t++)
				{
					G7->Insertar(Guardar->Quitar());
					string j = G6->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label23->Text = valor1;
					string m = G7->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label24->Text += "\n" + valor2;
					countg7++;
					countg6--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else
		{
			MessageBox::Show("No Valido");
		}
	}
	else if (Origen == "g7")
	{
		if (Destino == "g2")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G7->Quitar());
				G2->Insertar(Guardar->Quitar());
				string j = G7->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label24->Text = valor1;
				string i = G2->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label19->Text += "\n" + valor2;
				countg2++;
				countg7--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G7->Quitar());
				}
				for (int t = 0; t < Posicion; t++)
				{
					G2->Insertar(Guardar->Quitar());
					string j = G7->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label24->Text = valor1;
					string m = G2->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label19->Text += "\n" + valor2;
					countg2++;
					countg7--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g1")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G7->Quitar());
				G1->Insertar(Guardar->Quitar());
				string j = G7->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label24->Text = valor1;
				string i = G1->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label18->Text += "\n" + valor2;
				countg1++;
				countg7--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G7->Quitar());
				}
				for (int t = 0; t < Posicion; t++)
				{
					G1->Insertar(Guardar->Quitar());
					string j = G7->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label24->Text = valor1;
					string m = G1->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label18->Text += "\n" + valor2;
					countg1++;
					countg7--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g4")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G7->Quitar());
				G4->Insertar(Guardar->Quitar());
				string j = G7->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label24->Text = valor1;
				string i = G4->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label21->Text += "\n" + valor2;
				countg4++;
				countg7--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G7->Quitar());
				}
				for (int t = 0; t < Posicion; t++)
				{
					G4->Insertar(Guardar->Quitar());
					string j = G7->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label24->Text = valor1;
					string m = G4->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label21->Text += "\n" + valor2;
					countg4++;
					countg7--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g5")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G7->Quitar());
				G5->Insertar(Guardar->Quitar());
				string j = G7->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label24->Text = valor1;
				string i = G5->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label22->Text += "\n" + valor2;
				countg5++;
				countg7--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G7->Quitar());
				}
				for (int t = 0; t < Posicion; t++)
				{
					G5->Insertar(Guardar->Quitar());
					string j = G7->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label24->Text = valor1;
					string m = G5->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label22->Text += "\n" + valor2;
					countg5++;
					countg7--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g6")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G7->Quitar());
				G6->Insertar(Guardar->Quitar());
				string j = G7->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label24->Text = valor1;
				string i = G6->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label23->Text += "\n" + valor2;
				countg6++;
				countg7--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G7->Quitar());
				}
				for (int t = 0; t < Posicion; t++)
				{
					G6->Insertar(Guardar->Quitar());
					string j = G7->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label24->Text = valor1;
					string m = G6->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label23->Text += "\n" + valor2;
					countg6++;
					countg7--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g3")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(G7->Quitar());
				G3->Insertar(Guardar->Quitar());
				string j = G7->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label24->Text = valor1;
				string i = G3->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label20->Text += "\n" + valor2;
				countg3++;
				countg7--;
			}
			else if (Posicion > 1 && Posicion <= 5)
			{
				for (int i = 0; i < Posicion; i++)
				{
					Guardar->Insertar(G7->Quitar());
				}
				for (int t = 0; t < Posicion; t++)
				{
					G3->Insertar(Guardar->Quitar());
					string j = G7->Cima();
					String^ valor1 = gcnew String(j.c_str());
					label24->Text = valor1;
					string m = G3->Cima();
					String^ valor2 = gcnew String(m.c_str());
					label20->Text += "\n" + valor2;
					countg3++;
					countg7--;
				}

			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else
		{
			MessageBox::Show("No Valido");
		}
	}
	else if (Origen == "Mazo")
	{
		if (Destino == "g1")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(Mazo->Quitar());
				G1->Insertar(Guardar->Quitar());
				string j = Mazo->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label25->Text = valor1;
				string i = G1->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label18->Text += "\n" + valor2;
			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g3")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(Mazo->Quitar());
				G3->Insertar(Guardar->Quitar());
				string j = Mazo->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label25->Text = valor1;
				string i = G3->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label20->Text += "\n" + valor2;
			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g2")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(Mazo->Quitar());
				G2->Insertar(Guardar->Quitar());
				string j = Mazo->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label25->Text = valor1;
				string i = G2->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label19->Text += "\n" + valor2;
			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g5")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(Mazo->Quitar());
				G5->Insertar(Guardar->Quitar());
				string j = Mazo->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label25->Text = valor1;
				string i = G5->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label22->Text += "\n" + valor2;
			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g6")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(Mazo->Quitar());
				G6->Insertar(Guardar->Quitar());
				string j = Mazo->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label25->Text = valor1;
				string i = G6->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label23->Text += "\n" + valor2;
			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g7")
		{
			if (Posicion == 1)
			{
				Guardar->Insertar(Mazo->Quitar());
				G7->Insertar(Guardar->Quitar());
				string j = Mazo->Cima();
				String^ valor1 = gcnew String(j.c_str());
				label25->Text = valor1;
				string i = G7->Cima();
				String^ valor2 = gcnew String(i.c_str());
				label24->Text += "\n" + valor2;
			}
			else
			{
				MessageBox::Show("No Valido");
			}
		}
		else if (Destino == "g4")
		{
		if (Posicion == 1)
		{
			Guardar->Insertar(Mazo->Quitar());
			G4->Insertar(Guardar->Quitar());
			string j = Mazo->Cima();
			String^ valor1 = gcnew String(j.c_str());
			label25->Text = valor1;
			string i = G4->Cima();
			String^ valor2 = gcnew String(i.c_str());
			label21->Text += "\n" + valor2;
		}
		else
		{
			MessageBox::Show("No Valido");
		}
		}
		else
		{
			MessageBox::Show("No Valido");
		}
	}
	if(countg1 >= 5 || countg2 >= 5 || countg3 >= 5 || countg4 >= 5 || countg5 >= 5 || countg6 >= 5 || countg7 >= 5 )
	{
		MessageBox::Show("Ha Ganado");
	}
};
};

}