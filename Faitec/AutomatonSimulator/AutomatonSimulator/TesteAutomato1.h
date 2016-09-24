#pragma once
#include<iostream>
using namespace std;
#include <string>
namespace AutomatonSimulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TesteAutomato1
	/// </summary>
	public ref class TesteAutomato1 : public System::Windows::Forms::Form
	{
	public:
		TesteAutomato1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Status = -1;
			Resposta = NULL;
		}
		int getStatus();
		string getPalavra();
		void setResposta(bool);
		void MarshalString(String ^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TesteAutomato1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		int Status;
	private: System::Windows::Forms::Label^  label2;
			 bool Resposta;
#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->SuspendLayout();
				 // 
				 // textBox1
				 // 
				 this->textBox1->Location = System::Drawing::Point(118, 97);
				 this->textBox1->Name = L"textBox1";
				 this->textBox1->Size = System::Drawing::Size(100, 20);
				 this->textBox1->TabIndex = 0;
				 this->textBox1->TextChanged += gcnew System::EventHandler(this, &TesteAutomato1::textBox1_TextChanged);
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(140, 70);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(43, 13);
				 this->label1->TabIndex = 1;
				 this->label1->Text = L"Palavra";
				 // 
				 // button1
				 // 
				 this->button1->Location = System::Drawing::Point(128, 123);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(75, 23);
				 this->button1->TabIndex = 2;
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &TesteAutomato1::button1_Click);
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(155, 172);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(35, 13);
				 this->label2->TabIndex = 3;
				 this->label2->Text = L"label2";
				 // 
				 // TesteAutomato1
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(284, 261);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->button1);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->textBox1);
				 this->Name = L"TesteAutomato1";
				 this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
				 this->Text = L"TesteAutomato1";
				 this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TesteAutomato1::TesteAutomato1_FormClosed);
				 this->Load += gcnew System::EventHandler(this, &TesteAutomato1::TesteAutomato1_Load);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void TesteAutomato1_Load(System::Object^  sender, System::EventArgs^  e) {
		if (Resposta == NULL) {
			label2->Text = "";

		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 1;
		this->Visible = false
	}
	private: System::Void TesteAutomato1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		Status = 0;
		this->Visible = false;
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 1;
		this->Visible = false;
	}
	private: System::Void Opcao1Form_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		Status = 0;
		this->Visible = false;
	}
	private: System::Void Opcao1Form_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void Opcao1Form_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
		if (Resposta == NULL) {
			label2->Text = "";
		}
		else if (Resposta) {
			label2->Text = "Aceita";
		}
		else {
			label2->Text = "Rejeita";
		}
	}
	};
	}
