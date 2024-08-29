#pragma once

#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <string>

namespace RoadMap {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Xml;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class mapwindow : public System::Windows::Forms::Form {

    public:
        mapwindow(void) {
            InitializeComponent();
            SetDragHandlers(panel1);
            SetDragHandlers(panel2);
        }

    protected:
        ~mapwindow() {
            if (components) {
                delete components;
            }
        }

    private:
        Label^ progressLabel;

        System::Windows::Forms::OpenFileDialog^ openFileDialog1;
        System::Windows::Forms::Label^ topicsLabel;
        System::Windows::Forms::Label^ subtopicsLabel;
        System::Windows::Forms::Label^ roadmapNameLabel;
        System::Windows::Forms::Label^ authorLabel;
        System::Windows::Forms::Label^ deadlineLabel;
        System::Windows::Forms::Label^ labelProgress;
        System::Windows::Forms::TextBox^ authorTextBox;
        System::Windows::Forms::Panel^ RowsPanel;
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Panel^ panel2;
        System::Windows::Forms::TextBox^ deadlineTextBox;
        System::Windows::Forms::PictureBox^ logoPicture;
        System::Windows::Forms::Button^ uploadButton;
        System::Windows::Forms::Button^ saveButton;
        System::Windows::Forms::Button^ closeButton;
        System::ComponentModel::Container^ components;
        System::Drawing::Point lastPoint;

        bool dragging = false;

#pragma region Windows Form Designer generated code

