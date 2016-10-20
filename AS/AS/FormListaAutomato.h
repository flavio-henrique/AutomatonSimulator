#pragma once

namespace AS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormListaAutomato
	/// </summary>
	public ref class FormListaAutomato : public System::Windows::Forms::Form
	{
	public:
		FormListaAutomato(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Status = -1;
		}
		int getStatus();
		void setStatus(int);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormListaAutomato()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

			 int Status;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormListaAutomato::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(181, 179);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(542, 83);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Reconhecer uma linguagem tal que a palavra seja dividida em duas subpalavras e co"
				L"ntenha números ímpares de \'a\' e \'b\'";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormListaAutomato::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::Lime;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(181, 278);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(542, 83);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Reconhecer uma linguagem tal que o sufixo da palavra seja \'aa\'";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormListaAutomato::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->BackColor = System::Drawing::Color::Lime;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(181, 375);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(542, 83);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Mundo Real - Porta automática";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FormListaAutomato::button3_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 39, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Lime;
			this->label2->Location = System::Drawing::Point(-62, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(989, 59);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Lista de Autômatos Finitos  Determinístico";
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::Lime;
			this->button4->Location = System::Drawing::Point(85, 609);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(140, 45);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Voltar";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FormListaAutomato::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button5->BackColor = System::Drawing::Color::Lime;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(181, 472);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(542, 83);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Reconhecer uma linguagem tal que a palavra seja \'printf\"";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &FormListaAutomato::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button6->BackColor = System::Drawing::Color::Lime;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(181, 569);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(542, 83);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Mundo Real - Torneira com sonsor";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &FormListaAutomato::button6_Click);
			// 
			// FormListaAutomato
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(854, 740);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"FormListaAutomato";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"FormListaAutomato";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &FormListaAutomato::FormListaAutomatoClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormListaAutomatoClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				 Status = 0;
				 this->Visible = false;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Status = 1;
				 this->Visible = false;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Status = 2;
				 this->Visible = false;
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 Status = 0;
				 this->Visible = false;
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Status = 3;
			 this->Visible = false;
    }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 Status = 4;
			 this->Visible = false;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 Status = 5;
			 this->Visible = false;
}


};
}
