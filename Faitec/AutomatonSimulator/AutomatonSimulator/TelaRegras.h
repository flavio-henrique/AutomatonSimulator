#pragma once

namespace AutomatonSimulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaRegras
	/// </summary>
	public ref class TelaRegras : public System::Windows::Forms::Form
	{
	public:
		TelaRegras(void)
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
		~TelaRegras()
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
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;



		int Status;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaRegras::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 26.25F, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->button1->Location = System::Drawing::Point(299, 231);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(589, 71);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Nome da Regra";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TelaRegras::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button2->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 26.25F, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button2->Location = System::Drawing::Point(111, 231);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 71);
			this->button2->TabIndex = 1;
			this->button2->Text = L"SOBRE";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button3->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 26.25F, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button3->Location = System::Drawing::Point(111, 346);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(167, 71);
			this->button3->TabIndex = 3;
			this->button3->Text = L"SOBRE";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button4->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 26.25F, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button4->Location = System::Drawing::Point(299, 346);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(589, 71);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Nome da Regra";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &TelaRegras::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button5->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 26.25F, System::Drawing::FontStyle::Bold));
			this->button5->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button5->Location = System::Drawing::Point(111, 453);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(167, 71);
			this->button5->TabIndex = 5;
			this->button5->Text = L"SOBRE";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button6->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 26.25F, System::Drawing::FontStyle::Bold));
			this->button6->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button6->Location = System::Drawing::Point(299, 453);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(589, 71);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Nome da Regra";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &TelaRegras::button6_Click);
			// 
			// TelaRegras
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(998, 601);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"TelaRegras";
			this->Text = L"Automaton Simulator";
			this->TransparencyKey = System::Drawing::Color::White;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaRegras::TelaRegras_FormClosed);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TelaRegras_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		Status = 0;
		this->Visible = false;
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Status = 1;
	this->Visible = false;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Status = 2;
	this->Visible = false;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	Status = 3;
	this->Visible = false;
}
};
}