           void InitializeComponent(void) {
               System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mapwindow::typeid));
               this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
               this->topicsLabel = (gcnew System::Windows::Forms::Label());
               this->subtopicsLabel = (gcnew System::Windows::Forms::Label());
               this->roadmapNameLabel = (gcnew System::Windows::Forms::Label());
               this->authorLabel = (gcnew System::Windows::Forms::Label());
               this->deadlineLabel = (gcnew System::Windows::Forms::Label());
               this->labelProgress = (gcnew System::Windows::Forms::Label());
               this->authorTextBox = (gcnew System::Windows::Forms::TextBox());
               this->RowsPanel = (gcnew System::Windows::Forms::Panel());
               this->panel1 = (gcnew System::Windows::Forms::Panel());
               this->closeButton = (gcnew System::Windows::Forms::Button());
               this->uploadButton = (gcnew System::Windows::Forms::Button());
               this->saveButton = (gcnew System::Windows::Forms::Button());
               this->panel2 = (gcnew System::Windows::Forms::Panel());
               this->deadlineTextBox = (gcnew System::Windows::Forms::TextBox());
               this->logoPicture = (gcnew System::Windows::Forms::PictureBox());
               this->panel1->SuspendLayout();
               this->panel2->SuspendLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoPicture))->BeginInit();
               this->SuspendLayout();
               // 
               // topicsLabel
               // 
               this->topicsLabel->AutoSize = true;
               this->topicsLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
                   static_cast<System::Int32>(static_cast<System::Byte>(45)));
               this->topicsLabel->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold));
               this->topicsLabel->ForeColor = System::Drawing::Color::White;
               this->topicsLabel->Location = System::Drawing::Point(30, 168);
               this->topicsLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->topicsLabel->Name = L"topicsLabel";
               this->topicsLabel->Size = System::Drawing::Size(173, 15);
               this->topicsLabel->TabIndex = 10;
               this->topicsLabel->Text = L"TOPICS AND DESCRIPTION";
               // 
               // subtopicsLabel
               // 
               this->subtopicsLabel->AutoSize = true;
               this->subtopicsLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
                   static_cast<System::Int32>(static_cast<System::Byte>(45)));
               this->subtopicsLabel->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold));
               this->subtopicsLabel->ForeColor = System::Drawing::Color::White;
               this->subtopicsLabel->Location = System::Drawing::Point(300, 168);
               this->subtopicsLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->subtopicsLabel->Name = L"subtopicsLabel";
               this->subtopicsLabel->Size = System::Drawing::Size(79, 15);
               this->subtopicsLabel->TabIndex = 11;
               this->subtopicsLabel->Text = L"SUBTOPICS";
               // 
               // roadmapNameLabel
               // 
               this->roadmapNameLabel->AutoSize = true;
               this->roadmapNameLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(96)),
                   static_cast<System::Int32>(static_cast<System::Byte>(255)));
               this->roadmapNameLabel->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->roadmapNameLabel->ForeColor = System::Drawing::Color::White;
               this->roadmapNameLabel->Location = System::Drawing::Point(230, 26);
               this->roadmapNameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->roadmapNameLabel->Name = L"roadmapNameLabel";
               this->roadmapNameLabel->Size = System::Drawing::Size(52, 30);
               this->roadmapNameLabel->TabIndex = 12;
               this->roadmapNameLabel->Text = L"\?\?\?";
               // 
               // authorLabel
               // 
               this->authorLabel->AutoSize = true;
               this->authorLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
                   static_cast<System::Int32>(static_cast<System::Byte>(45)));
               this->authorLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
               this->authorLabel->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold));
               this->authorLabel->ForeColor = System::Drawing::Color::White;
               this->authorLabel->Location = System::Drawing::Point(30, 115);
               this->authorLabel->Name = L"authorLabel";
               this->authorLabel->Size = System::Drawing::Size(60, 15);
               this->authorLabel->TabIndex = 21;
               this->authorLabel->Text = L"AUTHOR";
               // 
               // deadlineLabel
               // 
               this->deadlineLabel->AutoSize = true;
               this->deadlineLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
                   static_cast<System::Int32>(static_cast<System::Byte>(45)));
               this->deadlineLabel->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold));
               this->deadlineLabel->ForeColor = System::Drawing::Color::White;
               this->deadlineLabel->Location = System::Drawing::Point(300, 115);
               this->deadlineLabel->Name = L"deadlineLabel";
               this->deadlineLabel->Size = System::Drawing::Size(70, 15);
               this->deadlineLabel->TabIndex = 22;
               this->deadlineLabel->Text = L"DEADLINE";
               // 
               // labelProgress
               // 
               this->labelProgress->AutoSize = true;
               this->labelProgress->BackColor = System::Drawing::Color::White;
               this->labelProgress->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold));
               this->labelProgress->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
                   static_cast<System::Int32>(static_cast<System::Byte>(45)));
               this->labelProgress->Location = System::Drawing::Point(230, 56);
               this->labelProgress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelProgress->Name = L"labelProgress";
               this->labelProgress->Size = System::Drawing::Size(141, 15);
               this->labelProgress->TabIndex = 24;
               this->labelProgress->Text = L"Progress: 0 / 0 (0,00%)";
               // 
               // authorTextBox
               // 
               this->authorTextBox->BackColor = System::Drawing::Color::White;
               this->authorTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->authorTextBox->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold));
               this->authorTextBox->Location = System::Drawing::Point(30, 134);
               this->authorTextBox->Name = L"authorTextBox";
               this->authorTextBox->ReadOnly = true;
               this->authorTextBox->Size = System::Drawing::Size(200, 20);
               this->authorTextBox->TabIndex = 25;
               // 
               // RowsPanel
               // 
               this->RowsPanel->BackColor = System::Drawing::Color::White;
               this->RowsPanel->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold));
               this->RowsPanel->Location = System::Drawing::Point(30, 196);
               this->RowsPanel->Margin = System::Windows::Forms::Padding(4);
               this->RowsPanel->Name = L"RowsPanel";
               this->RowsPanel->Size = System::Drawing::Size(699, 574);
               this->RowsPanel->TabIndex = 8;
               // 
               // panel1
               // 
               this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
                   static_cast<System::Int32>(static_cast<System::Byte>(26)));
               this->panel1->Controls->Add(this->closeButton);
               this->panel1->Controls->Add(this->uploadButton);
               this->panel1->Controls->Add(this->saveButton);
               this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
               this->panel1->Location = System::Drawing::Point(737, 0);
               this->panel1->Name = L"panel1";
               this->panel1->Size = System::Drawing::Size(208, 800);
               this->panel1->TabIndex = 27;
               // 
               // closeButton
               // 
               this->closeButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
                   static_cast<System::Int32>(static_cast<System::Byte>(30)));
               this->closeButton->Cursor = System::Windows::Forms::Cursors::Hand;
               this->closeButton->FlatAppearance->BorderColor = System::Drawing::Color::Red;
               this->closeButton->FlatAppearance->BorderSize = 0;
               this->closeButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkRed;
               this->closeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
               this->closeButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
                   static_cast<System::Int32>(static_cast<System::Byte>(26)));
               this->closeButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closeButton.Image")));
               this->closeButton->Location = System::Drawing::Point(157, 12);
               this->closeButton->Name = L"closeButton";
               this->closeButton->Size = System::Drawing::Size(39, 39);
               this->closeButton->TabIndex = 4;
               this->closeButton->UseVisualStyleBackColor = false;
               this->closeButton->Click += gcnew System::EventHandler(this, &mapwindow::closeButton_Click);
               // 
               // uploadButton
               // 
               this->uploadButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
                   static_cast<System::Int32>(static_cast<System::Byte>(45)));
               this->uploadButton->Cursor = System::Windows::Forms::Cursors::Hand;
               this->uploadButton->FlatAppearance->BorderSize = 0;
               this->uploadButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)),
                   static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
               this->uploadButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
               this->uploadButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
               this->uploadButton->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold));
               this->uploadButton->ForeColor = System::Drawing::Color::White;
               this->uploadButton->Location = System::Drawing::Point(24, 662);
               this->uploadButton->Margin = System::Windows::Forms::Padding(4);
               this->uploadButton->Name = L"uploadButton";
               this->uploadButton->Size = System::Drawing::Size(160, 43);
               this->uploadButton->TabIndex = 16;
               this->uploadButton->Text = L"UPLOAD";
               this->uploadButton->UseVisualStyleBackColor = false;
               this->uploadButton->Click += gcnew System::EventHandler(this, &mapwindow::uploadButton_Click);
               // 
               // saveButton
               // 
               this->saveButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
                   static_cast<System::Int32>(static_cast<System::Byte>(45)));
               this->saveButton->Cursor = System::Windows::Forms::Cursors::Hand;
               this->saveButton->FlatAppearance->BorderSize = 0;
               this->saveButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)),
                   static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
               this->saveButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
               this->saveButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
               this->saveButton->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold));
               this->saveButton->ForeColor = System::Drawing::Color::White;
               this->saveButton->Location = System::Drawing::Point(24, 722);
               this->saveButton->Margin = System::Windows::Forms::Padding(4);
               this->saveButton->Name = L"saveButton";
               this->saveButton->Size = System::Drawing::Size(160, 43);
               this->saveButton->TabIndex = 15;
               this->saveButton->Text = L"SAVE CHANGES";
               this->saveButton->UseVisualStyleBackColor = false;
               this->saveButton->Click += gcnew System::EventHandler(this, &mapwindow::saveButton_Click);
               // 
               // panel2
               // 
               this->panel2->BackColor = System::Drawing::Color::White;
               this->panel2->Controls->Add(this->deadlineTextBox);
               this->panel2->Controls->Add(this->logoPicture);
               this->panel2->Controls->Add(this->deadlineLabel);
               this->panel2->Controls->Add(this->roadmapNameLabel);
               this->panel2->Controls->Add(this->labelProgress);
               this->panel2->Controls->Add(this->subtopicsLabel);
               this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
               this->panel2->Location = System::Drawing::Point(0, 0);
               this->panel2->Name = L"panel2";
               this->panel2->Size = System::Drawing::Size(741, 800);
               this->panel2->TabIndex = 28;
               // 
               // deadlineTextBox
               // 
               this->deadlineTextBox->BackColor = System::Drawing::Color::White;
               this->deadlineTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->deadlineTextBox->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold));
               this->deadlineTextBox->Location = System::Drawing::Point(300, 134);
               this->deadlineTextBox->Name = L"deadlineTextBox";
               this->deadlineTextBox->ReadOnly = true;
               this->deadlineTextBox->Size = System::Drawing::Size(120, 20);
               this->deadlineTextBox->TabIndex = 26;
               // 
               // logoPicture
               // 
               this->logoPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoPicture.Image")));
               this->logoPicture->ImeMode = System::Windows::Forms::ImeMode::NoControl;
               this->logoPicture->Location = System::Drawing::Point(35, 26);
               this->logoPicture->Name = L"logoPicture";
               this->logoPicture->Size = System::Drawing::Size(143, 42);
               this->logoPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->logoPicture->TabIndex = 1;
               this->logoPicture->TabStop = false;
               // 
               // mapwindow
               // 
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
               this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                   static_cast<System::Int32>(static_cast<System::Byte>(249)));
               this->ClientSize = System::Drawing::Size(945, 800);
               this->Controls->Add(this->authorTextBox);
               this->Controls->Add(this->authorLabel);
               this->Controls->Add(this->topicsLabel);
               this->Controls->Add(this->RowsPanel);
               this->Controls->Add(this->panel1);
               this->Controls->Add(this->panel2);
               this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
               this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
               this->Location = System::Drawing::Point(160, 12);
               this->Margin = System::Windows::Forms::Padding(4);
               this->MaximizeBox = false;
               this->MinimizeBox = false;
               this->Name = L"mapwindow";
               this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
               this->Text = L"RoadMap - Progress Map";
               this->panel1->ResumeLayout(false);
               this->panel2->ResumeLayout(false);
               this->panel2->PerformLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoPicture))->EndInit();
               this->ResumeLayout(false);
               this->PerformLayout();

           }

