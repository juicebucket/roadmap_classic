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
		int sectionCount = 0;
		System::Windows::Forms::Label^ main_title;
		System::Windows::Forms::Label^ labelRoadmapName;
		System::Windows::Forms::PictureBox^ pictureBox1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::TextBox^ textBoxRoadmapName;
		System::Windows::Forms::Label^ labelSections;
		System::Windows::Forms::Label^ labelCheckpoints;
		System::Windows::Forms::TextBox^ textBoxSection;
		System::Windows::Forms::TextBox^ textBoxCheckpoints;
		System::Windows::Forms::Button^ AddNewSectionButton;
		System::Windows::Forms::Button^ SaveButton;
		System::Windows::Forms::PictureBox^ pictureBox3;
		System::Windows::Forms::PictureBox^ pictureBox2;
		System::Windows::Forms::Label^ labelAuthor;
		System::Windows::Forms::TextBox^ textBoxAuthor;
		System::Windows::Forms::DateTimePicker^ dateTimePicker;
		System::Windows::Forms::Label^ labelDeadline;


	private: System::Windows::Forms::Button^ DeleteLastRowButton;


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
			this->textBoxRoadmapName = (gcnew System::Windows::Forms::TextBox());
			this->labelSections = (gcnew System::Windows::Forms::Label());
			this->labelCheckpoints = (gcnew System::Windows::Forms::Label());
			this->textBoxSection = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCheckpoints = (gcnew System::Windows::Forms::TextBox());
			this->AddNewSectionButton = (gcnew System::Windows::Forms::Button());
			this->SaveButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->labelAuthor = (gcnew System::Windows::Forms::Label());
			this->textBoxAuthor = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelDeadline = (gcnew System::Windows::Forms::Label());
			this->DeleteLastRowButton = (gcnew System::Windows::Forms::Button());
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
			// textBoxRoadmapName
			// 
			this->textBoxRoadmapName->BackColor = System::Drawing::Color::White;
			this->textBoxRoadmapName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxRoadmapName->Location = System::Drawing::Point(94, 157);
			this->textBoxRoadmapName->Margin = System::Windows::Forms::Padding(4);
			this->textBoxRoadmapName->Name = L"textBoxRoadmapName";
			this->textBoxRoadmapName->Size = System::Drawing::Size(259, 20);
			this->textBoxRoadmapName->TabIndex = 6;
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
			// textBoxSection
			// 
			this->textBoxSection->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxSection->Location = System::Drawing::Point(94, 274);
			this->textBoxSection->Margin = System::Windows::Forms::Padding(4);
			this->textBoxSection->Name = L"textBoxSection";
			this->textBoxSection->Size = System::Drawing::Size(259, 20);
			this->textBoxSection->TabIndex = 11;
			// 
			// textBoxCheckpoints
			// 
			this->textBoxCheckpoints->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxCheckpoints->Location = System::Drawing::Point(372, 274);
			this->textBoxCheckpoints->Margin = System::Windows::Forms::Padding(4);
			this->textBoxCheckpoints->Multiline = true;
			this->textBoxCheckpoints->Name = L"textBoxCheckpoints";
			this->textBoxCheckpoints->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxCheckpoints->Size = System::Drawing::Size(480, 40);
			this->textBoxCheckpoints->TabIndex = 12;
			// 
			// AddNewSectionButton
			// 
			this->AddNewSectionButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->AddNewSectionButton->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->AddNewSectionButton->ForeColor = System::Drawing::Color::White;
			this->AddNewSectionButton->Location = System::Drawing::Point(94, 325);
			this->AddNewSectionButton->Margin = System::Windows::Forms::Padding(4);
			this->AddNewSectionButton->Name = L"AddNewSectionButton";
			this->AddNewSectionButton->Size = System::Drawing::Size(567, 43);
			this->AddNewSectionButton->TabIndex = 13;
			this->AddNewSectionButton->Text = L"ADD NEW ROW";
			this->AddNewSectionButton->UseVisualStyleBackColor = false;
			this->AddNewSectionButton->Click += gcnew System::EventHandler(this, &creationwindow::button1_Click);
			// 
			// SaveButton
			// 
			this->SaveButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(96)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->SaveButton->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->SaveButton->ForeColor = System::Drawing::Color::White;
			this->SaveButton->Location = System::Drawing::Point(801, 398);
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
			// textBoxAuthor
			// 
			this->textBoxAuthor->BackColor = System::Drawing::Color::White;
			this->textBoxAuthor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxAuthor->Location = System::Drawing::Point(94, 215);
			this->textBoxAuthor->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAuthor->Name = L"textBoxAuthor";
			this->textBoxAuthor->Size = System::Drawing::Size(259, 20);
			this->textBoxAuthor->TabIndex = 18;
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
			this->DeleteLastRowButton->Location = System::Drawing::Point(700, 325);
			this->DeleteLastRowButton->Margin = System::Windows::Forms::Padding(4);
			this->DeleteLastRowButton->Name = L"DeleteLastRowButton";
			this->DeleteLastRowButton->Size = System::Drawing::Size(157, 43);
			this->DeleteLastRowButton->TabIndex = 21;
			this->DeleteLastRowButton->Text = L"DELETE LAST ROW";
			this->DeleteLastRowButton->UseVisualStyleBackColor = false;
			this->DeleteLastRowButton->Click += gcnew System::EventHandler(this, &creationwindow::DeleteLastRowButton_Click_1);
			// 
			// creationwindow
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->ClientSize = System::Drawing::Size(984, 481);
			this->Controls->Add(this->DeleteLastRowButton);
			this->Controls->Add(this->labelDeadline);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->textBoxAuthor);
			this->Controls->Add(this->labelAuthor);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->SaveButton);
			this->Controls->Add(this->AddNewSectionButton);
			this->Controls->Add(this->textBoxCheckpoints);
			this->Controls->Add(this->textBoxSection);
			this->Controls->Add(this->labelCheckpoints);
			this->Controls->Add(this->labelSections);
			this->Controls->Add(this->textBoxRoadmapName);
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

			if (sectionCount >= 9) {
				MessageBox::Show("Maximum 10 sections allowed.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			TextBox^ newTextBox1 = gcnew TextBox();
			TextBox^ newTextBox2 = gcnew TextBox();

			int newY = 50 * (textBoxes->Count / 2 + 1);

			newTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			newTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;

			newTextBox1->Name = "SectionTextBox_" + sectionCount.ToString();
			newTextBox2->Name = "CheckpointsTextBox_" + sectionCount.ToString();

			newTextBox1->Location = System::Drawing::Point(textBoxSection->Location.X, textBoxSection->Location.Y + newY);
			newTextBox1->Size = textBoxSection->Size;

			newTextBox2->Location = System::Drawing::Point(newTextBox1->Location.X + newTextBox1->Width + 20, newTextBox1->Location.Y);
			newTextBox2->Size = System::Drawing::Size(480, 40);
			newTextBox2->Multiline = true;
			newTextBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;

			int newButtonY = newTextBox1->Location.Y + newTextBox1->Height + 30;

			int addNewSectionButtonY = newButtonY;
			AddNewSectionButton->Location = System::Drawing::Point(AddNewSectionButton->Location.X, addNewSectionButtonY);

			int SaveButtonY = newButtonY + 75;
			SaveButton->Location = System::Drawing::Point(SaveButton->Location.X, SaveButtonY);

			int DeleteLastRowButtonY = newButtonY;
			DeleteLastRowButton->Location = System::Drawing::Point(DeleteLastRowButton->Location.X, DeleteLastRowButtonY);

			this->Controls->Add(newTextBox1);
			this->Controls->Add(newTextBox2);

			textBoxes->Add(newTextBox1);
			textBoxes->Add(newTextBox2);

			this->ClientSize = System::Drawing::Size(this->ClientSize.Width, this->ClientSize.Height + 50);

			sectionCount++;
		}


	private:
		System::Void SaveButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (textBoxRoadmapName->Text->Length > 30 || textBoxRoadmapName->Text->Length == 0) {
				MessageBox::Show("Roadmap name can be up to 30 characters long and cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (textBoxAuthor->Text->Length > 25 || textBoxAuthor->Text->Length == 0) {
				MessageBox::Show("Author name can be up to 25 characters long and cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (textBoxSection->Text->Length > 20 || textBoxSection->Text->Length == 0) {
				MessageBox::Show("Section name can be up to 20 characters long and cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			System::Xml::XmlDocument^ xmlDoc = gcnew System::Xml::XmlDocument();
			System::Xml::XmlElement^ rootNode = xmlDoc->CreateElement("RoadMap");

			System::Xml::XmlElement^ infoNode = xmlDoc->CreateElement("MAPINFO");
			infoNode->SetAttribute("Title", textBoxRoadmapName->Text);
			infoNode->SetAttribute("Author", textBoxAuthor->Text);
			rootNode->AppendChild(infoNode);

			System::Xml::XmlElement^ rowNode = xmlDoc->CreateElement("ROW");
			rowNode->SetAttribute("Section", textBoxSection->Text);

			String^ checkpointsText = textBoxCheckpoints->Text;
			int commaIndex = checkpointsText->IndexOf(",");

			rowNode->SetAttribute("Checkpoints", checkpointsText);
			rootNode->AppendChild(rowNode);

			for (int i = 0; i < textBoxes->Count; i += 2) {
				String^ sectionText = textBoxes[i]->Text;
				String^ checkpointsTextDynamic = textBoxes[i + 1]->Text;

				if (sectionText->Length > 20) {
					MessageBox::Show("Section name can be up to 20 characters long.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				System::Xml::XmlElement^ rowsNode = xmlDoc->CreateElement("ROWS");
				rowsNode->SetAttribute("Section", sectionText);
				rowsNode->SetAttribute("Checkpoints", checkpointsTextDynamic);
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
					TextBox^ lastTextBox2 = safe_cast<TextBox^>(textBoxes[textBoxes->Count - 1]);
					TextBox^ lastTextBox1 = safe_cast<TextBox^>(textBoxes[textBoxes->Count - 2]);

					this->Controls->Remove(lastTextBox2);
					this->Controls->Remove(lastTextBox1);

					textBoxes->RemoveAt(textBoxes->Count - 1);
					textBoxes->RemoveAt(textBoxes->Count - 1);

					this->ClientSize = System::Drawing::Size(this->ClientSize.Width, this->ClientSize.Height - 40);

					int newButtonY = lastTextBox1->Location.Y;
					AddNewSectionButton->Location = System::Drawing::Point(AddNewSectionButton->Location.X, newButtonY);
					SaveButton->Location = System::Drawing::Point(SaveButton->Location.X, newButtonY + 75);
					DeleteLastRowButton->Location = System::Drawing::Point(DeleteLastRowButton->Location.X, newButtonY);

					sectionCount--;
				}
			}
			else {
				MessageBox::Show("At least two rows must remain.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	};
}