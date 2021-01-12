#pragma once
#using<system.drawing.dll>
namespace imagework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}













	private: System::Windows::Forms::OpenFileDialog^ ofd;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ rotate;
	private: System::Windows::Forms::Button^ PRE;
	private: System::Windows::Forms::Button^ NEXT;
	private: System::Windows::Forms::Button^ ZOOMIN;




	private: System::Windows::Forms::Button^ close;
	private: System::Windows::Forms::Button^ open;
	private: System::Windows::Forms::Button^ ZOOMOUT;

	private: System::Windows::Forms::Button^ reset;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ ZOOM;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog4;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog5;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog6;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog7;
	private: System::Windows::Forms::Label^ label1;












	protected:

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ZOOM = (gcnew System::Windows::Forms::Label());
			this->rotate = (gcnew System::Windows::Forms::Button());
			this->PRE = (gcnew System::Windows::Forms::Button());
			this->NEXT = (gcnew System::Windows::Forms::Button());
			this->ZOOMIN = (gcnew System::Windows::Forms::Button());
			this->close = (gcnew System::Windows::Forms::Button());
			this->open = (gcnew System::Windows::Forms::Button());
			this->ZOOMOUT = (gcnew System::Windows::Forms::Button());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog3 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog4 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog5 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog6 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog7 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ofd
			// 
			this->ofd->Filter = L"\"JPEG|*.jpg|All Files|*.*\"";
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::SystemColors::Desktop;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->ZOOM);
			this->panel2->Controls->Add(this->rotate);
			this->panel2->Controls->Add(this->PRE);
			this->panel2->Controls->Add(this->NEXT);
			this->panel2->Controls->Add(this->ZOOMIN);
			this->panel2->Controls->Add(this->close);
			this->panel2->Controls->Add(this->open);
			this->panel2->Controls->Add(this->ZOOMOUT);
			this->panel2->Controls->Add(this->reset);
			this->panel2->Location = System::Drawing::Point(0, 389);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(926, 54);
			this->panel2->TabIndex = 1;
			// 
			// ZOOM
			// 
			this->ZOOM->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ZOOM->AutoSize = true;
			this->ZOOM->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ZOOM->ForeColor = System::Drawing::Color::OldLace;
			this->ZOOM->Location = System::Drawing::Point(205, 17);
			this->ZOOM->Name = L"ZOOM";
			this->ZOOM->Size = System::Drawing::Size(60, 20);
			this->ZOOM->TabIndex = 9;
			this->ZOOM->Text = L"ZOOM";
			// 
			// rotate
			// 
			this->rotate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->rotate->BackColor = System::Drawing::Color::Snow;
			this->rotate->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rotate->Location = System::Drawing::Point(678, 6);
			this->rotate->Name = L"rotate";
			this->rotate->Size = System::Drawing::Size(75, 43);
			this->rotate->TabIndex = 8;
			this->rotate->Text = L"Rotate";
			this->rotate->UseVisualStyleBackColor = false;
			this->rotate->Click += gcnew System::EventHandler(this, &MyForm::rotate_Click);
			// 
			// PRE
			// 
			this->PRE->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->PRE->BackColor = System::Drawing::Color::Snow;
			this->PRE->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRE->Location = System::Drawing::Point(84, 6);
			this->PRE->Name = L"PRE";
			this->PRE->Size = System::Drawing::Size(50, 43);
			this->PRE->TabIndex = 6;
			this->PRE->Text = L"Prev";
			this->PRE->UseVisualStyleBackColor = false;
			this->PRE->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// NEXT
			// 
			this->NEXT->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->NEXT->BackColor = System::Drawing::Color::Snow;
			this->NEXT->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NEXT->Location = System::Drawing::Point(140, 6);
			this->NEXT->Name = L"NEXT";
			this->NEXT->Size = System::Drawing::Size(53, 43);
			this->NEXT->TabIndex = 5;
			this->NEXT->Text = L"Next";
			this->NEXT->UseVisualStyleBackColor = false;
			this->NEXT->Click += gcnew System::EventHandler(this, &MyForm::NEXT_Click);
			// 
			// ZOOMIN
			// 
			this->ZOOMIN->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ZOOMIN->BackColor = System::Drawing::Color::Snow;
			this->ZOOMIN->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ZOOMIN->Location = System::Drawing::Point(271, 6);
			this->ZOOMIN->Name = L"ZOOMIN";
			this->ZOOMIN->Size = System::Drawing::Size(47, 43);
			this->ZOOMIN->TabIndex = 4;
			this->ZOOMIN->Text = L"+";
			this->ZOOMIN->UseVisualStyleBackColor = false;
			this->ZOOMIN->Click += gcnew System::EventHandler(this, &MyForm::ZOOMIN_Click);
			// 
			// close
			// 
			this->close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->close->BackColor = System::Drawing::Color::Snow;
			this->close->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->close->Location = System::Drawing::Point(840, 6);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(75, 43);
			this->close->TabIndex = 3;
			this->close->Text = L"Close";
			this->close->UseVisualStyleBackColor = false;
			this->close->Click += gcnew System::EventHandler(this, &MyForm::close_Click);
			// 
			// open
			// 
			this->open->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->open->BackColor = System::Drawing::Color::Snow;
			this->open->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->open->Location = System::Drawing::Point(759, 6);
			this->open->Name = L"open";
			this->open->Size = System::Drawing::Size(75, 43);
			this->open->TabIndex = 2;
			this->open->Text = L"Open";
			this->open->UseVisualStyleBackColor = false;
			this->open->Click += gcnew System::EventHandler(this, &MyForm::open_Click);
			// 
			// ZOOMOUT
			// 
			this->ZOOMOUT->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ZOOMOUT->BackColor = System::Drawing::Color::Snow;
			this->ZOOMOUT->Font = (gcnew System::Drawing::Font(L"Algerian", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ZOOMOUT->Location = System::Drawing::Point(324, 6);
			this->ZOOMOUT->Name = L"ZOOMOUT";
			this->ZOOMOUT->Size = System::Drawing::Size(47, 43);
			this->ZOOMOUT->TabIndex = 1;
			this->ZOOMOUT->Text = L"-";
			this->ZOOMOUT->UseVisualStyleBackColor = false;
			this->ZOOMOUT->Click += gcnew System::EventHandler(this, &MyForm::ZOOMOUT_Click);
			// 
			// reset
			// 
			this->reset->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->reset->BackColor = System::Drawing::Color::Snow;
			this->reset->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset->Location = System::Drawing::Point(3, 6);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(75, 43);
			this->reset->TabIndex = 0;
			this->reset->Text = L"Reset All";
			this->reset->UseVisualStyleBackColor = false;
			this->reset->Click += gcnew System::EventHandler(this, &MyForm::reset_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(867, 327);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(32, 53);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(867, 330);
			this->panel1->TabIndex = 3;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// openFileDialog3
			// 
			this->openFileDialog3->FileName = L"openFileDialog3";
			// 
			// openFileDialog4
			// 
			this->openFileDialog4->FileName = L"openFileDialog4";
			// 
			// openFileDialog5
			// 
			this->openFileDialog5->FileName = L"openFileDialog5";
			// 
			// openFileDialog6
			// 
			this->openFileDialog6->FileName = L"openFileDialog6";
			// 
			// openFileDialog7
			// 
			this->openFileDialog7->FileName = L"openFileDialog7";
			this->openFileDialog7->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog7_FileOk);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::OldLace;
			this->label1->Location = System::Drawing::Point(-2, 3);
			this->label1->MinimumSize = System::Drawing::Size(124, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(391, 33);
			this->label1->TabIndex = 4;
			this->label1->Text = L"IMAGE EDITOR : By Isha N Porwal";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(926, 443);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->MinimumSize = System::Drawing::Size(726, 490);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array<String^>^ files;
		String^ path;
		int currentIndex;
		const int zoomlevel = 100;
		int zooms = 0;
		String^filepath;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void open_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		pictureBox1->ImageLocation = ofd->FileName;
	path = System::IO::Path::GetDirectoryName(ofd->FileName);
	files = System::IO::Directory::GetFiles(path);

	for (int i = 0; i < files->Length; i++)
	{
		if (files[i] == ofd->FileName)
		{	
			currentIndex = i;
			break;
		}
	}
}
private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
private: System::Void NEXT_Click(System::Object^ sender, System::EventArgs^ e) {
	if (currentIndex != files->Length - 1)
	{
		currentIndex++;
		pictureBox1->ImageLocation = files[currentIndex];
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (currentIndex != 0)
	{
		currentIndex--;
		pictureBox1->ImageLocation = files[currentIndex];
	}
}
private: System::Void ZOOMIN_Click(System::Object^ sender, System::EventArgs^ e) 
{

	
		pictureBox1->Left -= zoomlevel / 2;
		pictureBox1->Height += zoomlevel;
		pictureBox1->Top -= zoomlevel / 2;
		pictureBox1->Width += zoomlevel;
		zooms++;

}
private: System::Void ZOOMOUT_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Left += zoomlevel / 2;
	pictureBox1->Height -= zoomlevel;
	pictureBox1->Top += zoomlevel / 2;
	pictureBox1->Width -= zoomlevel;
	zooms++;

}
private: System::Void rotate_Click(System::Object^ sender, System::EventArgs^ e) {
	filepath = pictureBox1->ImageLocation;
			pictureBox1->Image = Image::FromFile("filepath");
			pictureBox1->Image->RotateFlip(RotateFlipType::Rotate90FlipNone);
			pictureBox1->Image->Save("filepath");
		
	

}
private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->ImageLocation = "";

}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void openFileDialog7_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}

private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
