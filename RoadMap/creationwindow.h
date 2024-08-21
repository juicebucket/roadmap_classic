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
		System::Windows::Forms::Label^ labelRoadmapName;
	    System::Windows::Forms::TextBox^ roadmapTextBox;
		System::Windows::Forms::Label^ labelSections;
		System::Windows::Forms::Label^ labelCheckpoints;
		System::Windows::Forms::TextBox^ TopicTextBox;
		System::Windows::Forms::TextBox^ subtopicTextBox;
		System::Windows::Forms::Button^ AddNewRowButton;
		System::Windows::Forms::Button^ SaveButton;
		System::Windows::Forms::PictureBox^ logoPicture;
		System::Windows::Forms::Label^ authorLabel;
		System::Windows::Forms::TextBox^ authorTextBox;
		System::Windows::Forms::DateTimePicker^ dateTimePicker;
		System::Windows::Forms::Label^ deadlineLabel;
		System::Windows::Forms::Button^ DeleteLastRowButton;
		System::Windows::Forms::Panel^ scrollPanel;
		System::Windows::Forms::TextBox^ DescriptionTextBox;
		System::Windows::Forms::Panel^ panel1;
		System::Windows::Forms::Panel^ panel2;

		System::ComponentModel::Container^ components;

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
			this->labelRoadmapName = (gcnew System::Windows::Forms::Label());
			this->roadmapTextBox = (gcnew System::Windows::Forms::TextBox());
			this->labelSections = (gcnew System::Windows::Forms::Label());
			this->labelCheckpoints = (gcnew System::Windows::Forms::Label());
			this->TopicTextBox = (gcnew System::Windows::Forms::TextBox());
			this->subtopicTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddNewRowButton = (gcnew System::Windows::Forms::Button());
			this->SaveButton = (gcnew System::Windows::Forms::Button());
			this->logoPicture = (gcnew System::Windows::Forms::PictureBox());
			this->authorLabel = (gcnew System::Windows::Forms::Label());
			this->authorTextBox = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->deadlineLabel = (gcnew System::Windows::Forms::Label());
			this->DeleteLastRowButton = (gcnew System::Windows::Forms::Button());
			this->scrollPanel = (gcnew System::Windows::Forms::Panel());
			this->DescriptionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
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
			// labelRoadmapName
			// 
			this->labelRoadmapName->AutoSize = true;
			this->labelRoadmapName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->labelRoadmapName->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRoadmapName->ForeColor = System::Drawing::Color::Black;
			this->labelRoadmapName->Location = System::Drawing::Point(78, 140);
			this->labelRoadmapName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelRoadmapName->Name = L"labelRoadmapName";
			this->labelRoadmapName->Size = System::Drawing::Size(108, 16);
			this->labelRoadmapName->TabIndex = 3;
			this->labelRoadmapName->Text = L"Roadmap name";
			// 
			// roadmapTextBox
			// 
			this->roadmapTextBox->BackColor = System::Drawing::Color::White;
			this->roadmapTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->roadmapTextBox->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F));
			this->roadmapTextBox->Location = System::Drawing::Point(81, 162);
			this->roadmapTextBox->Margin = System::Windows::Forms::Padding(4);
			this->roadmapTextBox->MaxLength = 45;
			this->roadmapTextBox->Name = L"roadmapTextBox";
			this->roadmapTextBox->Size = System::Drawing::Size(259, 20);
			this->roadmapTextBox->TabIndex = 6;
			// 
			// labelSections
			// 
			this->labelSections->AutoSize = true;
			this->labelSections->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->labelSections->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->labelSections->ForeColor = System::Drawing::Color::Black;
			this->labelSections->Location = System::Drawing::Point(78, 255);
			this->labelSections->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSections->Name = L"labelSections";
			this->labelSections->Size = System::Drawing::Size(156, 16);
			this->labelSections->TabIndex = 7;
			this->labelSections->Text = L"Topics and Descriptions";
			// 
			// labelCheckpoints
			// 
			this->labelCheckpoints->AutoSize = true;
			this->labelCheckpoints->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->labelCheckpoints->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->labelCheckpoints->ForeColor = System::Drawing::Color::Black;
			this->labelCheckpoints->Location = System::Drawing::Point(355, 257);
			this->labelCheckpoints->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCheckpoints->Name = L"labelCheckpoints";
			this->labelCheckpoints->Size = System::Drawing::Size(69, 16);
			this->labelCheckpoints->TabIndex = 8;
			this->labelCheckpoints->Text = L"Subtopics";
			// 
			// TopicTextBox
			// 
			this->TopicTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TopicTextBox->Enabled = false;
			this->TopicTextBox->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F));
			this->TopicTextBox->Location = System::Drawing::Point(81, 279);
			this->TopicTextBox->Margin = System::Windows::Forms::Padding(4);
			this->TopicTextBox->MaxLength = 45;
			this->TopicTextBox->Name = L"TopicTextBox";
			this->TopicTextBox->Size = System::Drawing::Size(259, 20);
			this->TopicTextBox->TabIndex = 11;
			this->TopicTextBox->Text = L"#Enter topicname";
			// 
			// subtopicTextBox
			// 
			this->subtopicTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->subtopicTextBox->Enabled = false;
			this->subtopicTextBox->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F));
			this->subtopicTextBox->Location = System::Drawing::Point(359, 279);
			this->subtopicTextBox->Margin = System::Windows::Forms::Padding(4);
			this->subtopicTextBox->MaxLength = 1500;
			this->subtopicTextBox->Multiline = true;
			this->subtopicTextBox->Name = L"subtopicTextBox";
			this->subtopicTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->subtopicTextBox->Size = System::Drawing::Size(480, 63);
			this->subtopicTextBox->TabIndex = 12;
			this->subtopicTextBox->Text = L"#Enter subtopics names. Use \",\" (commas) to separate suptopics.\r\n\r\n";
			// 
			// AddNewRowButton
			// 
			this->AddNewRowButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(96)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->AddNewRowButton->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->AddNewRowButton->ForeColor = System::Drawing::Color::White;
			this->AddNewRowButton->Location = System::Drawing::Point(81, 605);
			this->AddNewRowButton->Margin = System::Windows::Forms::Padding(4);
			this->AddNewRowButton->Name = L"AddNewRowButton";
			this->AddNewRowButton->Size = System::Drawing::Size(539, 43);
			this->AddNewRowButton->TabIndex = 13;
			this->AddNewRowButton->Text = L"ADD NEW ROW";
			this->AddNewRowButton->UseVisualStyleBackColor = false;
			this->AddNewRowButton->Click += gcnew System::EventHandler(this, &creationwindow::button1_Click);
			// 
			// SaveButton
			// 
			this->SaveButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(96)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->SaveButton->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->SaveButton->ForeColor = System::Drawing::Color::White;
			this->SaveButton->Location = System::Drawing::Point(838, 669);
			this->SaveButton->Margin = System::Windows::Forms::Padding(4);
			this->SaveButton->Name = L"SaveButton";
			this->SaveButton->Size = System::Drawing::Size(133, 49);
			this->SaveButton->TabIndex = 14;
			this->SaveButton->Text = L"SAVE";
			this->SaveButton->UseVisualStyleBackColor = false;
			this->SaveButton->Click += gcnew System::EventHandler(this, &creationwindow::SaveButton_Click);
			// 
			// logoPicture
			// 
			this->logoPicture->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoPicture.BackgroundImage")));
			this->logoPicture->Location = System::Drawing::Point(32, 25);
			this->logoPicture->Name = L"logoPicture";
			this->logoPicture->Size = System::Drawing::Size(161, 50);
			this->logoPicture->TabIndex = 16;
			this->logoPicture->TabStop = false;
			// 
			// authorLabel
			// 
			this->authorLabel->AutoSize = true;
			this->authorLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->authorLabel->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->authorLabel->ForeColor = System::Drawing::Color::Black;
			this->authorLabel->Location = System::Drawing::Point(78, 198);
			this->authorLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->authorLabel->Name = L"authorLabel";
			this->authorLabel->Size = System::Drawing::Size(49, 16);
			this->authorLabel->TabIndex = 17;
			this->authorLabel->Text = L"Author";
			// 
			// authorTextBox
			// 
			this->authorTextBox->BackColor = System::Drawing::Color::White;
			this->authorTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->authorTextBox->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F));
			this->authorTextBox->Location = System::Drawing::Point(81, 220);
			this->authorTextBox->Margin = System::Windows::Forms::Padding(4);
			this->authorTextBox->MaxLength = 45;
			this->authorTextBox->Name = L"authorTextBox";
			this->authorTextBox->Size = System::Drawing::Size(259, 20);
			this->authorTextBox->TabIndex = 18;
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F));
			this->dateTimePicker->Location = System::Drawing::Point(361, 220);
			this->dateTimePicker->MinDate = System::DateTime(2024, 8, 19, 0, 0, 0, 0);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(259, 20);
			this->dateTimePicker->TabIndex = 19;
			// 
			// deadlineLabel
			// 
			this->deadlineLabel->AutoSize = true;
			this->deadlineLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->deadlineLabel->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->deadlineLabel->ForeColor = System::Drawing::Color::Black;
			this->deadlineLabel->Location = System::Drawing::Point(358, 199);
			this->deadlineLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->deadlineLabel->Name = L"deadlineLabel";
			this->deadlineLabel->Size = System::Drawing::Size(64, 16);
			this->deadlineLabel->TabIndex = 20;
			this->deadlineLabel->Text = L"Deadline";
			// 
			// DeleteLastRowButton
			// 
			this->DeleteLastRowButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->DeleteLastRowButton->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->DeleteLastRowButton->ForeColor = System::Drawing::Color::White;
			this->DeleteLastRowButton->Location = System::Drawing::Point(657, 605);
			this->DeleteLastRowButton->Margin = System::Windows::Forms::Padding(4);
			this->DeleteLastRowButton->Name = L"DeleteLastRowButton";
			this->DeleteLastRowButton->Size = System::Drawing::Size(157, 43);
			this->DeleteLastRowButton->TabIndex = 21;
			this->DeleteLastRowButton->Text = L"DELETE LAST ROW";
			this->DeleteLastRowButton->UseVisualStyleBackColor = false;
			this->DeleteLastRowButton->Click += gcnew System::EventHandler(this, &creationwindow::DeleteLastRowButton_Click_1);
			// 
			// scrollPanel
			// 
			this->scrollPanel->AutoScroll = true;
			this->scrollPanel->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F));
			this->scrollPanel->Location = System::Drawing::Point(81, 349);
			this->scrollPanel->Name = L"scrollPanel";
			this->scrollPanel->Size = System::Drawing::Size(916, 239);
			this->scrollPanel->TabIndex = 22;
			// 
			// DescriptionTextBox
			// 
			this->DescriptionTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DescriptionTextBox->Enabled = false;
			this->DescriptionTextBox->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DescriptionTextBox->Location = System::Drawing::Point(81, 307);
			this->DescriptionTextBox->Margin = System::Windows::Forms::Padding(4);
			this->DescriptionTextBox->MaxLength = 150;
			this->DescriptionTextBox->Multiline = true;
			this->DescriptionTextBox->Name = L"DescriptionTextBox";
			this->DescriptionTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->DescriptionTextBox->Size = System::Drawing::Size(259, 35);
			this->DescriptionTextBox->TabIndex = 23;
			this->DescriptionTextBox->Text = L"#Enter description for topic";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->logoPicture);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(998, 100);
			this->panel1->TabIndex = 24;
			// 
			// panel2
			// 
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 94);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(998, 652);
			this->panel2->TabIndex = 25;
			// 
			// creationwindow
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->ClientSize = System::Drawing::Size(998, 746);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->DescriptionTextBox);
			this->Controls->Add(this->scrollPanel);
			this->Controls->Add(this->DeleteLastRowButton);
			this->Controls->Add(this->deadlineLabel);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->authorTextBox);
			this->Controls->Add(this->authorLabel);
			this->Controls->Add(this->SaveButton);
			this->Controls->Add(this->AddNewRowButton);
			this->Controls->Add(this->subtopicTextBox);
			this->Controls->Add(this->TopicTextBox);
			this->Controls->Add(this->labelCheckpoints);
			this->Controls->Add(this->labelSections);
			this->Controls->Add(this->roadmapTextBox);
			this->Controls->Add(this->labelRoadmapName);
			this->Controls->Add(this->main_title);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"creationwindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RoadMap - Create new map";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoPicture))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private:
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (TopicCount >= 15) {
				MessageBox::Show("Maximum 15 Topics allowed.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			TextBox^ newTopicTextBox = gcnew TextBox();
			TextBox^ newsubtopicTextBox = gcnew TextBox();
			TextBox^ newDescriptionTextBox = gcnew TextBox();

			int verticalSpacing = 50;

			int newY;

			if (TopicCount == 0) {
				newY = TopicTextBox->Location.Y + TopicTextBox->Height + verticalSpacing;
				newTopicTextBox->Location = System::Drawing::Point(TopicTextBox->Location.X - scrollPanel->Location.X, newY - scrollPanel->Location.Y);
				newTopicTextBox->Size = TopicTextBox->Size;

				newsubtopicTextBox->Location = System::Drawing::Point(subtopicTextBox->Location.X - scrollPanel->Location.X, newY - scrollPanel->Location.Y);
				newsubtopicTextBox->Size = subtopicTextBox->Size;

				newDescriptionTextBox->Location = System::Drawing::Point(DescriptionTextBox->Location.X - scrollPanel->Location.X, newY + 27 - scrollPanel->Location.Y);
				newDescriptionTextBox->Size = DescriptionTextBox->Size;
			}
			else {
				TextBox^ lastTopicTextBox = (TextBox^)textBoxes[textBoxes->Count - 3];
				newY = lastTopicTextBox->Location.Y + lastTopicTextBox->Height + verticalSpacing;

				newTopicTextBox->Location = System::Drawing::Point(lastTopicTextBox->Location.X, newY);
				newTopicTextBox->Size = lastTopicTextBox->Size;

				TextBox^ lastsubtopicTextBox = (TextBox^)textBoxes[textBoxes->Count - 2];
				newsubtopicTextBox->Location = System::Drawing::Point(lastsubtopicTextBox->Location.X, newY);
				newsubtopicTextBox->Size = lastsubtopicTextBox->Size;

				TextBox^ lastDescriptionTextBox = (TextBox^)textBoxes[textBoxes->Count - 1];
				newDescriptionTextBox->Location = System::Drawing::Point(lastDescriptionTextBox->Location.X, newY + 27);
				newDescriptionTextBox->Size = lastDescriptionTextBox->Size;
			}

			newTopicTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			newsubtopicTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			newDescriptionTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;

			newTopicTextBox->Name = "TopicTextBox_" + TopicCount.ToString();
			newsubtopicTextBox->Name = "subtopicTextBox_" + TopicCount.ToString();
			newDescriptionTextBox->Name = "DescriptionTextBox_" + TopicCount.ToString();

			newTopicTextBox->MaxLength = 45;
			newsubtopicTextBox->MaxLength = 1500;
			newDescriptionTextBox->MaxLength = 150;

			newsubtopicTextBox->Multiline = true;
			newsubtopicTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;

			newDescriptionTextBox->Multiline = true;
			newDescriptionTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;

			this->scrollPanel->Controls->Add(newTopicTextBox);
			this->scrollPanel->Controls->Add(newsubtopicTextBox);
			this->scrollPanel->Controls->Add(newDescriptionTextBox);

			textBoxes->Add(newTopicTextBox);
			textBoxes->Add(newsubtopicTextBox);
			textBoxes->Add(newDescriptionTextBox);

			TopicCount++;
		}

	private:
		System::Void SaveButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (roadmapTextBox->Text->Length > 40 || roadmapTextBox->Text->Length == 0) {
				MessageBox::Show("Roadmap name can be up to 40 characters long and cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (authorTextBox->Text->Length > 45 || authorTextBox->Text->Length == 0) {
				MessageBox::Show("Author name can be up to 45 characters long and cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			for (int i = 0; i < textBoxes->Count; i += 3) {
				String^ subtopicText = textBoxes[i + 1]->Text->Trim();
				String^ descriptionText = textBoxes[i + 2]->Text->Trim();

				int subtopicCount = subtopicText->Split(gcnew array<wchar_t>{','}, StringSplitOptions::RemoveEmptyEntries)->Length;

				if (descriptionText->Length > 0 && subtopicCount < 4) {
					MessageBox::Show("Each row must have at least 4 subtopics if a description is provided. Please add more subtopics before saving.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				String^ TopicText = textBoxes[i]->Text->Trim();
				if (TopicText->Length > 40 || TopicText->Length == 0) {
					MessageBox::Show("Topic name can be up to 40 characters long and cannot be empty in row " + (i / 3 + 1).ToString() + ".", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				if (descriptionText->Length > 150) {
					MessageBox::Show("Description can be up to 150 characters long in row " + (i / 3 + 1).ToString() + ".", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				if (String::IsNullOrWhiteSpace(subtopicText)) {
					MessageBox::Show("Subtopic cannot be empty in row " + (i / 3 + 1).ToString() + ".", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				int commaIndex = subtopicText->IndexOf(",");
				if (commaIndex >= 0) {
					if (commaIndex > 45) {
						MessageBox::Show("You can enter only 45 symbols before comma in subtopics in row " + (i / 3 + 1).ToString() + ".", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						return;
					}
				}
				else {
					if (subtopicText->Length > 45) {
						MessageBox::Show("You can enter only 45 symbols before comma in subtopics in row " + (i / 3 + 1).ToString() + ".", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						return;
					}
				}
			}

			System::Xml::XmlDocument^ xmlDoc = gcnew System::Xml::XmlDocument();
			System::Xml::XmlElement^ rootNode = xmlDoc->CreateElement("RoadMap");

			System::Xml::XmlElement^ infoNode = xmlDoc->CreateElement("MAPINFO");
			infoNode->SetAttribute("Title", roadmapTextBox->Text);
			infoNode->SetAttribute("Author", authorTextBox->Text);
			rootNode->AppendChild(infoNode);

			for (int i = 0; i < textBoxes->Count; i += 3) {
				String^ TopicText = textBoxes[i]->Text->Trim();
				String^ DescriptionText = textBoxes[i + 2]->Text->Trim();
				String^ SubtopicTextDynamic = textBoxes[i + 1]->Text->Trim();

				SubtopicTextDynamic = SubtopicTextDynamic->Replace("\r", "")->Replace("\n", "");

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
			if (textBoxes->Count > 3) { 
				System::Windows::Forms::DialogResult result = MessageBox::Show(
					"Are you sure you want to delete the last row?",
					"Confirmation",
					MessageBoxButtons::YesNo,
					MessageBoxIcon::Question);

				if (result == System::Windows::Forms::DialogResult::Yes) {
					TextBox^ lastDescriptionTextBox = safe_cast<TextBox^>(textBoxes[textBoxes->Count - 1]);
					TextBox^ lastsubtopicTextBox = safe_cast<TextBox^>(textBoxes[textBoxes->Count - 2]);
					TextBox^ lastTopicTextBox = safe_cast<TextBox^>(textBoxes[textBoxes->Count - 3]);

					this->scrollPanel->Controls->Remove(lastDescriptionTextBox);
					this->scrollPanel->Controls->Remove(lastsubtopicTextBox);
					this->scrollPanel->Controls->Remove(lastTopicTextBox);

					textBoxes->RemoveAt(textBoxes->Count - 1);
					textBoxes->RemoveAt(textBoxes->Count - 1);
					textBoxes->RemoveAt(textBoxes->Count - 1);

					int newHeight = (textBoxes->Count > 0) ? textBoxes[textBoxes->Count - 1]->Location.Y + textBoxes[textBoxes->Count - 1]->Height + 50 : 0;
					this->scrollPanel->AutoScrollMinSize = System::Drawing::Size(this->scrollPanel->ClientSize.Width, newHeight);

					TopicCount--;
				}
			}
			else {
				MessageBox::Show("At least one row must remain.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	};
}