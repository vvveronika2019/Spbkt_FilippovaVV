#pragma once

#include <string>
#include <fstream>
#include <algorithm>
#include <Windows.h>
#include <string>
#include "inputlib.h"

namespace PraktikaFilippovaVV {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^  label3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(174, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Имя";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(174, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Фамилия";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 7);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 33);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(156, 20);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(261, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Войти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Location = System::Drawing::Point(12, 60);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(465, 169);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Visible = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Location = System::Drawing::Point(7, 50);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(452, 109);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(7, 77);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(439, 20);
			this->textBox4->TabIndex = 2;
			this->textBox4->Visible = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(7, 47);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(439, 23);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Отсортировать числа";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(7, 20);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(439, 20);
			this->textBox3->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(7, 20);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(452, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Вывести числа из файла";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 232);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Филиппова Вероника";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(489, 271);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int* mas = new int[100];

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ name;
			String^ last_name;
			name = Convert::ToString(textBox1->Text);
			last_name = Convert::ToString(textBox2->Text);
				if (name != "Вероника" && last_name != "Филиппова")
				{
					MessageBox::Show("Введены не верные данные!", "Ошибка доступа.",
						MessageBoxButtons::OK,
						MessageBoxIcon::Warning);
				}
				else if (name == "Вероника" && last_name == "Филиппова")
				{
					groupBox1->Visible = true;
					groupBox2->Visible = false;
				}
	
		}
		catch (System::FormatException^ex) {
			if (textBox1 -> Text != "admin" && textBox2->Text != "admin")
			{
				MessageBox::Show("Введены не верные данные!", "Ошибка доступа.",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
			}
		}
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	HANDLE hPipe = CreateNamedPipe(L"//.//pipe/pipename", PIPE_ACCESS_DUPLEX,
		PIPE_READMODE_MESSAGE | PIPE_TYPE_MESSAGE |
		PIPE_WAIT,1024,1024,0,INFINITY,0);
	CloseHandle(hPipe);
	fillfile();
	std::ifstream file;
	groupBox2->Visible = true;
	textBox4->Visible = false;
	
	file.open("file.txt");
	if (file.is_open())
	{
		for (int i = 0; i < 100; i++)
		{
			file >> mas[i];
			textBox3->Text += Convert::ToString(mas[i]) + " ";
		}
		file.close();
	}
	else
	{
		textBox3->Text = "Ошибка";
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	sort(mas, mas + 100, std::less<int>());
	std::ofstream file;
	file.open("new.txt");
	if (file.is_open())
	{
		textBox4->Visible = true;
		for (int i = 0; i < 100; i++)
		{
			textBox4->Text += Convert::ToString(mas[i]) + " ";
			file << mas[i] << " ";
		}
	}
}
};
}
