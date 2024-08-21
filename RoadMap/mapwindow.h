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
        System::Windows::Forms::Button^ uploadButton;
        System::Windows::Forms::Button^ saveButton;
        System::Windows::Forms::Label^ topicLabel;
        System::Windows::Forms::Label^ subtopicLabel;
        System::Windows::Forms::PictureBox^ logoPicture;
        System::Windows::Forms::Label^ authorLabel;
        System::Windows::Forms::Label^ deadlineLabel;
        System::Windows::Forms::Label^ labelProgress;
        System::Windows::Forms::TextBox^ authorTextBox;
        System::Windows::Forms::TextBox^ deadlineTextBox;
        System::Windows::Forms::Panel^ RowsPanel;
        System::Windows::Forms::Label^ titleLabel;
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Panel^ panel2;

        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

           void InitializeComponent(void) {
               System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mapwindow::typeid));
               this->uploadButton = (gcnew System::Windows::Forms::Button());
               this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
               this->saveButton = (gcnew System::Windows::Forms::Button());
               this->topicLabel = (gcnew System::Windows::Forms::Label());
               this->subtopicLabel = (gcnew System::Windows::Forms::Label());
               this->logoPicture = (gcnew System::Windows::Forms::PictureBox());
               this->authorLabel = (gcnew System::Windows::Forms::Label());
               this->deadlineLabel = (gcnew System::Windows::Forms::Label());
               this->labelProgress = (gcnew System::Windows::Forms::Label());
               this->authorTextBox = (gcnew System::Windows::Forms::TextBox());
               this->deadlineTextBox = (gcnew System::Windows::Forms::TextBox());
               this->RowsPanel = (gcnew System::Windows::Forms::Panel());
               this->titleLabel = (gcnew System::Windows::Forms::Label());
               this->panel1 = (gcnew System::Windows::Forms::Panel());
               this->panel2 = (gcnew System::Windows::Forms::Panel());
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoPicture))->BeginInit();
               this->panel2->SuspendLayout();
               this->SuspendLayout();
               // 
               // uploadButton
               // 
               this->uploadButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(96)),
                   static_cast<System::Int32>(static_cast<System::Byte>(255)));
               this->uploadButton->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
               this->uploadButton->ForeColor = System::Drawing::Color::White;
               this->uploadButton->Location = System::Drawing::Point(599, 664);
               this->uploadButton->Margin = System::Windows::Forms::Padding(4);
               this->uploadButton->Name = L"uploadButton";
               this->uploadButton->Size = System::Drawing::Size(160, 49);
               this->uploadButton->TabIndex = 7;
               this->uploadButton->Text = L"UPLOAD";
               this->uploadButton->UseVisualStyleBackColor = false;
               this->uploadButton->Click += gcnew System::EventHandler(this, &mapwindow::uploadButton_Click);
               // 
               // saveButton
               // 
               this->saveButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(96)),
                   static_cast<System::Int32>(static_cast<System::Byte>(255)));
               this->saveButton->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
               this->saveButton->ForeColor = System::Drawing::Color::White;
               this->saveButton->Location = System::Drawing::Point(599, 721);
               this->saveButton->Margin = System::Windows::Forms::Padding(4);
               this->saveButton->Name = L"saveButton";
               this->saveButton->Size = System::Drawing::Size(160, 49);
               this->saveButton->TabIndex = 9;
               this->saveButton->Text = L"SAVE CHANGES";
               this->saveButton->UseVisualStyleBackColor = false;
               this->saveButton->Click += gcnew System::EventHandler(this, &mapwindow::saveButton_Click);
               // 
               // topicLabel
               // 
               this->topicLabel->AutoSize = true;
               this->topicLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                   static_cast<System::Int32>(static_cast<System::Byte>(249)));
               this->topicLabel->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
               this->topicLabel->ForeColor = System::Drawing::Color::Black;
               this->topicLabel->Location = System::Drawing::Point(28, 168);
               this->topicLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->topicLabel->Name = L"topicLabel";
               this->topicLabel->Size = System::Drawing::Size(156, 16);
               this->topicLabel->TabIndex = 10;
               this->topicLabel->Text = L"Topics and Descriptions";
               // 
               // subtopicLabel
               // 
               this->subtopicLabel->AutoSize = true;
               this->subtopicLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                   static_cast<System::Int32>(static_cast<System::Byte>(249)));
               this->subtopicLabel->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
               this->subtopicLabel->ForeColor = System::Drawing::Color::Black;
               this->subtopicLabel->Location = System::Drawing::Point(260, 70);
               this->subtopicLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->subtopicLabel->Name = L"subtopicLabel";
               this->subtopicLabel->Size = System::Drawing::Size(69, 16);
               this->subtopicLabel->TabIndex = 11;
               this->subtopicLabel->Text = L"Subtopics";
               // 
               // logoPicture
               // 
               this->logoPicture->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoPicture.BackgroundImage")));
               this->logoPicture->Location = System::Drawing::Point(31, 28);
               this->logoPicture->Name = L"logoPicture";
               this->logoPicture->Size = System::Drawing::Size(161, 50);
               this->logoPicture->TabIndex = 17;
               this->logoPicture->TabStop = false;
               // 
               // authorLabel
               // 
               this->authorLabel->AutoSize = true;
               this->authorLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                   static_cast<System::Int32>(static_cast<System::Byte>(249)));
               this->authorLabel->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
               this->authorLabel->ForeColor = System::Drawing::Color::Black;
               this->authorLabel->Location = System::Drawing::Point(28, 115);
               this->authorLabel->Name = L"authorLabel";
               this->authorLabel->Size = System::Drawing::Size(49, 16);
               this->authorLabel->TabIndex = 21;
               this->authorLabel->Text = L"Author";
               // 
               // deadlineLabel
               // 
               this->deadlineLabel->AutoSize = true;
               this->deadlineLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                   static_cast<System::Int32>(static_cast<System::Byte>(249)));
               this->deadlineLabel->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
               this->deadlineLabel->ForeColor = System::Drawing::Color::Black;
               this->deadlineLabel->Location = System::Drawing::Point(260, 115);
               this->deadlineLabel->Name = L"deadlineLabel";
               this->deadlineLabel->Size = System::Drawing::Size(64, 16);
               this->deadlineLabel->TabIndex = 22;
               this->deadlineLabel->Text = L"Deadline";
               // 
               // labelProgress
               // 
               this->labelProgress->AutoSize = true;
               this->labelProgress->BackColor = System::Drawing::Color::White;
               this->labelProgress->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->labelProgress->ForeColor = System::Drawing::Color::Black;
               this->labelProgress->Location = System::Drawing::Point(235, 62);
               this->labelProgress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelProgress->Name = L"labelProgress";
               this->labelProgress->Size = System::Drawing::Size(143, 16);
               this->labelProgress->TabIndex = 24;
               this->labelProgress->Text = L"Progress: 0 / 0 (0,00%)";
               // 
               // authorTextBox
               // 
               this->authorTextBox->BackColor = System::Drawing::Color::White;
               this->authorTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->authorTextBox->Location = System::Drawing::Point(31, 134);
               this->authorTextBox->Name = L"authorTextBox";
               this->authorTextBox->ReadOnly = true;
               this->authorTextBox->Size = System::Drawing::Size(209, 20);
               this->authorTextBox->TabIndex = 25;
               // 
               // deadlineTextBox
               // 
               this->deadlineTextBox->BackColor = System::Drawing::Color::White;
               this->deadlineTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->deadlineTextBox->Location = System::Drawing::Point(263, 134);
               this->deadlineTextBox->Name = L"deadlineTextBox";
               this->deadlineTextBox->ReadOnly = true;
               this->deadlineTextBox->Size = System::Drawing::Size(120, 20);
               this->deadlineTextBox->TabIndex = 26;
               // 
               // RowsPanel
               // 
               this->RowsPanel->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->RowsPanel->Location = System::Drawing::Point(31, 196);
               this->RowsPanel->Margin = System::Windows::Forms::Padding(4);
               this->RowsPanel->Name = L"RowsPanel";
               this->RowsPanel->Size = System::Drawing::Size(551, 574);
               this->RowsPanel->TabIndex = 8;
               // 
               // titleLabel
               // 
               this->titleLabel->AutoSize = true;
               this->titleLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(96)),
                   static_cast<System::Int32>(static_cast<System::Byte>(255)));
               this->titleLabel->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->titleLabel->ForeColor = System::Drawing::Color::White;
               this->titleLabel->Location = System::Drawing::Point(234, 35);
               this->titleLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->titleLabel->Name = L"titleLabel";
               this->titleLabel->Size = System::Drawing::Size(49, 24);
               this->titleLabel->TabIndex = 12;
               this->titleLabel->Text = L"\?\?\?";
               // 
               // panel1
               // 
               this->panel1->BackColor = System::Drawing::Color::White;
               this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
               this->panel1->Location = System::Drawing::Point(0, 0);
               this->panel1->Name = L"panel1";
               this->panel1->Size = System::Drawing::Size(792, 100);
               this->panel1->TabIndex = 27;
               // 
               // panel2
               // 
               this->panel2->Controls->Add(this->subtopicLabel);
               this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
               this->panel2->Location = System::Drawing::Point(0, 98);
               this->panel2->Name = L"panel2";
               this->panel2->Size = System::Drawing::Size(792, 702);
               this->panel2->TabIndex = 28;
               // 
               // mapwindow
               // 
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
               this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                   static_cast<System::Int32>(static_cast<System::Byte>(249)));
               this->ClientSize = System::Drawing::Size(792, 800);
               this->Controls->Add(this->deadlineTextBox);
               this->Controls->Add(this->authorTextBox);
               this->Controls->Add(this->labelProgress);
               this->Controls->Add(this->deadlineLabel);
               this->Controls->Add(this->authorLabel);
               this->Controls->Add(this->logoPicture);
               this->Controls->Add(this->titleLabel);
               this->Controls->Add(this->topicLabel);
               this->Controls->Add(this->saveButton);
               this->Controls->Add(this->RowsPanel);
               this->Controls->Add(this->uploadButton);
               this->Controls->Add(this->panel1);
               this->Controls->Add(this->panel2);
               this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
               this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
               this->Margin = System::Windows::Forms::Padding(4);
               this->MaximizeBox = false;
               this->MinimizeBox = false;
               this->Name = L"mapwindow";
               this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
               this->Text = L"RoadMap - Map progress";
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoPicture))->EndInit();
               this->panel2->ResumeLayout(false);
               this->panel2->PerformLayout();
               this->ResumeLayout(false);
               this->PerformLayout();

           }

