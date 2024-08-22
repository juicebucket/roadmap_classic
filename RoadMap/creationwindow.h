#include "mapwindow.h"
#pragma once

namespace RoadMap {

	using namespace System;
	using namespace System::Xml;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class creationwindow : public System::Windows::Forms::Form
	{

		List<TextBox^>^ textBoxes = gcnew List<TextBox^>();

	public:


		creationwindow(void)
		{
			InitializeComponent();
			SetDragHandlers(panel1);
			SetDragHandlers(panel2);
		}

	protected:
		~creationwindow()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		int TopicCount = 0;
		System::Windows::Forms::Label^ main_title;
	private: System::Windows::Forms::Label^ roadmapNameLabel;
	private: System::Windows::Forms::TextBox^ roadmapNameTextBox;



	private: System::Windows::Forms::Label^ topicsLabel;
	private: System::Windows::Forms::Label^ subtopicsLabel;
	private: System::Windows::Forms::TextBox^ topicTextBox;




		   System::Windows::Forms::TextBox^ subtopicTextBox;
		   System::Windows::Forms::Button^ AddNewRowButton;
		   System::Windows::Forms::Button^ SaveButton;
		   System::Windows::Forms::Label^ authorLabel;
		   System::Windows::Forms::TextBox^ authorTextBox;
		   System::Windows::Forms::Label^ deadlineLabel;
		   System::Windows::Forms::Button^ DeleteLastRowButton;
		   System::Windows::Forms::Panel^ scrollPanel;
	private: System::Windows::Forms::TextBox^ descriptionTextBox;

		   System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ logoPicture;

		   System::Windows::Forms::Panel^ panel1;
		   System::Windows::Forms::Button^ closeButton;
		   System::Windows::Forms::DateTimePicker^ dateTimePicker;
		   System::Drawing::Point lastPoint;
		   System::ComponentModel::Container^ components;

		   bool dragging = false;

	protected:

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(creationwindow::typeid));
			this->main_title = (gcnew System::Windows::Forms::Label());
			this->roadmapNameLabel = (gcnew System::Windows::Forms::Label());
			this->roadmapNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->topicsLabel = (gcnew System::Windows::Forms::Label());
			this->subtopicsLabel = (gcnew System::Windows::Forms::Label());
			this->topicTextBox = (gcnew System::Windows::Forms::TextBox());
			this->subtopicTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddNewRowButton = (gcnew System::Windows::Forms::Button());
			this->SaveButton = (gcnew System::Windows::Forms::Button());
			this->authorLabel = (gcnew System::Windows::Forms::Label());
			this->authorTextBox = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->deadlineLabel = (gcnew System::Windows::Forms::Label());
			this->DeleteLastRowButton = (gcnew System::Windows::Forms::Button());
			this->scrollPanel = (gcnew System::Windows::Forms::Panel());
			this->descriptionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->closeButton = (gcnew System::Windows::Forms::Button());
			this->logoPicture = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoPicture))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// main_title
			// 
			this->main_title->AutoSize = true;
			this->main_title->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->main_title->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->main_title->ForeColor = System::Drawing::Color::Black;
			this->main_title->Location = System::Drawing::Point(28, 25);
			this->main_title->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->main_title->Name = L"main_title";
			this->main_title->Size = System::Drawing::Size(0, 22);
			this->main_title->TabIndex = 0;
			// 
			// roadmapNameLabel
			// 
			this->roadmapNameLabel->AutoSize = true;
			this->roadmapNameLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->roadmapNameLabel->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold));
			this->roadmapNameLabel->ForeColor = System::Drawing::Color::White;
			this->roadmapNameLabel->Location = System::Drawing::Point(35, 95);
			this->roadmapNameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->roadmapNameLabel->Name = L"roadmapNameLabel";
			this->roadmapNameLabel->Size = System::Drawing::Size(110, 15);
			this->roadmapNameLabel->TabIndex = 3;
			this->roadmapNameLabel->Text = L"ROADMAP NAME";
			// 
			// roadmapNameTextBox
			// 
			this->roadmapNameTextBox->BackColor = System::Drawing::Color::White;
			this->roadmapNameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->roadmapNameTextBox->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold));
			this->roadmapNameTextBox->ForeColor = System::Drawing::Color::Black;
			this->roadmapNameTextBox->Location = System::Drawing::Point(36, 117);
			this->roadmapNameTextBox->Margin = System::Windows::Forms::Padding(4);
			this->roadmapNameTextBox->MaxLength = 45;
			this->roadmapNameTextBox->Name = L"roadmapNameTextBox";
			this->roadmapNameTextBox->Size = System::Drawing::Size(259, 20);
			this->roadmapNameTextBox->TabIndex = 6;
			// 
			// topicsLabel
			// 
			this->topicsLabel->AutoSize = true;
			this->topicsLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->topicsLabel->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold));
			this->topicsLabel->ForeColor = System::Drawing::Color::White;
			this->topicsLabel->Location = System::Drawing::Point(35, 164);
			this->topicsLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->topicsLabel->Name = L"topicsLabel";
			this->topicsLabel->Size = System::Drawing::Size(181, 15);
			this->topicsLabel->TabIndex = 7;
			this->topicsLabel->Text = L"TOPICS AND DESCRIPTIONS";
			// 
			// subtopicsLabel
			// 
			this->subtopicsLabel->AutoSize = true;
			this->subtopicsLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->subtopicsLabel->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold));
			this->subtopicsLabel->ForeColor = System::Drawing::Color::White;
			this->subtopicsLabel->Location = System::Drawing::Point(311, 164);
			this->subtopicsLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->subtopicsLabel->Name = L"subtopicsLabel";
			this->subtopicsLabel->Size = System::Drawing::Size(79, 15);
			this->subtopicsLabel->TabIndex = 8;
			this->subtopicsLabel->Text = L"SUBTOPICS";
			// 
			// topicTextBox
			// 
			this->topicTextBox->BackColor = System::Drawing::Color::White;
			this->topicTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->topicTextBox->Enabled = false;
			this->topicTextBox->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->topicTextBox->ForeColor = System::Drawing::Color::Black;
			this->topicTextBox->Location = System::Drawing::Point(36, 193);
			this->topicTextBox->Margin = System::Windows::Forms::Padding(4);
			this->topicTextBox->MaxLength = 45;
			this->topicTextBox->Name = L"topicTextBox";
			this->topicTextBox->Size = System::Drawing::Size(259, 20);
			this->topicTextBox->TabIndex = 11;
			this->topicTextBox->Text = L"#Enter topicname";
			// 
			// subtopicTextBox
			// 
			this->subtopicTextBox->BackColor = System::Drawing::Color::White;
			this->subtopicTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->subtopicTextBox->Enabled = false;
			this->subtopicTextBox->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold));
			this->subtopicTextBox->ForeColor = System::Drawing::Color::Black;
			this->subtopicTextBox->Location = System::Drawing::Point(314, 193);
			this->subtopicTextBox->Margin = System::Windows::Forms::Padding(4);
			this->subtopicTextBox->MaxLength = 1000;
			this->subtopicTextBox->Multiline = true;
			this->subtopicTextBox->Name = L"subtopicTextBox";
			this->subtopicTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->subtopicTextBox->Size = System::Drawing::Size(539, 63);
			this->subtopicTextBox->TabIndex = 12;
			this->subtopicTextBox->Text = L"#Enter subtopics names. Use \",\" (commas) to separate suptopics.\r\n";
			// 
			// AddNewRowButton
			// 
			this->AddNewRowButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->AddNewRowButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddNewRowButton->FlatAppearance->BorderSize = 0;
			this->AddNewRowButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->AddNewRowButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->AddNewRowButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddNewRowButton->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold));
			this->AddNewRowButton->ForeColor = System::Drawing::Color::White;
			this->AddNewRowButton->Location = System::Drawing::Point(36, 560);
			this->AddNewRowButton->Margin = System::Windows::Forms::Padding(4);
			this->AddNewRowButton->Name = L"AddNewRowButton";
			this->AddNewRowButton->Size = System::Drawing::Size(405, 43);
			this->AddNewRowButton->TabIndex = 13;
			this->AddNewRowButton->Text = L"ADD NEW ROW";
			this->AddNewRowButton->UseVisualStyleBackColor = false;
			this->AddNewRowButton->Click += gcnew System::EventHandler(this, &creationwindow::button1_Click);
			// 
			// SaveButton
			// 
			this->SaveButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->SaveButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SaveButton->FlatAppearance->BorderSize = 0;
			this->SaveButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->SaveButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->SaveButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SaveButton->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold));
			this->SaveButton->ForeColor = System::Drawing::Color::White;
			this->SaveButton->Location = System::Drawing::Point(720, 560);
			this->SaveButton->Margin = System::Windows::Forms::Padding(4);
			this->SaveButton->Name = L"SaveButton";
			this->SaveButton->Size = System::Drawing::Size(133, 43);
			this->SaveButton->TabIndex = 14;
			this->SaveButton->Text = L"SAVE";
			this->SaveButton->UseVisualStyleBackColor = false;
			this->SaveButton->Click += gcnew System::EventHandler(this, &creationwindow::SaveButton_Click);
			// 
			// authorLabel
			// 
			this->authorLabel->AutoSize = true;
			this->authorLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->authorLabel->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold));
			this->authorLabel->ForeColor = System::Drawing::Color::White;
			this->authorLabel->Location = System::Drawing::Point(311, 95);
			this->authorLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->authorLabel->Name = L"authorLabel";
			this->authorLabel->Size = System::Drawing::Size(60, 15);
			this->authorLabel->TabIndex = 17;
			this->authorLabel->Text = L"AUTHOR";
			// 
			// authorTextBox
			// 
			this->authorTextBox->BackColor = System::Drawing::Color::White;
			this->authorTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->authorTextBox->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold));
			this->authorTextBox->ForeColor = System::Drawing::Color::Black;
			this->authorTextBox->Location = System::Drawing::Point(314, 117);
			this->authorTextBox->Margin = System::Windows::Forms::Padding(4);
			this->authorTextBox->MaxLength = 45;
			this->authorTextBox->Name = L"authorTextBox";
			this->authorTextBox->Size = System::Drawing::Size(259, 20);
			this->authorTextBox->TabIndex = 18;
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->BackColor = System::Drawing::Color::Black;
			this->dateTimePicker->CalendarForeColor = System::Drawing::Color::White;
			this->dateTimePicker->CalendarMonthBackground = System::Drawing::Color::Black;
			this->dateTimePicker->CalendarTitleBackColor = System::Drawing::Color::Black;
			this->dateTimePicker->CalendarTitleForeColor = System::Drawing::Color::White;
			this->dateTimePicker->CalendarTrailingForeColor = System::Drawing::Color::Gray;
			this->dateTimePicker->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold));
			this->dateTimePicker->ForeColor = System::Drawing::Color::White;
			this->dateTimePicker->Location = System::Drawing::Point(594, 117);
			this->dateTimePicker->Margin = System::Windows::Forms::Padding(0);
			this->dateTimePicker->MinDate = System::DateTime(2024, 8, 20, 0, 0, 0, 0);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dateTimePicker->Size = System::Drawing::Size(259, 20);
			this->dateTimePicker->TabIndex = 19;
			// 
			// deadlineLabel
			// 
			this->deadlineLabel->AutoSize = true;
			this->deadlineLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->deadlineLabel->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold));
			this->deadlineLabel->ForeColor = System::Drawing::Color::White;
			this->deadlineLabel->Location = System::Drawing::Point(591, 95);
			this->deadlineLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->deadlineLabel->Name = L"deadlineLabel";
			this->deadlineLabel->Size = System::Drawing::Size(70, 15);
			this->deadlineLabel->TabIndex = 20;
			this->deadlineLabel->Text = L"DEADLINE";
			// 
			// DeleteLastRowButton
			// 
			this->DeleteLastRowButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->DeleteLastRowButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DeleteLastRowButton->FlatAppearance->BorderSize = 0;
			this->DeleteLastRowButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->DeleteLastRowButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->DeleteLastRowButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeleteLastRowButton->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold));
			this->DeleteLastRowButton->ForeColor = System::Drawing::Color::White;
			this->DeleteLastRowButton->Location = System::Drawing::Point(483, 560);
			this->DeleteLastRowButton->Margin = System::Windows::Forms::Padding(4);
			this->DeleteLastRowButton->Name = L"DeleteLastRowButton";
			this->DeleteLastRowButton->Size = System::Drawing::Size(177, 43);
			this->DeleteLastRowButton->TabIndex = 21;
			this->DeleteLastRowButton->Text = L"DELETE LAST ROW";
			this->DeleteLastRowButton->UseVisualStyleBackColor = false;
			this->DeleteLastRowButton->Click += gcnew System::EventHandler(this, &creationwindow::DeleteLastRowButton_Click_1);
			// 
			// scrollPanel
			// 
			this->scrollPanel->AutoScroll = true;
			this->scrollPanel->BackColor = System::Drawing::Color::White;
			this->scrollPanel->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold));
			this->scrollPanel->Location = System::Drawing::Point(36, 263);
			this->scrollPanel->Name = L"scrollPanel";
			this->scrollPanel->Size = System::Drawing::Size(841, 387);
			this->scrollPanel->TabIndex = 22;
			// 
			// descriptionTextBox
			// 
			this->descriptionTextBox->BackColor = System::Drawing::Color::White;
			this->descriptionTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->descriptionTextBox->Enabled = false;
			this->descriptionTextBox->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold));
			this->descriptionTextBox->ForeColor = System::Drawing::Color::Black;
			this->descriptionTextBox->Location = System::Drawing::Point(36, 221);
			this->descriptionTextBox->Margin = System::Windows::Forms::Padding(4);
			this->descriptionTextBox->MaxLength = 150;
			this->descriptionTextBox->Multiline = true;
			this->descriptionTextBox->Name = L"descriptionTextBox";
			this->descriptionTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->descriptionTextBox->Size = System::Drawing::Size(259, 35);
			this->descriptionTextBox->TabIndex = 23;
			this->descriptionTextBox->Text = L"#Enter description for topic";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->roadmapNameLabel);
			this->panel2->Controls->Add(this->closeButton);
			this->panel2->Controls->Add(this->scrollPanel);
			this->panel2->Controls->Add(this->logoPicture);
			this->panel2->Controls->Add(this->authorLabel);
			this->panel2->Controls->Add(this->subtopicsLabel);
			this->panel2->Controls->Add(this->descriptionTextBox);
			this->panel2->Controls->Add(this->topicsLabel);
			this->panel2->Controls->Add(this->topicTextBox);
			this->panel2->Controls->Add(this->roadmapNameTextBox);
			this->panel2->Controls->Add(this->dateTimePicker);
			this->panel2->Controls->Add(this->subtopicTextBox);
			this->panel2->Controls->Add(this->authorTextBox);
			this->panel2->Controls->Add(this->deadlineLabel);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(875, 653);
			this->panel2->TabIndex = 24;
			// 
			// closeButton
			// 
			this->closeButton->BackColor = System::Drawing::Color::White;
			this->closeButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closeButton->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->closeButton->FlatAppearance->BorderSize = 0;
			this->closeButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkRed;
			this->closeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->closeButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->closeButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closeButton.Image")));
			this->closeButton->Location = System::Drawing::Point(828, 12);
			this->closeButton->Name = L"closeButton";
			this->closeButton->Size = System::Drawing::Size(35, 34);
			this->closeButton->TabIndex = 4;
			this->closeButton->UseVisualStyleBackColor = false;
			this->closeButton->Click += gcnew System::EventHandler(this, &creationwindow::closeButton_Click);
			// 
			// logoPicture
			// 
			this->logoPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoPicture.Image")));
			this->logoPicture->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->logoPicture->Location = System::Drawing::Point(34, 33);
			this->logoPicture->Name = L"logoPicture";
			this->logoPicture->Size = System::Drawing::Size(145, 35);
			this->logoPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->logoPicture->TabIndex = 0;
			this->logoPicture->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->panel1->Controls->Add(this->SaveButton);
			this->panel1->Controls->Add(this->AddNewRowButton);
			this->panel1->Controls->Add(this->DeleteLastRowButton);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 117);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(875, 629);
			this->panel1->TabIndex = 25;
			// 
			// creationwindow
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->ClientSize = System::Drawing::Size(875, 746);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->main_title);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"creationwindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RoadMap - Create new roadmap";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoPicture))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private:
		void SetDragHandlers(System::Windows::Forms::Panel^ panel) {
			panel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &creationwindow::Form_MouseDown);
			panel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &creationwindow::Form_MouseMove);
			panel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &creationwindow::Form_MouseUp);
		}

		void Form_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (e->Button == System::Windows::Forms::MouseButtons::Left)
			{
				dragging = true;
				lastPoint = e->Location;
			}
		}

		void Form_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (dragging)
			{
				this->Location = System::Drawing::Point(this->Location.X + (e->Location.X - lastPoint.X), this->Location.Y + (e->Location.Y - lastPoint.Y));
			}
		}

		void Form_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			dragging = false;
		}

	private:
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

			if (TopicCount >= 16) {
				MessageBox::Show("Maximum 15 Topics allowed.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			TextBox^ newtopicTextBox = gcnew TextBox();
			TextBox^ newsubtopicTextBox = gcnew TextBox();
			TextBox^ newdescriptionTextBox = gcnew TextBox();

			int verticalSpacing = 50;

			int newY;

			if (TopicCount == 0) {
				newY = topicTextBox->Location.Y + topicTextBox->Height + verticalSpacing;
				newtopicTextBox->Location = System::Drawing::Point(topicTextBox->Location.X - scrollPanel->Location.X, newY - scrollPanel->Location.Y);
				newtopicTextBox->Size = topicTextBox->Size;

				newsubtopicTextBox->Location = System::Drawing::Point(subtopicTextBox->Location.X - scrollPanel->Location.X, newY - scrollPanel->Location.Y);
				newsubtopicTextBox->Size = subtopicTextBox->Size;

				newdescriptionTextBox->Location = System::Drawing::Point(descriptionTextBox->Location.X - scrollPanel->Location.X, newY + 27 - scrollPanel->Location.Y);
				newdescriptionTextBox->Size = descriptionTextBox->Size;
			}
			else {
				TextBox^ lasttopicTextBox = (TextBox^)textBoxes[textBoxes->Count - 3];
				newY = lasttopicTextBox->Location.Y + lasttopicTextBox->Height + verticalSpacing;

				newtopicTextBox->Location = System::Drawing::Point(lasttopicTextBox->Location.X, newY);
				newtopicTextBox->Size = lasttopicTextBox->Size;

				TextBox^ lastsubtopicTextBox = (TextBox^)textBoxes[textBoxes->Count - 2];
				newsubtopicTextBox->Location = System::Drawing::Point(lastsubtopicTextBox->Location.X, newY);
				newsubtopicTextBox->Size = lastsubtopicTextBox->Size;

				TextBox^ lastdescriptionTextBox = (TextBox^)textBoxes[textBoxes->Count - 1];
				newdescriptionTextBox->Location = System::Drawing::Point(lastdescriptionTextBox->Location.X, newY + 27);
				newdescriptionTextBox->Size = lastdescriptionTextBox->Size;
			}

			newtopicTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			newsubtopicTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			newdescriptionTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;

			newtopicTextBox->Name = "topicTextBox_" + TopicCount.ToString();
			newsubtopicTextBox->Name = "subtopicTextBox_" + TopicCount.ToString();
			newdescriptionTextBox->Name = "descriptionTextBox_" + TopicCount.ToString();

			newsubtopicTextBox->Multiline = true;
			newsubtopicTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;

			newtopicTextBox->MaxLength = 45;
			newsubtopicTextBox->MaxLength = 1000;
			newdescriptionTextBox->MaxLength = 150;

			newdescriptionTextBox->Multiline = true;
			newdescriptionTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;

			this->scrollPanel->Controls->Add(newtopicTextBox);
			this->scrollPanel->Controls->Add(newsubtopicTextBox);
			this->scrollPanel->Controls->Add(newdescriptionTextBox);

			textBoxes->Add(newtopicTextBox);
			textBoxes->Add(newsubtopicTextBox);
			textBoxes->Add(newdescriptionTextBox);

			TopicCount++;
		}

	private:
		System::Void SaveButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (roadmapNameTextBox->Text->Length > 45 || roadmapNameTextBox->Text->Length == 0) {
				MessageBox::Show("Roadmap name can be up to 45 characters long and cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (authorTextBox->Text->Length > 45 || authorTextBox->Text->Length == 0) {
				MessageBox::Show("Author name can be up to 45 characters long and cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			System::Xml::XmlDocument^ xmlDoc = gcnew System::Xml::XmlDocument();
			System::Xml::XmlElement^ rootNode = xmlDoc->CreateElement("RoadMap");

			System::Xml::XmlElement^ infoNode = xmlDoc->CreateElement("MAPINFO");
			infoNode->SetAttribute("Title", roadmapNameTextBox->Text);
			infoNode->SetAttribute("Author", authorTextBox->Text);
			rootNode->AppendChild(infoNode);

			for (int i = 0; i < textBoxes->Count; i += 3) {
				String^ TopicText = textBoxes[i]->Text;
				String^ DescriptionText = textBoxes[i + 2]->Text;
				String^ SubtopicTextDynamic = textBoxes[i + 1]->Text;

				if (TopicText->Length > 45 || TopicText->Length == 0) {
					MessageBox::Show("Topic name can be up to 45 characters long and cannot be empty in row " + (i / 3 + 1).ToString() + ".", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				if (DescriptionText->Length > 150 || DescriptionText->Length == 0) {
					MessageBox::Show("Description can be up to 150 characters long and cannot be empty in row " + (i / 3 + 1).ToString() + ".", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				int commaIndex = SubtopicTextDynamic->IndexOf(",");
				if (commaIndex >= 0) {
					if (commaIndex > 50) {
						MessageBox::Show("You can enter only 50 symbols before comma in subtopics in row " + (i / 3 + 1).ToString() + ".", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						return;
					}
				}
				else {
					if (SubtopicTextDynamic->Length > 50) {
						MessageBox::Show("You can enter only 50 symbols before comma in subtopics in row " + (i / 3 + 1).ToString() + ".", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						return;
					}
				}

				System::Xml::XmlElement^ rowsNode = xmlDoc->CreateElement("ROWS");
				rowsNode->SetAttribute("Topic", TopicText);
				rowsNode->SetAttribute("Description", DescriptionText);
				rowsNode->SetAttribute("Subtopic", SubtopicTextDynamic);
				rootNode->AppendChild(rowsNode);
			}

			System::Xml::XmlElement^ dateNode = xmlDoc->CreateElement("DATE");
			dateNode->SetAttribute("Deadline", dateTimePicker->Value.ToString("yyyy-MM-dd"));
			rootNode->AppendChild(dateNode);

			xmlDoc->AppendChild(rootNode);

			try {
				SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
				saveFileDialog1->Filter = "XML files (*.xml)|*.xml";
				saveFileDialog1->FilterIndex = 1;
				saveFileDialog1->RestoreDirectory = true;

				if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					String^ filePath = saveFileDialog1->FileName;
					xmlDoc->Save(filePath);
					MessageBox::Show("Roadmap saved successfully. \n\nPlease, go back to the mainpage and choose 'UPLOAD' button.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error occurred while saving the Roadmap: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

	private:
		System::Void DeleteLastRowButton_Click_1(System::Object^ sender, System::EventArgs^ e) {
			if (textBoxes->Count > 2) {
				System::Windows::Forms::DialogResult result = MessageBox::Show(
					"Are you sure you want to delete the last row?",
					"Confirmation",
					MessageBoxButtons::YesNo,
					MessageBoxIcon::Question);

				if (result == System::Windows::Forms::DialogResult::Yes) {
					TextBox^ lastdescriptionTextBox = safe_cast<TextBox^>(textBoxes[textBoxes->Count - 1]);
					TextBox^ lastsubtopicTextBox = safe_cast<TextBox^>(textBoxes[textBoxes->Count - 2]);
					TextBox^ lasttopicTextBox = safe_cast<TextBox^>(textBoxes[textBoxes->Count - 3]);

					this->scrollPanel->Controls->Remove(lastdescriptionTextBox);
					this->scrollPanel->Controls->Remove(lastsubtopicTextBox);
					this->scrollPanel->Controls->Remove(lasttopicTextBox);

					textBoxes->RemoveAt(textBoxes->Count - 1);
					textBoxes->RemoveAt(textBoxes->Count - 1);
					textBoxes->RemoveAt(textBoxes->Count - 1);

					int newHeight = (textBoxes->Count > 0) ? textBoxes[textBoxes->Count - 1]->Location.Y + textBoxes[textBoxes->Count - 1]->Height + 50 : 0;
					this->scrollPanel->AutoScrollMinSize = System::Drawing::Size(this->scrollPanel->ClientSize.Width, newHeight);

					TopicCount--;
				}
			}
			else {
				MessageBox::Show("At least two rows must remain.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	private:
		System::Void closeButton_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
	};
}