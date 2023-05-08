#pragma once
#include <iostream>
#include "Core/monomial/monomial.h"

namespace WinFormApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� AppForm1
	/// </summary>
	public ref class AppForm1 : public System::Windows::Forms::Form
	{
		float targetWidth;
		float currentWidth;
	private: System::Windows::Forms::Timer^ collapseTimer;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ������;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ����������;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;









		   float animationStep;
	public:
		AppForm1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			
			// ������������� ���������� ��� ��������
			targetWidth = this->panel1->Width * 2;
			currentWidth = this->panel1->Width;
			animationStep = 3;
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~AppForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Timer^ expandTimer;


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
		///

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->expandTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->collapseTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->������ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->���������� = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(69, 63);
			this->button1->TabIndex = 2;
			this->button1->Text = L"�������� ������� �� �������";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->MouseEnter += gcnew System::EventHandler(this, &AppForm1::button_MouseEnter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &AppForm1::button_MouseLeave);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(931, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(69, 364);
			this->panel1->TabIndex = 3;
			this->panel1->MouseEnter += gcnew System::EventHandler(this, &AppForm1::panel1_MouseEnter);
			this->panel1->MouseLeave += gcnew System::EventHandler(this, &AppForm1::panel1_MouseLeave);
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button6->Location = System::Drawing::Point(0, 300);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(69, 63);
			this->button6->TabIndex = 7;
			this->button6->Text = L"���-������� �� �������� (����� �������)";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->MouseEnter += gcnew System::EventHandler(this, &AppForm1::button_MouseEnter);
			this->button6->MouseLeave += gcnew System::EventHandler(this, &AppForm1::button_MouseLeave);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button5->Location = System::Drawing::Point(0, 240);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(69, 63);
			this->button5->TabIndex = 6;
			this->button5->Text = L"������������� ������� �� �������";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->MouseEnter += gcnew System::EventHandler(this, &AppForm1::button_MouseEnter);
			this->button5->MouseLeave += gcnew System::EventHandler(this, &AppForm1::button_MouseLeave);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button4->Location = System::Drawing::Point(0, 180);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(69, 63);
			this->button4->TabIndex = 5;
			this->button4->Text = L"���-������� � �������� ��������������";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->MouseEnter += gcnew System::EventHandler(this, &AppForm1::button_MouseEnter);
			this->button4->MouseLeave += gcnew System::EventHandler(this, &AppForm1::button_MouseLeave);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Location = System::Drawing::Point(0, 120);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(69, 63);
			this->button3->TabIndex = 4;
			this->button3->Text = L"�������� ������� �� ������";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->MouseEnter += gcnew System::EventHandler(this, &AppForm1::button_MouseEnter);
			this->button3->MouseLeave += gcnew System::EventHandler(this, &AppForm1::button_MouseLeave);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Location = System::Drawing::Point(0, 60);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(69, 63);
			this->button2->TabIndex = 3;
			this->button2->Text = L"������� �� ��������� ������ (���)";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->MouseEnter += gcnew System::EventHandler(this, &AppForm1::button_MouseEnter);
			this->button2->MouseLeave += gcnew System::EventHandler(this, &AppForm1::button_MouseLeave);
			// 
			// expandTimer
			// 
			this->expandTimer->Interval = 1;
			this->expandTimer->Tick += gcnew System::EventHandler(this, &AppForm1::expandTimer_Tick);
			// 
			// collapseTimer
			// 
			this->collapseTimer->Interval = 1;
			this->collapseTimer->Tick += gcnew System::EventHandler(this, &AppForm1::collapseTimer_Tick);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->������,
					this->����������
			});
			this->dataGridView1->Location = System::Drawing::Point(282, 24);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(550, 363);
			this->dataGridView1->TabIndex = 4;
			// 
			// ������
			// 
			this->������->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->������->HeaderText = L"������";
			this->������->Name = L"������";
			// 
			// ����������
			// 
			this->����������->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->����������->HeaderText = L"����������";
			this->����������->Name = L"����������";
			this->����������->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->���������ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1000, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->���������ToolStripMenuItem,
					this->���������ToolStripMenuItem1
			});
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->���������ToolStripMenuItem->Text = L"����";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			// 
			// ���������ToolStripMenuItem1
			// 
			this->���������ToolStripMenuItem1->Name = L"���������ToolStripMenuItem1";
			this->���������ToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->���������ToolStripMenuItem1->Text = L"���������";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 27);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(242, 340);
			this->tableLayoutPanel1->TabIndex = 6;
			// 
			// AppForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 388);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"AppForm1";
			this->Text = L"������� ���������";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "")
		{
			textBox1->Text = "������� �����...";
			textBox1->ForeColor = SystemColors::GrayText;
		}
	}
	private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "������� �����...")
		{
			textBox1->Text = "";
			textBox1->ForeColor = SystemColors::WindowText;
		}
	}

	private: System::Void panel1_MouseEnter(System::Object^ sender, EventArgs^ e)
	{
		collapseTimer->Stop(); // ��������� ������� ���������, ���� �� �������
		expandTimer->Start(); // ������ ������� ����������
		std::cout << "PMouseEnter" << std::endl;
	}
	private: System::Void panel1_MouseLeave(System::Object^ sender, EventArgs^ e)
	{
		expandTimer->Stop(); // ��������� ������� ����������, ���� �� �������
		collapseTimer->Start(); // ������ ������� ���������
		std::cout << "PMouseLeave" << std::endl;
	}
	private: System::Void button_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = dynamic_cast<Button^>(sender);
		collapseTimer->Stop(); // ��������� ������� ���������, ���� �� �������
		expandTimer->Start(); // ������ ������� ����������
		button->Height += 10;
		button->BringToFront();
		std::cout << "MouseEnter   " << panel1->Width << " - " << button->Width << std::endl;
	}
	private: System::Void button_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = dynamic_cast<Button^>(sender);
		expandTimer->Stop(); // ��������� ������� ����������, ���� �� �������
		collapseTimer->Start(); // ������ ������� ���������
		button->Height -= 10;
		std::cout << "MouseLeave" << std::endl;
	}
	private: System::Void expandTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->panel1->Width < targetWidth) // ��������, �� �������� �� ������ ������� ������
		{
			currentWidth += animationStep; // ���������� ������ ������

			if (currentWidth > targetWidth) // ��������, �������� �� ������ ������� ������
			{
				currentWidth = targetWidth; // ��������� ������ ������� ������ ������
				expandTimer->Stop(); // ��������� ������� ����������
			}
			this->panel1->Width = currentWidth; // ���������� ��������� ������ ������
		}
		else
		{
			this->expandTimer->Stop(); // ��������� ������� ����������, ���� ������ ��� ��������� ���������
		}
	}
	private: System::Void collapseTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (panel1->Width > targetWidth / 2) // ��������, �� �������� �� ������ ������� ������
		{
			currentWidth -= animationStep; // ���������� ������ ������

			if (currentWidth < targetWidth / 2) // ��������, �������� �� ������ ������� ������
			{
				currentWidth = targetWidth / 2; // ��������� ������ ������� ������ ������
				collapseTimer->Stop(); // ��������� ������� ���������
			}
			panel1->Width = currentWidth; // ���������� ��������� ������ ������
		}
		else
		{
			collapseTimer->Stop(); // ��������� ������� ���������, ���� ������ ��� ��������� �������
		}
	}
};
}
