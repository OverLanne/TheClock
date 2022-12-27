#pragma once

namespace TheClock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pbTheClock;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::PictureBox^ pbSecondHand;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::CheckBox^ cbDarkTheme;

	private: System::Windows::Forms::CheckBox^ cbLightTheme;

	private: System::Windows::Forms::PictureBox^ pbMinuteHand;
	private: System::Windows::Forms::PictureBox^ pbHourHand;

	private: System::Windows::Forms::Label^ lblHour;
	private: System::Windows::Forms::Label^ lblMinutes;
	private: System::Windows::Forms::Label^ lblSeconds;



	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pbTheClock = (gcnew System::Windows::Forms::PictureBox());
			this->pbMinuteHand = (gcnew System::Windows::Forms::PictureBox());
			this->pbHourHand = (gcnew System::Windows::Forms::PictureBox());
			this->pbSecondHand = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->cbDarkTheme = (gcnew System::Windows::Forms::CheckBox());
			this->cbLightTheme = (gcnew System::Windows::Forms::CheckBox());
			this->lblHour = (gcnew System::Windows::Forms::Label());
			this->lblMinutes = (gcnew System::Windows::Forms::Label());
			this->lblSeconds = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTheClock))->BeginInit();
			this->pbTheClock->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMinuteHand))->BeginInit();
			this->pbMinuteHand->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHourHand))->BeginInit();
			this->pbHourHand->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSecondHand))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::Color::Black;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Montserrat", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->ForeColor = System::Drawing::Color::White;
			this->numericUpDown1->Location = System::Drawing::Point(40, 44);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 23, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(114, 56);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->BackColor = System::Drawing::Color::Black;
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Montserrat", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown2->ForeColor = System::Drawing::Color::White;
			this->numericUpDown2->Location = System::Drawing::Point(192, 44);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(114, 56);
			this->numericUpDown2->TabIndex = 2;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(163, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 55);
			this->label2->TabIndex = 5;
			this->label2->Text = L":";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(488, 187);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(230, 50);
			this->button1->TabIndex = 6;
			this->button1->Tag = L"0";
			this->button1->Text = L"�����";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pbTheClock
			// 
			this->pbTheClock->BackColor = System::Drawing::Color::Transparent;
			this->pbTheClock->Controls->Add(this->pbMinuteHand);
			this->pbTheClock->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbTheClock.Image")));
			this->pbTheClock->Location = System::Drawing::Point(40, 40);
			this->pbTheClock->Name = L"pbTheClock";
			this->pbTheClock->Size = System::Drawing::Size(350, 350);
			this->pbTheClock->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbTheClock->TabIndex = 8;
			this->pbTheClock->TabStop = false;
			// 
			// pbMinuteHand
			// 
			this->pbMinuteHand->BackColor = System::Drawing::Color::Transparent;
			this->pbMinuteHand->Controls->Add(this->pbHourHand);
			this->pbMinuteHand->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbMinuteHand.Image")));
			this->pbMinuteHand->Location = System::Drawing::Point(62, 62);
			this->pbMinuteHand->Name = L"pbMinuteHand";
			this->pbMinuteHand->Size = System::Drawing::Size(226, 226);
			this->pbMinuteHand->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbMinuteHand->TabIndex = 20;
			this->pbMinuteHand->TabStop = false;
			// 
			// pbHourHand
			// 
			this->pbHourHand->Controls->Add(this->pbSecondHand);
			this->pbHourHand->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbHourHand.Image")));
			this->pbHourHand->Location = System::Drawing::Point(0, 0);
			this->pbHourHand->Name = L"pbHourHand";
			this->pbHourHand->Size = System::Drawing::Size(226, 226);
			this->pbHourHand->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbHourHand->TabIndex = 20;
			this->pbHourHand->TabStop = false;
			// 
			// pbSecondHand
			// 
			this->pbSecondHand->BackColor = System::Drawing::Color::Transparent;
			this->pbSecondHand->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSecondHand.Image")));
			this->pbSecondHand->Location = System::Drawing::Point(0, 0);
			this->pbSecondHand->Name = L"pbSecondHand";
			this->pbSecondHand->Size = System::Drawing::Size(226, 226);
			this->pbSecondHand->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbSecondHand->TabIndex = 14;
			this->pbSecondHand->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(430, 270);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(346, 120);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"��������� ����������";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(480, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(344, 55);
			this->label1->TabIndex = 13;
			this->label1->Text = L"������� �����";
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(880, 238);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 70);
			this->button2->TabIndex = 15;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(880, 47);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(249, 44);
			this->label4->TabIndex = 16;
			this->label4->Text = L"������� ����";
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(990, 238);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 70);
			this->button3->TabIndex = 17;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// cbDarkTheme
			// 
			this->cbDarkTheme->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->cbDarkTheme->AutoSize = true;
			this->cbDarkTheme->BackColor = System::Drawing::Color::Transparent;
			this->cbDarkTheme->Checked = true;
			this->cbDarkTheme->CheckState = System::Windows::Forms::CheckState::Checked;
			this->cbDarkTheme->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cbDarkTheme->ForeColor = System::Drawing::Color::White;
			this->cbDarkTheme->Location = System::Drawing::Point(828, 102);
			this->cbDarkTheme->Name = L"cbDarkTheme";
			this->cbDarkTheme->Size = System::Drawing::Size(171, 31);
			this->cbDarkTheme->TabIndex = 18;
			this->cbDarkTheme->Tag = L"0";
			this->cbDarkTheme->Text = L"������ ����";
			this->cbDarkTheme->UseVisualStyleBackColor = false;
			this->cbDarkTheme->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cbDarkTheme_CheckedChanged);
			// 
			// cbLightTheme
			// 
			this->cbLightTheme->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->cbLightTheme->AutoSize = true;
			this->cbLightTheme->BackColor = System::Drawing::Color::Transparent;
			this->cbLightTheme->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cbLightTheme->ForeColor = System::Drawing::Color::White;
			this->cbLightTheme->Location = System::Drawing::Point(830, 137);
			this->cbLightTheme->Name = L"cbLightTheme";
			this->cbLightTheme->Size = System::Drawing::Size(177, 31);
			this->cbLightTheme->TabIndex = 19;
			this->cbLightTheme->Tag = L"0";
			this->cbLightTheme->Text = L"������� ����";
			this->cbLightTheme->UseVisualStyleBackColor = false;
			this->cbLightTheme->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cbLightTheme_CheckedChanged);
			// 
			// lblHour
			// 
			this->lblHour->AutoSize = true;
			this->lblHour->BackColor = System::Drawing::Color::Transparent;
			this->lblHour->Font = (gcnew System::Drawing::Font(L"Montserrat", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblHour->ForeColor = System::Drawing::Color::Gray;
			this->lblHour->Location = System::Drawing::Point(470, 95);
			this->lblHour->Name = L"lblHour";
			this->lblHour->Size = System::Drawing::Size(172, 99);
			this->lblHour->TabIndex = 21;
			this->lblHour->Text = L"00 :";
			// 
			// lblMinutes
			// 
			this->lblMinutes->AutoSize = true;
			this->lblMinutes->BackColor = System::Drawing::Color::Transparent;
			this->lblMinutes->Font = (gcnew System::Drawing::Font(L"Montserrat", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblMinutes->ForeColor = System::Drawing::Color::Gray;
			this->lblMinutes->Location = System::Drawing::Point(557, 95);
			this->lblMinutes->Name = L"lblMinutes";
			this->lblMinutes->Size = System::Drawing::Size(172, 99);
			this->lblMinutes->TabIndex = 22;
			this->lblMinutes->Text = L"00 :";
			// 
			// lblSeconds
			// 
			this->lblSeconds->AutoSize = true;
			this->lblSeconds->BackColor = System::Drawing::Color::Transparent;
			this->lblSeconds->Font = (gcnew System::Drawing::Font(L"Montserrat", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSeconds->ForeColor = System::Drawing::Color::Gray;
			this->lblSeconds->Location = System::Drawing::Point(651, 95);
			this->lblSeconds->Name = L"lblSeconds";
			this->lblSeconds->Size = System::Drawing::Size(138, 99);
			this->lblSeconds->TabIndex = 23;
			this->lblSeconds->Text = L"00";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 27);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1084, 431);
			this->Controls->Add(this->lblSeconds);
			this->Controls->Add(this->lblMinutes);
			this->Controls->Add(this->lblHour);
			this->Controls->Add(this->cbLightTheme);
			this->Controls->Add(this->cbDarkTheme);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pbTheClock);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Montserrat", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1200, 670);
			this->MinimumSize = System::Drawing::Size(1100, 470);
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"The Clock";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTheClock))->EndInit();
			this->pbTheClock->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMinuteHand))->EndInit();
			this->pbMinuteHand->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHourHand))->EndInit();
			this->pbHourHand->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSecondHand))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: DateTime^ t1;	// ��������� (�������) �����
	private: DateTime^ t2;	// �������� ����� (����������)

	private: Image^ imageSecondHand = Image::FromFile(Application::StartupPath + "\\resources\\SecondHand20.png");	// �������� ������� ������
	private: Image^ imageMinuteHand = Image::FromFile(Application::StartupPath + "\\resources\\MinuteHand0.png");	// �������� ������� �����
	private: Image^ imageHourHand   = Image::FromFile(Application::StartupPath + "\\resources\\HourHand0.png");		// �������� ������� �����

	private: System::Media::SoundPlayer^ MediaPlayer = gcnew System::Media::SoundPlayer();	// ����������� ������������� ��� ������� ����������

	private: float xSecond, ySecond,	// ������� ���������� �������
				   xMinute, yMinute,
				   xHour,   yHour;

	// ��� �������� �����
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// ��������� �������� �������
		t1 = gcnew DateTime(DateTime::Now.Year,
							DateTime::Now.Month,
							DateTime::Now.Day,
							DateTime::Now.Hour,
							DateTime::Now.Minute,
							DateTime::Now.Second);
		
		// ��������� ���� ������� ��� ������������
		MediaPlayer->SoundLocation = Application::StartupPath + "\\resources\\Sound.wav";

		// ��������� ������� ������� �������
		xSecond = (float)(pbSecondHand->Image->Width / 2);
		ySecond = (float)(pbSecondHand->Image->Height / 2);
		xMinute = (float)(pbMinuteHand->Image->Width / 2);
		yMinute = (float)(pbMinuteHand->Image->Height / 2);
		xHour	= (float)(pbHourHand->Image->Width / 2);
		yHour   = (float)(pbHourHand->Image->Height / 2);

		// ��������� ������� �� ������ ����
		// ��������� �������
		auto graphics = Graphics::FromImage(pbSecondHand->Image);	// �������� ����� �������� �� ��������� ���
		graphics->TranslateTransform(xSecond, ySecond);				// ������� ������ ��� ���������
		graphics->RotateTransform((float)(t1->Second * 6));			// ��������� ���� �������� � ��������
		graphics->Clear(pbSecondHand->BackColor);					// ������� ������� ����
		graphics->DrawImage(imageSecondHand, -xSecond, -ySecond);	// imageSecondHand - �������� ����������� (����� �� ������ ��������)
		pbSecondHand->Refresh();									// ���������� �������� ������ pictureBox

		// �������� �������
		graphics = Graphics::FromImage(pbMinuteHand->Image);
		graphics->TranslateTransform(xMinute, yMinute);
		graphics->RotateTransform((float)(t1->Minute * 6));
		graphics->Clear(pbMinuteHand->BackColor);
		graphics->DrawImage(imageMinuteHand, -xMinute, -yMinute);
		pbMinuteHand->Refresh();

		// ������� �������
		graphics = Graphics::FromImage(pbHourHand->Image);
		graphics->TranslateTransform(xHour, yHour);
		graphics->RotateTransform((float)(t1->Hour * 30 + (int)t1->Minute / 12 * 6));
		graphics->Clear(pbHourHand->BackColor);
		graphics->DrawImage(imageHourHand, -xHour, -yHour);
		delete graphics;
		pbHourHand->Refresh();

		// ��������� ���������� �������� ��������� �������
		// ����
		if (t1->Hour < 10) { lblHour->Text = "0" + t1->Hour.ToString() + " :"; }
		else { lblHour->Text = t1->Hour.ToString() + " :"; } // label3
		// ������
		if (t1->Minute < 10) { lblMinutes->Text = "0" + t1->Minute.ToString() + " :"; }
		else { lblMinutes->Text = t1->Minute.ToString() + " :"; }
		// �������
		if (t1->Second < 10) { lblSeconds->Text = "0" + t1->Second.ToString(); }
		else { lblSeconds->Text = t1->Second.ToString(); }

		// ���� ������� � �������� ���������� (1000 �. = 1 ���.)
		timer2->Interval = 1000;
		timer2->Enabled = true;
	}

	// ��� ������� �� ������ (�����/����)
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// ������ ����� / ����
		if (button1->Tag == "0") {
			// ���� ������ �� �������� -> ��� ���� ��������
			// ��������� �������������� ������� ��� ����� ������
			t2 = t1->AddHours((double)numericUpDown1->Value - (double)t1->Hour);
			t2 = t2->AddMinutes((double)numericUpDown2->Value - (double)t1->Minute);
			t2 = t2->AddSeconds(-(double)t1->Second);

			// ������������� �������������� ������� (���� ��������������� ��������� ����)
			if (t1->TimeOfDay > t2->TimeOfDay) {
				t2 = t2->AddDays(1);
			}

			// ���������� ���������
			button1->Tag = "1";			// ������� ���� ������ (�� ����� �� ����)
			button1->Text = "����";
			groupBox1->Visible = false;	// ������ ��������� �������, ����� �� "�����" �������� �����
		}
		else if (button1->Tag == "1") {
			// ���� ������ �������� -> ��� ���� �������������
			// ���������� ���������
			button1->Tag = "0";			// ������� ���� ������ (�� ���� �� �����)
			button1->Text = "�����";
			groupBox1->Visible = true;	// ��������� ��������� �������

			// ���������������� �������� ����� (�� ������ ���), ����� ��������� �� ��������
			t2 = gcnew DateTime();
		}
	}

	private: int OldMinute = 0; // ���������� ����������� �������� �����
	// ������ �������� �������
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		//t1 = t1->AddSeconds(1);
		// ������ ��� ������� ����� �������� ���. �������
		t1 = gcnew DateTime(DateTime::Now.Year,
							DateTime::Now.Month,
							DateTime::Now.Day,
							DateTime::Now.Hour,
							DateTime::Now.Minute,
							DateTime::Now.Second);

		// �������� �������� ����� (������ � ����)
		/*if (t1->Hour < 10) { label3->Text = "0" + t1->Hour.ToString() + ":"; }
		else { label3->Text = t1->Hour.ToString() + ":"; }
		if (t1->Minute < 10) { label3->Text += "0" + t1->Minute.ToString() + ":"; }
		else { label3->Text += t1->Minute.ToString() + ":"; }
		if (t1->Second < 10) { label3->Text += "0" + t1->Second.ToString(); }
		else { label3->Text += t1->Second.ToString(); }*/

		// �������� �������� ����� (�������)
		if (t1->Second < 10) { lblSeconds->Text = "0" + t1->Second.ToString(); }
		else { lblSeconds->Text = t1->Second.ToString(); }

		// �������� ������� ������
		auto graphics = Graphics::FromImage(pbSecondHand->Image);
		graphics->TranslateTransform(xSecond, ySecond);
		graphics->RotateTransform((float)(t1->Second * 6));
		graphics->Clear(pbSecondHand->BackColor);
		graphics->DrawImage(imageSecondHand, -xSecond, -ySecond);
		pbSecondHand->Refresh();

		// ���� �������� ����� ���. � ����������� - �� ����� (�.�. ������ ����������)
		if (t1->Minute != OldMinute) {
			// ������������ ������
			OldMinute = t1->Minute;

			// �������� �������� ����� (������)
			if (t1->Minute < 10) { lblMinutes->Text = "0" + t1->Minute.ToString() + " :"; }
			else { lblMinutes->Text = t1->Minute.ToString() + " :"; }

			// �������� ������� �����
			graphics = Graphics::FromImage(pbMinuteHand->Image);
			graphics->TranslateTransform(xMinute, yMinute);
			graphics->RotateTransform((float)(t1->Minute * 6));
			graphics->Clear(pbMinuteHand->BackColor);
			graphics->DrawImage(imageMinuteHand, -xMinute, -yMinute);
			pbMinuteHand->Refresh();

			// ������ 12 ������ ���� ���������� ������� �������
			if (t1->Minute % 12 == 11) {

				// �������� �������� ����� (����)
				if (t1->Hour < 10) { lblHour->Text = "0" + t1->Hour.ToString() + " :"; }
				else { lblHour->Text = t1->Hour.ToString() + " :"; }

				// ����������� ������� �������, ����� ������� ������ ���������
				graphics = Graphics::FromImage(pbHourHand->Image);
				graphics->TranslateTransform(xHour, yHour);
				graphics->RotateTransform((float)(t1->Hour * 30 + (int)t1->Minute / 12 * 6));
				graphics->Clear(pbHourHand->BackColor);
				graphics->DrawImage(imageHourHand, -xHour, -yHour);
				pbHourHand->Refresh();
			}
		}
		delete graphics;

		// ���� ����� ������� � ���������� ����������
		if (Equals(t1, t2)) {
			this->Activate();			// ����� �������� ����������
			MediaPlayer->PlayLooping();	// ������� ����������� �������

			// ������ �����������
			MessageBox::Show(this, "����� �����",
							"���������",
							MessageBoxButtons::OK,
							MessageBoxIcon::Information);

			MediaPlayer->Stop();		// ������������ �������

			button1->Tag = "0";			// ������� ���� ������ (�� ���� �� �����)
			button1->Text = "�����";
			groupBox1->Visible = true;	// ��������� ��������� �������
			numericUpDown1->Value = 0;	// ������� ������ �������� �������� ����������
			numericUpDown2->Value = 0;
		}
	}

	private: bool noVerify1 = false, // ���������� ��� ����������� ��������� ������ 1 �������
				  noVerify2 = false;
	// ������� ������ ����
	private: System::Void cbDarkTheme_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		// ������ ��������� ������ 1 ������� (��� ������ ��� ������� ����)
		if (!noVerify1 && cbLightTheme->Checked) {
			noVerify2 = true;
			cbLightTheme->Checked = !cbLightTheme->Checked;
		}
		noVerify1 = false;

		// ������ ����
		this->BackColor					= System::Drawing::Color::Black;
		this->label1->ForeColor			= System::Drawing::Color::White;
		this->label2->ForeColor			= System::Drawing::Color::White;
		this->label4->ForeColor			= System::Drawing::Color::White;
		this->cbDarkTheme->ForeColor	= System::Drawing::Color::White;
		this->cbLightTheme->ForeColor	= System::Drawing::Color::White;
		this->groupBox1->ForeColor		= System::Drawing::Color::White;
		this->button1->BackColor		= System::Drawing::Color::Black;
		this->button1->ForeColor		= System::Drawing::Color::White;
		this->numericUpDown1->BackColor = System::Drawing::Color::Black;
		this->numericUpDown1->ForeColor = System::Drawing::Color::White;
		this->numericUpDown2->BackColor = System::Drawing::Color::Black;
		this->numericUpDown2->ForeColor = System::Drawing::Color::White;
	}

	// ������� ������� ����
	private: System::Void cbLightTheme_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		// ������ ��������� ������ 1 ������� (��� ������ ��� ������� ����)
		if (!noVerify2 && cbDarkTheme->Checked) {
			noVerify1 = true;
			cbDarkTheme->Checked = !cbDarkTheme->Checked;
		}
		noVerify2 = false;

		// ������ ����
		this->BackColor					= System::Drawing::Color::White;
		this->label1->ForeColor			= System::Drawing::Color::Black;
		this->label2->ForeColor			= System::Drawing::Color::Black;
		this->label4->ForeColor			= System::Drawing::Color::Black;
		this->cbDarkTheme->ForeColor	= System::Drawing::Color::Black;
		this->cbLightTheme->ForeColor	= System::Drawing::Color::Black;
		this->groupBox1->ForeColor		= System::Drawing::Color::Black;
		this->button1->BackColor		= System::Drawing::Color::White;
		this->button1->ForeColor		= System::Drawing::Color::Black;
		this->numericUpDown1->BackColor = System::Drawing::Color::White;
		this->numericUpDown1->ForeColor = System::Drawing::Color::Black;
		this->numericUpDown2->BackColor = System::Drawing::Color::White;
		this->numericUpDown2->ForeColor = System::Drawing::Color::Black;
	}

	private: Image^ newImgClockDark  = Image::FromFile(Application::StartupPath + "\\resources\\TheClosk.png");		// �������� ������ �����
	private: Image^ newImgClockLight = Image::FromFile(Application::StartupPath + "\\resources\\TheClosk2.png");	// �������� ������� �����
	// ������ ����� �� ������ ���������
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		// �������� ������ ���������� �����
		float xTheClock = (float)(pbTheClock->Image->Width / 2),
			  yTheClock = (float)(pbTheClock->Image->Height / 2);
		auto graphics = Graphics::FromImage(pbTheClock->Image);
		graphics->TranslateTransform(xTheClock, yTheClock);
		graphics->Clear(pbTheClock->BackColor);
		graphics->DrawImage(newImgClockDark, -xTheClock, -yTheClock);
		delete graphics;
		pbTheClock->Refresh();
	}

	// ������ ����� �� ������� ���������
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		// �������� ������ ���������� �����
		float xTheClock = (float)(pbTheClock->Image->Width / 2),
			  yTheClock = (float)(pbTheClock->Image->Height / 2);
		auto graphics = Graphics::FromImage(pbTheClock->Image);
		graphics->TranslateTransform(xTheClock, yTheClock);
		graphics->Clear(pbTheClock->BackColor);
		graphics->DrawImage(newImgClockLight, -xTheClock, -yTheClock);
		delete graphics;
		pbTheClock->Refresh();
	}
};
}

