#pragma once

#include<iostream>
using namespace std;
#include <string>
#include "Automato.h"
#include <windows.h>

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
		void setSimbolo(string);
		void setImagemEstado(string);
		void setImagemResultado(string);
		bool testeAutomato1(string);
		void unsetImagemResultado();
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
		ponteiro af;
		ponteiro afAux;
		int I = 0;
		

	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  resultado;
	private: System::Windows::Forms::Button^  button4;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->resultado = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resultado))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::SpringGreen;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(550, 280);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(301, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Validar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TesteAutomatoForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->textBox1->Location = System::Drawing::Point(550, 237);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(301, 47);
			this->textBox1->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(21, 176);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(481, 298);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->label2->Location = System::Drawing::Point(325, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(309, 39);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Teste do Automato";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(558, 212);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Informe a palavra";
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::SpringGreen;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(167, 458);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 55);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Próximo";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &TesteAutomatoForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->BackColor = System::Drawing::Color::SpringGreen;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(45, 458);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 55);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Novo Teste";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &TesteAutomatoForm::button3_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(45, 58);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 24);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Símbolo: ";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label5->Location = System::Drawing::Point(140, 58);
			this->label5->Name = L"label5";
			this->label5->Padding = System::Windows::Forms::Padding(10, 1, 10, 1);
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label5->Size = System::Drawing::Size(40, 26);
			this->label5->TabIndex = 9;
			this->label5->Text = L"a";
			this->label5->Visible = false;
			// 
			// resultado
			// 
			this->resultado->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->resultado->BackColor = System::Drawing::Color::Transparent;
			this->resultado->Location = System::Drawing::Point(581, 409);
			this->resultado->Name = L"resultado";
			this->resultado->Size = System::Drawing::Size(241, 93);
			this->resultado->TabIndex = 10;
			this->resultado->TabStop = false;
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->button4->Location = System::Drawing::Point(72, 506);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(140, 45);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Voltar";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &TesteAutomatoForm::button4_Click);
			// 
			// TesteAutomatoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(881, 611);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->resultado);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"TesteAutomatoForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"TesteAutomatoForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TesteAutomatoForm::TesteAutomatoForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &TesteAutomatoForm::TesteAutomatoForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resultado))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 string palavra = getPalavra();

				 afAux = af;
				 setImagemEstado(afAux->imagem);
				 I = 0;
				 unsetImagemResultado();
				 button1->Enabled = false;
				 button1->Text = "Em processo...";
				 button2->Enabled = true;
				 button3->Enabled = true; 
				 label4->Visible = true;
				 label5->Visible = true;
				 string simbolo = " ";
				 simbolo[0] = palavra[I];
				 setSimbolo(simbolo);
	}
	private: System::Void TesteAutomatoForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				 Status = 0;
				 this->Visible = false;
	}
private: System::Void TesteAutomatoForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Automato automato;
			 string palavra = getPalavra();
			 int tamanho = palavra.size();
			 bool rejeita = true;
			 
			 
			 
			 for (int j = 0; j < 10; j++){
				 if (afAux->transicoes[j].simboloAceito == palavra[I]){

					 afAux = afAux->transicoes[j].link;
					 I++;
					 setImagemEstado(afAux->imagem);
					 rejeita = false;
					 break;
				 }
			 }
			 string simbolo = " ";
			 simbolo[0] = palavra[I];
			 setSimbolo(simbolo);
			 if (rejeita){
				 setImagemResultado(automato.getDiretorio() + "images/invalido.png");
				 button2->Enabled = false;
			 }
			 if (afAux->isFinal == true && palavra.size() == I){
				 setImagemResultado(automato.getDiretorio() + "images/valido.png");
				 button2->Enabled = false;
			 }

}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 afAux = af;
			 setImagemEstado(afAux->imagemInicial);
			 I = 0;
			 unsetImagemResultado();
			 textBox1->Text = "";
			 button1->Text = "Validar";
			 button1->Enabled = true;
			 label4->Visible = false;
			 label5->Visible = false;
}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 Status = 0;
			 this->Visible = false;
}
};
}