#pragma endregion
    private:
        void SetDragHandlers(System::Windows::Forms::Panel^ panel) {
            panel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &mapwindow::Form_MouseDown);
            panel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &mapwindow::Form_MouseMove);
            panel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &mapwindow::Form_MouseUp);
        }

        void Form_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
            if (e->Button == System::Windows::Forms::MouseButtons::Left) {
                dragging = true;
                lastPoint = e->Location;
            }
        }

        void Form_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
            if (dragging) {
                this->Location = System::Drawing::Point(this->Location.X + (e->Location.X - lastPoint.X), this->Location.Y + (e->Location.Y - lastPoint.Y));
            }
        }

        void Form_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
            dragging = false;
        }

    private:
        System::Void uploadButton_Click(System::Object^ sender, System::EventArgs^ e) {
            openFileDialog1->Filter = "XML Files (*.xml)|*.xml";
            openFileDialog1->FilterIndex = 1;
            openFileDialog1->RestoreDirectory = true;

            if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                String^ filePath = openFileDialog1->FileName;
                ReadAndDisplayXML(filePath);
            }
        }

    private:
        System::Void ReadAndDisplayXML(String^ filePath) {
            try {
                System::Xml::XmlDocument^ xmlDoc = gcnew System::Xml::XmlDocument();
                xmlDoc->Load(filePath);

                RowsPanel->Controls->Clear();

                System::Xml::XmlNodeList^ rowsNodes = xmlDoc->GetElementsByTagName("ROWS");
                System::Xml::XmlNodeList^ infoNodes = xmlDoc->GetElementsByTagName("MAPINFO");
                System::Xml::XmlNodeList^ dateNodes = xmlDoc->GetElementsByTagName("DATE");

                if (infoNodes->Count > 0) {
                    if (infoNodes[0]->Attributes["Title"] != nullptr) {
                        roadmapNameLabel->Text = infoNodes[0]->Attributes["Title"]->Value;
                    }
                    else {
                        roadmapNameLabel->Text = "Title not found";
                    }

                    if (infoNodes[0]->Attributes["Author"] != nullptr) {
                        authorTextBox->Text = infoNodes[0]->Attributes["Author"]->Value;
                    }
                    else {
                        authorTextBox->Text = "Author not found";
                    }
                }

                int totalSubtopics = 0;
                int completedSubtopics = 0;

                if (dateNodes->Count > 0) {
                    if (dateNodes[0]->Attributes["Deadline"] != nullptr) {
                        String^ deadlineStr = dateNodes[0]->Attributes["Deadline"]->Value;
                        deadlineTextBox->Text = deadlineStr;

                        DateTime deadline;
                        if (DateTime::TryParse(deadlineStr, deadline)) {
                            DateTime currentDate = DateTime::Now;
                            TimeSpan remainingTime = deadline - currentDate;

                            UpdateProgressLabel();
                            double percentage = completedSubtopics == 0 ? 0 : (double)completedSubtopics / totalSubtopics * 100;
                            String^ progressMessage = "Current progress: " + percentage.ToString("F2") + "% completed.";

                            if (remainingTime.TotalDays > 0) {
                                if (remainingTime.TotalDays <= 30 && remainingTime.TotalDays > 7) {
                                    MessageBox::Show("The deadline is in less than a month!\n\n" + progressMessage, "Deadline Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                                }
                                else if (remainingTime.TotalDays <= 7 && remainingTime.TotalDays > 3) {
                                    MessageBox::Show("The deadline is in less than a week!\n\n" + progressMessage, "Deadline Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                                }
                                else if (remainingTime.TotalDays <= 3 && remainingTime.TotalDays > 1) {
                                    MessageBox::Show("The deadline is in less than 3 days!\n\n" + progressMessage, "Deadline Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                                }
                                else if (remainingTime.TotalDays <= 1) {
                                    MessageBox::Show("The deadline is tomorrow!\n\n" + progressMessage, "Deadline Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                                }
                            }
                            else {
                                if (remainingTime.TotalDays == 0) {
                                    MessageBox::Show("Deadline is today!\n\n" + progressMessage, "Deadline Alert", MessageBoxButtons::OK, MessageBoxIcon::Information);
                                }
                                else {
                                    MessageBox::Show("The deadline has passed!\n\n" + progressMessage, "Deadline Alert", MessageBoxButtons::OK, MessageBoxIcon::Error);
                                }
                            }
                        }
                        else {
                            MessageBox::Show("Invalid deadline format in XML.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        }
                    }
                    else {
                        deadlineTextBox->Text = "Deadline not found";
                    }
                }
                else {
                    MessageBox::Show("Document element not found in XML.");
                }

                int yOffset = 0;

                for (int i = 0; i < rowsNodes->Count; i++) {
                    String^ Topic = rowsNodes[i]->Attributes["Topic"]->Value;
                    String^ Description = rowsNodes[i]->Attributes["Description"]->Value;
                    String^ Subtopic = rowsNodes[i]->Attributes["Subtopic"]->Value;

                    CreateAndDisplaysubtopics(Topic, Description, Subtopic, yOffset, xmlDoc, "ROWS", i);
                    yOffset += 30 * (Subtopic->Split(',')->Length);

                    array<String^>^ subtopicsArray = Subtopic->Split(gcnew array<wchar_t>{','}, StringSplitOptions::RemoveEmptyEntries);
                    totalSubtopics += subtopicsArray->Length;
                    for each (String ^ subtopic in subtopicsArray) {
                        if (subtopic->Contains("[+]")) {
                            completedSubtopics++;
                        }
                    }
                }

                RowsPanel->AutoScroll = true;
                RowsPanel->AutoScrollMinSize = System::Drawing::Size(0, yOffset);

                UpdateProgressLabel();

            }
            catch (System::Exception^ ex) {
                MessageBox::Show("Error reading XML: " + ex->Message);
            }
        }

     private:
         System::Void CreateAndDisplaysubtopics(String^ topic, String^ description, String^ subtopics, int yOffset, XmlDocument^ xmlDoc, String^ nodeType, int nodeIndex) {

             Label^ topicLabel = gcnew Label();
             topicLabel->AutoSize = true;
             topicLabel->Font = (gcnew System::Drawing::Font(L"Arial", 10.25F, System::Drawing::FontStyle::Bold));
             topicLabel->MaximumSize = System::Drawing::Size(250, 0);
             topicLabel->Location = System::Drawing::Point(0, yOffset);
             topicLabel->Text = topic;
             RowsPanel->Controls->Add(topicLabel);

             Label^ descriptionLabel = gcnew Label();
             descriptionLabel->AutoSize = true;
             descriptionLabel->MaximumSize = System::Drawing::Size(250, 0);
             descriptionLabel->Location = System::Drawing::Point(0, yOffset + 15);
             descriptionLabel->Text = description;
             RowsPanel->Controls->Add(descriptionLabel);

             array<String^>^ subtopicsArray = subtopics->Split(gcnew array<wchar_t>{','}, StringSplitOptions::RemoveEmptyEntries);
             for (int i = 0; i < subtopicsArray->Length; i++) {
                 String^ subtopic = subtopicsArray[i]->Trim();

                 Label^ numberLabel = gcnew Label();
                 numberLabel->AutoSize = true;
                 numberLabel->Font = gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold);
                 numberLabel->Location = System::Drawing::Point(270, yOffset + i * 30);
                 numberLabel->Text = (i + 1).ToString() + ".";
                 RowsPanel->Controls->Add(numberLabel);

                 Label^ subtopicLabel = gcnew Label();
                 subtopicLabel->AutoSize = true;
                 subtopicLabel->MaximumSize = System::Drawing::Size(250, 0);
                 subtopicLabel->Location = System::Drawing::Point(290, yOffset + i * 30);
                 subtopicLabel->Text = subtopic;
                 RowsPanel->Controls->Add(subtopicLabel);

                 CheckBox^ checkBox = gcnew CheckBox();
                 checkBox->Location = System::Drawing::Point(550, yOffset + i * 30);
                 checkBox->Tag = nodeType + ":" + nodeIndex + ":" + i;
                 RowsPanel->Controls->Add(checkBox);

                 XmlNodeList^ nodes = xmlDoc->GetElementsByTagName(nodeType);
                 if (nodeIndex < nodes->Count) {
                     XmlNode^ node = nodes[nodeIndex];
                     String^ attributeName = "Subtopic";
                     if (node->Attributes->GetNamedItem(attributeName)) {
                         String^ subtopics = node->Attributes->GetNamedItem(attributeName)->Value;
                         array<String^>^ subtopicsArray = subtopics->Split(',');
                         if (i < subtopicsArray->Length) {
                             String^ currentsubtopic = subtopicsArray[i]->Trim();
                             if (currentsubtopic->Contains("[+]")) {
                                 checkBox->Checked = true;
                             }
                         }
                     }
                 }
             }
         }

    private:
        System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
            XmlDocument^ xmlDoc = gcnew XmlDocument();
            xmlDoc->Load(openFileDialog1->FileName);

            for each (Control ^ control in RowsPanel->Controls) {
                if (CheckBox^ checkBox = dynamic_cast<CheckBox^>(control)) {
                    array<String^>^ tagParts = checkBox->Tag->ToString()->Split(':');
                    String^ nodeType = tagParts[0];
                    int nodeIndex = Convert::ToInt32(tagParts[1]);
                    int subtopicIndex = Convert::ToInt32(tagParts[2]);

                    XmlNodeList^ nodes = xmlDoc->GetElementsByTagName(nodeType);
                    if (nodeIndex < nodes->Count) {
                        XmlNode^ node = nodes[nodeIndex];
                        String^ attributeName = "Subtopic";
                        if (node->Attributes->GetNamedItem(attributeName)) {
                            String^ subtopics = node->Attributes->GetNamedItem(attributeName)->Value;
                            array<String^>^ subtopicsArray = subtopics->Split(',');
                            if (subtopicIndex < subtopicsArray->Length) {
                                if (checkBox->Checked) {
                                    if (!subtopicsArray[subtopicIndex]->Contains("[+]")) {
                                        subtopicsArray[subtopicIndex] = subtopicsArray[subtopicIndex]->TrimEnd() + " [+]";
                                    }
                                }
                                else {
                                    subtopicsArray[subtopicIndex] = subtopicsArray[subtopicIndex]->Replace(" [+]", "");
                                }
                                String^ newsubtopics = String::Join(",", subtopicsArray);
                                node->Attributes->GetNamedItem(attributeName)->Value = newsubtopics;
                            }
                        }
                    }
                }
            }
            xmlDoc->Save(openFileDialog1->FileName);
            MessageBox::Show("Changes saved successfully!");

            UpdateProgressLabel();
        }

    private:
        System::Void UpdateProgressLabel() {
            int totalSubtopics = 0;
            int completedSubtopics = 0;

            for each (Control ^ control in RowsPanel->Controls) {
                if (CheckBox^ checkBox = dynamic_cast<CheckBox^>(control)) {
                    totalSubtopics++;
                    if (checkBox->Checked) {
                        completedSubtopics++;
                    }
                }
            }
            if (totalSubtopics > 0) {
                double percentage = (double)completedSubtopics / totalSubtopics * 100;
                labelProgress->Text = "Progress: " + completedSubtopics + " / " + totalSubtopics + " (" + percentage.ToString("F2") + "%)";
            }
            else {
                labelProgress->Text = "No subtopics available.";
            }
        }

    private:
        System::Void closeButton_Click(System::Object^ sender, System::EventArgs^ e) {
            this->Close();
        }
    };
}