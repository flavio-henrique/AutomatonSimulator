#pragma once

namespace AS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuAS
	/// </summary>
	public ref class MenuAS : public System::Windows::Forms::Form
	{
	public:
		MenuAS(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Status = -1;
		}
		int getStatus();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MenuAS()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::ComponentModel::Container ^components;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;






			 int Status;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuAS::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(171, 16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(577, 366);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12.25F, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::Lime;
			this->button2->Location = System::Drawing::Point(330, 442);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(283, 52);
			this->button2->TabIndex = 7;
			this->button2->Text = L"SOBRE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MenuAS::button2_Click_1);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(330, 384);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(283, 52);
			this->button1->TabIndex = 6;
			this->button1->Text = L"ENTRAR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MenuAS::button1_Click_1);
			// 
			// MenuAS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(927, 570);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MenuAS";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MenuAS::MenuInicialClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 Status = 1;
				 this->Visible = false;
	}
	private: System::Void MenuInicialClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				 Status = 0;
				 this->Visible = false;
	}
	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Status = 2;
			 this->Visible = false;
}

};
}