#pragma endregion
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
                        titleLabel->Text = infoNodes[0]->Attributes["Title"]->Value;
                    }
                    else {
                        titleLabel->Text = "Title not found";
                    }

                    if (infoNodes[0]->Attributes["Author"] != nullptr) {
                        authorTextBox->Text = infoNodes[0]->Attributes["Author"]->Value;
                    }
                    else {
                        authorTextBox->Text = "Author not found";
                    }
                }
                if (dateNodes->Count > 0) {
                    if (dateNodes[0]->Attributes["Deadline"] != nullptr) {
                        deadlineTextBox->Text = dateNodes[0]->Attributes["Deadline"]->Value;
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
            topicLabel->MaximumSize = System::Drawing::Size(180, 0);
            topicLabel->Location = System::Drawing::Point(0, yOffset); 
            topicLabel->Text = topic;
            RowsPanel->Controls->Add(topicLabel);

            Label^ descriptionLabel = gcnew Label();
            descriptionLabel->AutoSize = true;
            descriptionLabel->MaximumSize = System::Drawing::Size(180, 0);
            descriptionLabel->Location = System::Drawing::Point(0, yOffset + 25);
            descriptionLabel->Text = description;
            RowsPanel->Controls->Add(descriptionLabel);

            array<String^>^ subtopicsArray = subtopics->Split(gcnew array<wchar_t>{','}, StringSplitOptions::RemoveEmptyEntries);
            for (int i = 0; i < subtopicsArray->Length; i++) {
                String^ subtopic = subtopicsArray[i]->Trim();

                Label^ numberLabel = gcnew Label();
                numberLabel->AutoSize = true;
                numberLabel->Font = gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold);
                numberLabel->Location = System::Drawing::Point(230, yOffset + i * 30);
                numberLabel->Text = (i + 1).ToString() + ".";
                RowsPanel->Controls->Add(numberLabel);

                Label^ subtopicLabel = gcnew Label();
                subtopicLabel->AutoSize = true;
                subtopicLabel->MaximumSize = System::Drawing::Size(180, 0);
                subtopicLabel->Location = System::Drawing::Point(250, yOffset + i * 30);
                subtopicLabel->Text = subtopic;
                RowsPanel->Controls->Add(subtopicLabel);

                CheckBox^ checkBox = gcnew CheckBox();
                checkBox->Location = System::Drawing::Point(430, yOffset + i * 30);
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
            int totalsubtopics = 0;
            int completedsubtopics = 0;

            for each (Control ^ control in RowsPanel->Controls) {
                if (CheckBox^ checkBox = dynamic_cast<CheckBox^>(control)) {
                    totalsubtopics++;
                    if (checkBox->Checked) {
                        completedsubtopics++;
                    }
                }
            }
            if (totalsubtopics > 0) {
                double percentage = (double)completedsubtopics / totalsubtopics * 100;
                labelProgress->Text = "Progress: " + completedsubtopics + " / " + totalsubtopics + " (" + percentage.ToString("F2") + "%)";
            }
            else {
                labelProgress->Text = "No subtopics available.";
            }
        }
    };
}