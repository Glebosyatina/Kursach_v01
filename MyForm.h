#pragma once

#include <iostream>

struct MyPoint {
	int x;
	int y;
};


namespace Kursach {

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


			//���� �����
			array <String^>^ colors = gcnew array <String^>(9);	//������ � ���������� ������
			colors[0] = "������";
			colors[1] = "�������";
			colors[2] = "���������";
			colors[3] = "������";
			colors[4] = "�������";
			colors[5] = "�������";
			colors[6] = "�����";
			colors[7] = "����������";
			colors[8] = "�����";


			//���������� ����� combobox1 ������
			this->comboBox1->Items->Add(colors[0]);
			this->comboBox1->Items->Add(colors[1]);
			this->comboBox1->Items->Add(colors[2]);
			this->comboBox1->Items->Add(colors[3]);
			this->comboBox1->Items->Add(colors[4]);
			this->comboBox1->Items->Add(colors[5]);
			this->comboBox1->Items->Add(colors[6]);
			this->comboBox1->Items->Add(colors[7]);
			this->comboBox1->Items->Add(colors[8]);


			//���������� ����� combobox2 ������
			this->comboBox2->Items->Add(colors[0]);
			this->comboBox2->Items->Add(colors[1]);
			this->comboBox2->Items->Add(colors[2]);
			this->comboBox2->Items->Add(colors[3]);
			this->comboBox2->Items->Add(colors[4]);
			this->comboBox2->Items->Add(colors[5]);
			this->comboBox2->Items->Add(colors[6]);
			this->comboBox2->Items->Add(colors[7]);
			this->comboBox2->Items->Add(colors[8]);


			//���������� ����� combobox3 ��������
			this->comboBox3->Items->Add("������");
			this->comboBox3->Items->Add("�������");
			this->comboBox3->Items->Add("�������");

