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
		System::Windows::Forms::PictureBox^ pictureBox1;
		System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ RoadmapTextBox;

		System::Windows::Forms::Label^ labelSections;
		System::Windows::Forms::Label^ labelCheckpoints;
	private: System::Windows::Forms::TextBox^ TopicTextBox;
	private: System::Windows::Forms::TextBox^ SubtopicTextBox;
	private: System::Windows::Forms::Button^ AddNewRowButton;




		System::Windows::Forms::Button^ SaveButton;
		System::Windows::Forms::PictureBox^ pictureBox3;
		System::Windows::Forms::PictureBox^ pictureBox2;
		System::Windows::Forms::Label^ labelAuthor;
	private: System::Windows::Forms::TextBox^ AuthorTextBox;

		System::Windows::Forms::DateTimePicker^ dateTimePicker;
		System::Windows::Forms::Label^ labelDeadline;


	private: System::Windows::Forms::Button^ DeleteLastRowButton;
	private: System::Windows::Forms::Panel^ scrollPanel;
	private: System::Windows::Forms::TextBox^ DescriptionTextBox;




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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->RoadmapTextBox = (gcnew System::Windows::Forms::TextBox());
			this->labelSections = (gcnew System::Windows::Forms::Label());
			this->labelCheckpoints = (gcnew System::Windows::Forms::Label());
			this->TopicTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SubtopicTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddNewRowButton = (gcnew System::Windows::Forms::Button());
			this->SaveButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->labelAuthor = (gcnew System::Windows::Forms::Label());
			this->AuthorTextBox = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelDeadline = (gcnew System::Windows::Forms::Label());
			this->DeleteLastRowButton = (gcnew System::Windows::Forms::Button());
			this->scrollPanel = (gcnew System::Windows::Forms::Panel());
			this->DescriptionTextBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
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
			this->labelRoadmapName->Location = System::Drawing::Point(91, 135);
			this->labelRoadmapName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelRoadmapName->Name = L"labelRoadmapName";
			this->labelRoadmapName->Size = System::Drawing::Size(181, 16);
			this->labelRoadmapName->TabIndex = 3;
			this->labelRoadmapName->Text = L"Enter the name of roadmap";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Crimson;
			this->pictureBox1->Location = System::Drawing::Point(-11, -6);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(957, 78);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Crimson;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(28, 25);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 22);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Create new roadmap";
			// 
			// RoadmapTextBox
			// 
			this->RoadmapTextBox->BackColor = System::Drawing::Color::White;
			this->RoadmapTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->RoadmapTextBox->Location = System::Drawing::Point(94, 157);
			this->RoadmapTextBox->Margin = System::Windows::Forms::Padding(4);
			this->RoadmapTextBox->Name = L"RoadmapTextBox";
			this->RoadmapTextBox->Size = System::Drawing::Size(259, 20);
			this->RoadmapTextBox->TabIndex = 6;
			// 
			// labelSections
			// 
			this->labelSections->AutoSize = true;
			this->labelSections->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->labelSections->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->labelSections->ForeColor = System::Drawing::Color::Black;
			this->labelSections->Location = System::Drawing::Point(91, 250);
			this->labelSections->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSections->Name = L"labelSections";
			this->labelSections->Size = System::Drawing::Size(47, 16);
			this->labelSections->TabIndex = 7;
			this->labelSections->Text = L"Topics";
			// 
			// labelCheckpoints
			// 
			this->labelCheckpoints->AutoSize = true;
			this->labelCheckpoints->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->labelCheckpoints->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->labelCheckpoints->ForeColor = System::Drawing::Color::Black;
			this->labelCheckpoints->Location = System::Drawing::Point(368, 252);
			this->labelCheckpoints->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCheckpoints->Name = L"labelCheckpoints";
			this->labelCheckpoints->Size = System::Drawing::Size(227, 16);
			this->labelCheckpoints->TabIndex = 8;
			this->labelCheckpoints->Text = L"Subtopics (Separate with commas)";
			// 
			// TopicTextBox
			// 
			this->TopicTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TopicTextBox->Enabled = false;
			this->TopicTextBox->Location = System::Drawing::Point(94, 274);
			this->TopicTextBox->Margin = System::Windows::Forms::Padding(4);
			this->TopicTextBox->Name = L"TopicTextBox";
			this->TopicTextBox->Size = System::Drawing::Size(259, 20);
			this->TopicTextBox->TabIndex = 11;
			this->TopicTextBox->Text = L"#Enter topicname";
			// 
			// SubtopicTextBox
			// 
			this->SubtopicTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SubtopicTextBox->Enabled = false;
			this->SubtopicTextBox->Location = System::Drawing::Point(372, 274);
			this->SubtopicTextBox->Margin = System::Windows::Forms::Padding(4);
			this->SubtopicTextBox->Multiline = true;
			this->SubtopicTextBox->Name = L"SubtopicTextBox";
			this->SubtopicTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->SubtopicTextBox->Size = System::Drawing::Size(480, 63);
			this->SubtopicTextBox->TabIndex = 12;
			this->SubtopicTextBox->Text = L"#Enter subtopics names. Use \",\" (commas) to separate suptopics.";
			// 
			// AddNewRowButton
			// 
			this->AddNewRowButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(96)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->AddNewRowButton->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->AddNewRowButton->ForeColor = System::Drawing::Color::White;
			this->AddNewRowButton->Location = System::Drawing::Point(98, 492);
			this->AddNewRowButton->Margin = System::Windows::Forms::Padding(4);
			this->AddNewRowButton->Name = L"AddNewRowButton";
			this->AddNewRowButton->Size = System::Drawing::Size(567, 43);
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
			this->SaveButton->Location = System::Drawing::Point(800, 561);
			this->SaveButton->Margin = System::Windows::Forms::Padding(4);
			this->SaveButton->Name = L"SaveButton";
			this->SaveButton->Size = System::Drawing::Size(133, 49);
			this->SaveButton->TabIndex = 14;
			this->SaveButton->Text = L"SAVE";
			this->SaveButton->UseVisualStyleBackColor = false;
			this->SaveButton->Click += gcnew System::EventHandler(this, &creationwindow::SaveButton_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(32, 25);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(161, 50);
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Location = System::Drawing::Point(-11, -6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1000, 115);
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// labelAuthor
			// 
			this->labelAuthor->AutoSize = true;
			this->labelAuthor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->labelAuthor->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->labelAuthor->ForeColor = System::Drawing::Color::Black;
			this->labelAuthor->Location = System::Drawing::Point(91, 193);
			this->labelAuthor->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelAuthor->Name = L"labelAuthor";
			this->labelAuthor->Size = System::Drawing::Size(98, 16);
			this->labelAuthor->TabIndex = 17;
			this->labelAuthor->Text = L"Author\'s name";
			// 
			// AuthorTextBox
			// 
			this->AuthorTextBox->BackColor = System::Drawing::Color::White;
			this->AuthorTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AuthorTextBox->Location = System::Drawing::Point(94, 215);
			this->AuthorTextBox->Margin = System::Windows::Forms::Padding(4);
			this->AuthorTextBox->Name = L"AuthorTextBox";
			this->AuthorTextBox->Size = System::Drawing::Size(259, 20);
			this->AuthorTextBox->TabIndex = 18;
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F));
			this->dateTimePicker->Location = System::Drawing::Point(374, 215);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(259, 22);
			this->dateTimePicker->TabIndex = 19;
			// 
			// labelDeadline
			// 
			this->labelDeadline->AutoSize = true;
			this->labelDeadline->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->labelDeadline->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->labelDeadline->ForeColor = System::Drawing::Color::Black;
			this->labelDeadline->Location = System::Drawing::Point(371, 194);
			this->labelDeadline->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDeadline->Name = L"labelDeadline";
			this->labelDeadline->Size = System::Drawing::Size(141, 16);
			this->labelDeadline->TabIndex = 20;
			this->labelDeadline->Text = L"Deadline of roadmap";
			// 
			// DeleteLastRowButton
			// 
			this->DeleteLastRowButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->DeleteLastRowButton->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->DeleteLastRowButton->ForeColor = System::Drawing::Color::White;
			this->DeleteLastRowButton->Location = System::Drawing::Point(704, 492);
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
			this->scrollPanel->Location = System::Drawing::Point(94, 344);
			this->scrollPanel->Name = L"scrollPanel";
			this->scrollPanel->Size = System::Drawing::Size(865, 141);
			this->scrollPanel->TabIndex = 22;
			// 
			// DescriptionTextBox
			// 
			this->DescriptionTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DescriptionTextBox->Enabled = false;
			this->DescriptionTextBox->Location = System::Drawing::Point(94, 302);
			this->DescriptionTextBox->Margin = System::Windows::Forms::Padding(4);
			this->DescriptionTextBox->Multiline = true;
			this->DescriptionTextBox->Name = L"DescriptionTextBox";
			this->DescriptionTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->DescriptionTextBox->Size = System::Drawing::Size(259, 35);
			this->DescriptionTextBox->TabIndex = 23;
			this->DescriptionTextBox->Text = L"#Enter description for topic";
			// 
			// creationwindow
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->ClientSize = System::Drawing::Size(962, 635);
			this->Controls->Add(this->DescriptionTextBox);
			this->Controls->Add(this->scrollPanel);
			this->Controls->Add(this->DeleteLastRowButton);
			this->Controls->Add(this->labelDeadline);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->AuthorTextBox);
			this->Controls->Add(this->labelAuthor);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->SaveButton);
			this->Controls->Add(this->AddNewRowButton);
			this->Controls->Add(this->SubtopicTextBox);
			this->Controls->Add(this->TopicTextBox);
			this->Controls->Add(this->labelCheckpoints);
			this->Controls->Add(this->labelSections);
			this->Controls->Add(this->RoadmapTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->labelRoadmapName);
			this->Controls->Add(this->main_title);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"creationwindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RoadMap - Create new roadmap";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private:
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

			if (TopicCount >= 16) {
				MessageBox::Show("Maximum 15 Topics allowed.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			TextBox^ newTopicTextBox = gcnew TextBox();
			TextBox^ newSubtopicTextBox = gcnew TextBox();
			TextBox^ newDescriptionTextBox = gcnew TextBox();

			int verticalSpacing = 50;

			int newY;

			if (TopicCount == 0) {
				newY = TopicTextBox->Location.Y + TopicTextBox->Height + verticalSpacing;
				newTopicTextBox->Location = System::Drawing::Point(TopicTextBox->Location.X - scrollPanel->Location.X, newY - scrollPanel->Location.Y);
				newTopicTextBox->Size = TopicTextBox->Size;

				newSubtopicTextBox->Location = System::Drawing::Point(SubtopicTextBox->Location.X - scrollPanel->Location.X, newY - scrollPanel->Location.Y);
				newSubtopicTextBox->Size = SubtopicTextBox->Size;

				newDescriptionTextBox->Location = System::Drawing::Point(DescriptionTextBox->Location.X - scrollPanel->Location.X, newY + 27 - scrollPanel->Location.Y);
				newDescriptionTextBox->Size = DescriptionTextBox->Size;
			}
			else {
				TextBox^ lastTopicTextBox = (TextBox^)textBoxes[textBoxes->Count - 3];
				newY = lastTopicTextBox->Location.Y + lastTopicTextBox->Height + verticalSpacing;

				newTopicTextBox->Location = System::Drawing::Point(lastTopicTextBox->Location.X, newY);
				newTopicTextBox->Size = lastTopicTextBox->Size;

				TextBox^ lastSubtopicTextBox = (TextBox^)textBoxes[textBoxes->Count - 2];
				newSubtopicTextBox->Location = System::Drawing::Point(lastSubtopicTextBox->Location.X, newY);
				newSubtopicTextBox->Size = lastSubtopicTextBox->Size;

				TextBox^ lastDescriptionTextBox = (TextBox^)textBoxes[textBoxes->Count - 1];
				newDescriptionTextBox->Location = System::Drawing::Point(lastDescriptionTextBox->Location.X, newY + 27);
				newDescriptionTextBox->Size = lastDescriptionTextBox->Size;
			}

			newTopicTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			newSubtopicTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			newDescriptionTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;

			newTopicTextBox->Name = "TopicTextBox_" + TopicCount.ToString();
			newSubtopicTextBox->Name = "SubtopicTextBox_" + TopicCount.ToString();
			newDescriptionTextBox->Name = "DescriptionTextBox_" + TopicCount.ToString();

			newSubtopicTextBox->Multiline = true;
			newSubtopicTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;

			newDescriptionTextBox->Multiline = true;
			newDescriptionTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;

			this->scrollPanel->Controls->Add(newTopicTextBox);
			this->scrollPanel->Controls->Add(newSubtopicTextBox);
			this->scrollPanel->Controls->Add(newDescriptionTextBox);

			textBoxes->Add(newTopicTextBox);
			textBoxes->Add(newSubtopicTextBox);
			textBoxes->Add(newDescriptionTextBox);

			TopicCount++;
		}

	private:
		System::Void SaveButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (RoadmapTextBox->Text->Length > 30 || RoadmapTextBox->Text->Length == 0) {
				MessageBox::Show("Roadmap name can be up to 30 characters long and cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (AuthorTextBox->Text->Length > 25 || AuthorTextBox->Text->Length == 0) {
				MessageBox::Show("Author name can be up to 25 characters long and cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (TopicTextBox->Text->Length > 20 || TopicTextBox->Text->Length == 0) {
				MessageBox::Show("Topic name can be up to 20 characters long and cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			System::Xml::XmlDocument^ xmlDoc = gcnew System::Xml::XmlDocument();
			System::Xml::XmlElement^ rootNode = xmlDoc->CreateElement("RoadMap");

			System::Xml::XmlElement^ infoNode = xmlDoc->CreateElement("MAPINFO");
			infoNode->SetAttribute("Title", RoadmapTextBox->Text);
			infoNode->SetAttribute("Author", AuthorTextBox->Text);
			rootNode->AppendChild(infoNode);

			for (int i = 0; i < textBoxes->Count; i += 3) {
				String^ TopicText = textBoxes[i]->Text;
				String^ DescriptionText = textBoxes[i + 2]->Text;
				String^ SubtopicTextDynamic = textBoxes[i + 1]->Text;

				if (TopicText->Length > 20) {
					MessageBox::Show("Topic name can be up to 20 characters long.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
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
				saveFileDialog1->Filter = "XML files (*.xml)|*.xml|All files (*.*)|*.*";
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
					TextBox^ lastDescriptionTextBox = safe_cast<TextBox^>(textBoxes[textBoxes->Count - 1]);
					TextBox^ lastSubtopicTextBox = safe_cast<TextBox^>(textBoxes[textBoxes->Count - 2]);
					TextBox^ lastTopicTextBox = safe_cast<TextBox^>(textBoxes[textBoxes->Count - 3]);

					this->scrollPanel->Controls->Remove(lastDescriptionTextBox);
					this->scrollPanel->Controls->Remove(lastSubtopicTextBox);
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
				MessageBox::Show("At least two rows must remain.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	};
}