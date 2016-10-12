#pragma once

#include<iostream>
using namespace std;
#include <string>
#include "Automato.h"

namespace AS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for TesteAutomatoForm
	/// </summary>
	public ref class TesteAutomatoForm : public System::Windows::Forms::Form
	{
	public:
		TesteAutomatoForm(int op)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
			setAF(op);
			Status = -1;
			Imagem = 1;

		}

		//ponteiro af;
		int getStatus();
		void setStatus(int);
		string getPalavra();
		void setLabel(string);
		void setProxEstado(bool);
		bool getProxEstado();
		void setImagemEstado(string);
		bool testeAutomato1(string);
		void setAF(int);
		void sleepcp(int milliseconds); // cross-platform sleep function
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
		~TesteAutomatoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		int Imagem;
		int Status;
		bool proxEstado = false;
		ponteiro af;
		int I = 0;
		

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

			 

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TesteAutomatoForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(541, 183);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(301, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Validar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TesteAutomatoForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(435, 407);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(215, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"                      ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(541, 140);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(301, 37);
			this->textBox1->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 79);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(480, 276);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gudea", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(158)),
				static_cast<System::Int32>(static_cast<System::Byte>(123)));
			this->label2->Location = System::Drawing::Point(304, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(300, 43);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Teste do Automato";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gudea", 14.25F));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(549, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Informe a palavra";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(159, 361);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 45);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Próximo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TesteAutomatoForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(53, 361);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 45);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Cancelar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &TesteAutomatoForm::button3_Click);
			// 
			// TesteAutomatoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(854, 476);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"TesteAutomatoForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"TesteAutomatoForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TesteAutomatoForm::TesteAutomatoForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &TesteAutomatoForm::TesteAutomatoForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 setImagemEstado(af->imagem);
	}
	private: System::Void TesteAutomatoForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				 Status = 0;
				 this->Visible = false;
	}
private: System::Void TesteAutomatoForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 string palavra = getPalavra();
			 int tamanho = palavra.size();
			 bool rejeita = true;


			 for (int j = 0; j < 10; j++){
				 if (af->transicoes[j].simboloAceito == palavra[I]){

					 af = af->transicoes[j].link;
					 I++;
					 setImagemEstado(af->imagem);
					 rejeita = false;
					 break;
				 }
			 }
			 if (rejeita){
				 setLabel("Rejeita");
			 }
			 if (af->isFinal == true && palavra.size() == I){
				 setLabel("Aceita");
			 }

}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 setImagemEstado("C:\\AS/images/automato1/estado1.png");
}
};
}