			//���������� ����� combobox4 ������ picturebox
			this->comboBox4->Items->Add("121:96");
			this->comboBox4->Items->Add("363:269");
			this->comboBox4->Items->Add("510:392");
		
		}

	private:
		int colorBrush;	//��� ��������� ����� �����
		int qualityImage = 3000;//���-�� �������� ��������� �����(������ ��������-���� �������� �����������)



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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Button^ saveButton;



	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(293, 495);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"��������� ����������� �����������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(91, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(510, 392);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;




			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(91, 478);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(125, 455);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"���� ����";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(112, 525);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 4;
			this->label2->Text = L"���� ��������";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(91, 551);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 5;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(476, 455);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"�������� �����������";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(480, 478);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 7;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(293, 419);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(121, 17);
			this->progressBar1->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(484, 525);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"������ �����������";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(479, 551);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 10;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox4_SelectedIndexChanged);
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(10, 22);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(75, 23);
			this->saveButton->TabIndex = 11;
			this->saveButton->Text = L"���������";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &MyForm::saveButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(701, 597);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"����������� �����������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		pictureBox1->Image = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);//����� ��� ����������


		Graphics^ gr = Graphics::FromImage(pictureBox1->Image); //�������� �������

		Brush^ brush = gcnew SolidBrush(Color::Black);	//���� ����� �� ���������

		//��� ���������� ���� ��� ���������� ����������� � ����
		Brush^ brback = gcnew SolidBrush(pictureBox1->BackColor);	
		gr->FillRectangle(brback,0,0,pictureBox1->Width, pictureBox1->Height);


		this->progressBar1->Value = 0;	//��������� ����� ���������
		this->progressBar1->Minimum = 0;	 //��������� ������� ��������
		this->progressBar1->Maximum = qualityImage;	//��������� ��������� ��������


		//��������� ����� ��������
		switch (colorBrush) {
		case 0:brush = gcnew SolidBrush(Color::Black); break;
		case 1:brush = gcnew SolidBrush(Color::Red); break;
		case 2:brush = gcnew SolidBrush(Color::Orange); break;
		case 3:brush = gcnew SolidBrush(Color::Yellow); break;
		case 4:brush = gcnew SolidBrush(Color::Green); break;
		case 5:brush = gcnew SolidBrush(Color::LightBlue); break;
		case 6:brush = gcnew SolidBrush(Color::Blue); break;
		case 7:brush = gcnew SolidBrush(Color::Purple); break;
		case 8:brush = gcnew SolidBrush(Color::White); break;
		}

		int h = this->pictureBox1->Height;
		int w = this->pictureBox1->Width;

		srand(time(0));

		//triangle of Serpinsky

		MyPoint p1, p2, p3;
		p1 = { w / 2, 0 };
		p2 = { w, h };
		p3 = { 0, h };

		gr->FillEllipse(brush, p1.x, p1.y, 1, 1);
		gr->FillEllipse(brush, p2.x, p2.y, 1, 1);
		gr->FillEllipse(brush, p3.x, p3.y, 1, 1);

		MyPoint movepoint = { w / 2, 0 };
		gr->FillEllipse(brush, movepoint.x, movepoint.y, 2, 2);

		

		for (double i = 0; i < qualityImage; i++) {
			this->progressBar1->Value += 1;
			int k = rand() % 3;
			if (k == 0) {
				movepoint.x = (movepoint.x + p1.x) / 2;
				movepoint.y = (movepoint.y + p1.y) / 2;
				gr->FillEllipse(brush, movepoint.x, movepoint.y, 3, 3);
			}
			else if (k == 1) {
				movepoint.x = (movepoint.x + p2.x) / 2;
				movepoint.y = (movepoint.y + p2.y) / 2;
				gr->FillEllipse(brush, movepoint.x, movepoint.y, 3, 3);
			}
			else if (k == 2) {
				movepoint.x = (movepoint.x + p3.x) / 2;
				movepoint.y = (movepoint.y + p3.y) / 2;
				gr->FillEllipse(brush, movepoint.x, movepoint.y, 3, 3);
			}
		}


	}

		   //��������� ����� ����
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ CurrentPictureBoxColor = this->comboBox1->SelectedItem->ToString();

		if (CurrentPictureBoxColor == "������") {
			this->pictureBox1->BackColor = Color::Black;
		}
		if (CurrentPictureBoxColor == "�������") {
			this->pictureBox1->BackColor = Color::Red;
		}
		if (CurrentPictureBoxColor == "���������") {
			this->pictureBox1->BackColor = Color::Orange;
		}
		if (CurrentPictureBoxColor == "������") {
			this->pictureBox1->BackColor = Color::Yellow;
		}
		if (CurrentPictureBoxColor == "�������") {
			this->pictureBox1->BackColor = Color::Green;
		}
		if (CurrentPictureBoxColor == "�������") {
			this->pictureBox1->BackColor = Color::LightBlue;
		}
		if (CurrentPictureBoxColor == "�����") {
			this->pictureBox1->BackColor = Color::Blue;
		}
		if (CurrentPictureBoxColor == "����������") {
			this->pictureBox1->BackColor = Color::Purple;
		}
		if (CurrentPictureBoxColor == "�����") {
			this->pictureBox1->BackColor = Color::White;
		}

	}


		   //��������� ����� �����
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		String^ CurrentBrushColor = this->comboBox2->SelectedItem->ToString();//��������� ���� �����

		if (CurrentBrushColor == "������") {
			colorBrush = 0;
		}
		if (CurrentBrushColor == "�������") {
			colorBrush = 1;
		}
		if (CurrentBrushColor == "���������") {
			colorBrush = 2;
		}
		if (CurrentBrushColor == "������") {
			colorBrush = 3;
		}
		if (CurrentBrushColor == "�������") {
			colorBrush = 4;
		}
		if (CurrentBrushColor == "�������") {
			colorBrush = 5;
		}
		if (CurrentBrushColor == "�����") {
			colorBrush = 6;
		}
		if (CurrentBrushColor == "����������") {
			colorBrush = 7;
		}
		if (CurrentBrushColor == "�����") {
			colorBrush = 8;
		}

	}
		   //��������� �������� ��������
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		String^ CurrentQualityImage = this->comboBox3->SelectedItem->ToString();//��������� ��������
		
		if (CurrentQualityImage == "������") {
			qualityImage = 10000;
		}
		if (CurrentQualityImage == "�������") {
			qualityImage = 30000;
		}
		if (CurrentQualityImage == "�������") {
			qualityImage = 100000;
		}

	}
		   //��������� ������� �����������
	private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
		String^ CurrentSelectSize = this->comboBox4->SelectedItem->ToString();

		if (CurrentSelectSize == "121:96") {
			this->pictureBox1->Width = 121;
			this->pictureBox1->Height = 96;
			this->pictureBox1->Location = Point(293, 187);
		}
		if (CurrentSelectSize == "363:269") {
			this->pictureBox1->Width = 363;
			this->pictureBox1->Height = 269;
			this->pictureBox1->Location = Point(175, 76);
		}
		if (CurrentSelectSize == "510:392") {
			this->pictureBox1->Width = 510;
			this->pictureBox1->Height = 392;
			this->pictureBox1->Location = Point(91,12);
		}

	}
	
		   //���������� �����������
	private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//pictureBox1->Image->Save("image.png", System::Drawing::Imaging::ImageFormat::Png);
		if (pictureBox1->Image != nullptr) //���� � pictureBox ���� �����������
		{
			//�������� ����������� ���� "��������� ���..", ��� ���������� �����������
			SaveFileDialog^ savedialog = gcnew SaveFileDialog();
			savedialog->Title = "��������� �������� ���...";
			//���������� �� ��������������, ���� ������������ ��������� ��� ��� ������������� �����
			savedialog->OverwritePrompt = true;
			//���������� �� ��������������, ���� ������������ ��������� �������������� ����
			savedialog->CheckPathExists = true;
			//������ �������� �����, ������������ � ���� "��� �����"
			savedialog->Filter = "Image Files(*.BMP)|*.BMP|Image Files(*.JPG)|*.JPG|Image Files(*.GIF)|*.GIF|Image Files(*.PNG)|*.PNG|All files (*.*)|*.*";
			//������������ �� ������ "�������" � ���������� ����
			savedialog->ShowHelp = true;

			if (savedialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) //���� � ���������� ���� ������ ������ "��"
			{
				try
				{
					pictureBox1->Image->Save(savedialog->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);
				}
				catch(...)
				{
					MessageBox::Show("���������� ��������� �����������", "������",
						MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
	}
};
}