//private: void rotateSelectedArrow(TheClock::MyForm^ arrow, Image^ imgArrow, float xArrow, float yArrow) {
//
//	auto graphics = Graphics::FromImage(arrow->Image);
//	graphics->TranslateTransform(xArrow, yArrow);
//	graphics->Clear(arrow->BackColor);
//	graphics->DrawImage(imgArrow, -yArrow, -yArrow);
//	delete graphics;
//	arrow->Refresh();
//}
//private: System::Void numericUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
//	if ((numericUpDown1->Value == 0) &&
//		(numericUpDown2->Value == 0)) {
//		button1->Enabled = false;
//	}
//	else {
//		button1->Enabled = true;
//	}
////}
//private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
//	t2 = t2->AddSeconds(-1);
//	if (t2->Hour < 10)
//		label3->Text = "0" + t2->Hour.ToString() + ":";
//	else
//		label3->Text = t2->Hour.ToString() + ":";
//	if (t2->Minute < 10)
//		label3->Text += "0" + t2->Minute.ToString() + ":";
//	else
//		label3->Text += t2->Minute.ToString() + ":";
//	if (t2->Second < 10)
//		label3->Text += "0" + t2->Second.ToString();
//	else
//		label3->Text += t2->Second.ToString();

//	if (Equals(t1, t2))
//	{
//		timer1->Enabled = false;
//		this->Activate();
//		MessageBox::Show(this, "����� �����",
//						 "���������",
//						 MessageBoxButtons::OK,
//						 MessageBoxIcon::Information);
//		button1->Text = "�����";
//		//groupBox1->Enabled = true;
//		groupBox1->Visible = false;
//		numericUpDown1->Value = 0;
//		numericUpDown2->Value = 0;
//	}
//}


		//if (!timer1->Enabled)
		//{
		//	// ���� ������� 
		//	// t1 - ������� ����� 
		//	// t2 = t1 + �������� 
		//	//t1 = gcnew DateTime(DateTime::Now.Year,
		//	//					DateTime::Now.Month,
		//	//					DateTime::Now.Day,
		//	//					DateTime::Now.Hour,
		//	//					DateTime::Now.Minute,
		//	//					DateTime::Now.Second);

		//	t2 = t1->AddHours((double)numericUpDown1->Value - (double)t1->Hour);
		//	t2 = t2->AddMinutes((double)numericUpDown2->Value - (double)t1->Minute);
		//	t2 = t2->AddSeconds(-(double)t1->Second);

		//	if (t1->TimeOfDay > t2->TimeOfDay) {
		//		t2 = t2->AddDays(1);
		//	}

		//	//groupBox1->Enabled = false;
		//	groupBox1->Visible = false;
		//	//label3->Visible = true;
		//	button1->Text = "����";
		//	if (t1->Hour < 10)
		//		label3->Text = "0" + t1->Hour.ToString() + ":";
		//	else
		//		label3->Text = t1->Hour.ToString() + ":";
		//	if (t1->Minute < 10)
		//		label3->Text += "0" + t1->Minute.ToString() + ":";
		//	else
		//		label3->Text += t1->Minute.ToString() + ":";
		//	if (t1->Second < 10)
		//		label3->Text += "0" + t1->Second.ToString();
		//	else
		//		label3->Text += t1->Second.ToString();
		//	//if (t2->Second < 10)
		//	//	label1->Text += "0" + t2->Second.ToString();
		//	//else
		//	//	label1->Text += t2->Second.ToString();
		//	// ������ ������������� ������� Tick - 1 ������� 
		//	//timer1->Interval = 1000;
		//	// ���� ������� 
		//	//timer1->Enabled = true;
		//	//groupBox1->Enabled = false;
		//	//groupBox1->Visible = true;
		//}
		//else {
		//	// ������ ��������, ������������� 
		//	//timer1->Enabled = false;
		//	button1->Text = "�����";
		//	//groupBox1->Enabled = true;
		//	groupBox1->Visible = true;
		//	//label3->Visible = false;
		//	//numericUpDown1->Value = t2->Hour;
		//	//numericUpDown2->Value = t2->Minute;
		//}