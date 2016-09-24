#pragma once
#include <iostream>
using namespace std;
#include <string>
namespace Projeto2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para Opcao1Form
	/// </summary>
	public ref class Opcao1Form : public System::Windows::Forms::Form
	{
	public:
		Opcao1Form(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
			Status = -1;
			Resposta = NULL;
		}
		int getStatus();
		void setStatus(int);
		string getPalavra();
		void setResposta(bool);
		void setLabel(string);
		void MarshalString(String ^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~Opcao1Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		int Status;
		bool Resposta;
	private: System::Windows::Forms::TextBox^  textBox2;
			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte do Designer - não modifique
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(228, 113);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 20);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(265, 165);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Analisar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Opcao1Form::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(225, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Palavra:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(279, 240);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(228, 217);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(152, 20);
			this->textBox2->TabIndex = 4;
			// 
			// Opcao1Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(633, 405);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(649, 443);
			this->MinimumSize = System::Drawing::Size(649, 443);
			this->Name = L"Opcao1Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Opcao1Form";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Opcao1Form::Opcao1Form_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Opcao1Form::Opcao1Form_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &Opcao1Form::Opcao1Form_VisibleChanged);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
			 if (Resposta == NULL){
				 label2->Text = "";
			 }
			 else if (Resposta){
				 label2->Text = "Aceita";
			 }
			 else{
				 label2->Text = "Rejeita";
			 }
}
};
}
