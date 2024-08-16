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
        System::Windows::Forms::Button^ btnLoadFile;
    private: System::Windows::Forms::Panel^ RowsPanel;

           System::Windows::Forms::Button^ btnSaveChanges;
           System::Windows::Forms::Label^ labelSections;
           System::Windows::Forms::Label^ labelSubtopic;
           System::Windows::Forms::Label^ titleLabel;
           System::Windows::Forms::PictureBox^ pictureBox3;
           System::Windows::Forms::PictureBox^ pictureBox2;
           System::Windows::Forms::Label^ authorLabel;
           System::Windows::Forms::Label^ labelAuthor;
           System::Windows::Forms::Label^ labelDeadline;
           System::Windows::Forms::Label^ dateLabel;
           System::Windows::Forms::Label^ labelProgress;

           System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

           void InitializeComponent(void) {
               System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mapwindow::typeid));
               this->btnLoadFile = (gcnew System::Windows::Forms::Button());
               this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
               this->RowsPanel = (gcnew System::Windows::Forms::Panel());
               this->btnSaveChanges = (gcnew System::Windows::Forms::Button());
               this->labelSections = (gcnew System::Windows::Forms::Label());
               this->labelSubtopic = (gcnew System::Windows::Forms::Label());
               this->titleLabel = (gcnew System::Windows::Forms::Label());
               this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
               this->authorLabel = (gcnew System::Windows::Forms::Label());
               this->labelAuthor = (gcnew System::Windows::Forms::Label());
               this->labelDeadline = (gcnew System::Windows::Forms::Label());
               this->dateLabel = (gcnew System::Windows::Forms::Label());
               this->labelProgress = (gcnew System::Windows::Forms::Label());
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
               this->SuspendLayout();
               // 
               // btnLoadFile
               // 
               this->btnLoadFile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(96)),
                   static_cast<System::Int32>(static_cast<System::Byte>(255)));
               this->btnLoadFile->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 11.25F, System::Drawing::FontStyle::Bold));
               this->btnLoadFile->ForeColor = System::Drawing::Color::White;
               this->btnLoadFile->Location = System::Drawing::Point(569, 664);
               this->btnLoadFile->Margin = System::Windows::Forms::Padding(4);
               this->btnLoadFile->Name = L"btnLoadFile";
               this->btnLoadFile->Size = System::Drawing::Size(160, 49);
               this->btnLoadFile->TabIndex = 7;
               this->btnLoadFile->Text = L"UPLOAD";
               this->btnLoadFile->UseVisualStyleBackColor = false;
               this->btnLoadFile->Click += gcnew System::EventHandler(this, &mapwindow::btnLoadFile_Click);
               // 
               // RowsPanel
               // 
               this->RowsPanel->Location = System::Drawing::Point(31, 159);
               this->RowsPanel->Margin = System::Windows::Forms::Padding(4);
               this->RowsPanel->Name = L"RowsPanel";
               this->RowsPanel->Size = System::Drawing::Size(530, 611);
               this->RowsPanel->TabIndex = 8;
               // 
               // btnSaveChanges
               // 
               this->btnSaveChanges->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(96)),
                   static_cast<System::Int32>(static_cast<System::Byte>(255)));
               this->btnSaveChanges->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 11.25F, System::Drawing::FontStyle::Bold));
               this->btnSaveChanges->ForeColor = System::Drawing::Color::White;
               this->btnSaveChanges->Location = System::Drawing::Point(569, 721);
               this->btnSaveChanges->Margin = System::Windows::Forms::Padding(4);
               this->btnSaveChanges->Name = L"btnSaveChanges";
               this->btnSaveChanges->Size = System::Drawing::Size(160, 49);
               this->btnSaveChanges->TabIndex = 9;
               this->btnSaveChanges->Text = L"SAVE CHANGES";
               this->btnSaveChanges->UseVisualStyleBackColor = false;
               this->btnSaveChanges->Click += gcnew System::EventHandler(this, &mapwindow::btnSaveChanges_Click);
               // 
               // labelSections
               // 
               this->labelSections->AutoSize = true;
               this->labelSections->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                   static_cast<System::Int32>(static_cast<System::Byte>(249)));
               this->labelSections->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->labelSections->ForeColor = System::Drawing::Color::Black;
               this->labelSections->Location = System::Drawing::Point(28, 137);
               this->labelSections->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelSections->Name = L"labelSections";
               this->labelSections->Size = System::Drawing::Size(153, 18);
               this->labelSections->TabIndex = 10;
               this->labelSections->Text = L"Topics and Descriptions";
               // 
               // labelSubtopic
               // 
               this->labelSubtopic->AutoSize = true;
               this->labelSubtopic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                   static_cast<System::Int32>(static_cast<System::Byte>(249)));
               this->labelSubtopic->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->labelSubtopic->ForeColor = System::Drawing::Color::Black;
               this->labelSubtopic->Location = System::Drawing::Point(235, 137);
               this->labelSubtopic->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelSubtopic->Name = L"labelSubtopic";
               this->labelSubtopic->Size = System::Drawing::Size(68, 18);
               this->labelSubtopic->TabIndex = 11;
               this->labelSubtopic->Text = L"Subtopics";
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
               // pictureBox3
               // 
               this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
               this->pictureBox3->Location = System::Drawing::Point(31, 28);
               this->pictureBox3->Name = L"pictureBox3";
               this->pictureBox3->Size = System::Drawing::Size(161, 50);
               this->pictureBox3->TabIndex = 17;
               this->pictureBox3->TabStop = false;
               // 
               // pictureBox2
               // 
               this->pictureBox2->BackColor = System::Drawing::Color::White;
               this->pictureBox2->Location = System::Drawing::Point(-4, -5);
               this->pictureBox2->Name = L"pictureBox2";
               this->pictureBox2->Size = System::Drawing::Size(763, 104);
               this->pictureBox2->TabIndex = 18;
               this->pictureBox2->TabStop = false;
               // 
               // authorLabel
               // 
               this->authorLabel->AutoSize = true;
               this->authorLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                   static_cast<System::Int32>(static_cast<System::Byte>(249)));
               this->authorLabel->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F));
               this->authorLabel->ForeColor = System::Drawing::Color::Black;
               this->authorLabel->Location = System::Drawing::Point(87, 111);
               this->authorLabel->Name = L"authorLabel";
               this->authorLabel->Size = System::Drawing::Size(28, 16);
               this->authorLabel->TabIndex = 19;
               this->authorLabel->Text = L"\?\?\?";
               // 
               // labelAuthor
               // 
               this->labelAuthor->AutoSize = true;
               this->labelAuthor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                   static_cast<System::Int32>(static_cast<System::Byte>(249)));
               this->labelAuthor->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
               this->labelAuthor->Location = System::Drawing::Point(28, 111);
               this->labelAuthor->Name = L"labelAuthor";
               this->labelAuthor->Size = System::Drawing::Size(53, 16);
               this->labelAuthor->TabIndex = 21;
               this->labelAuthor->Text = L"Author:";
               // 
               // labelDeadline
               // 
               this->labelDeadline->AutoSize = true;
               this->labelDeadline->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                   static_cast<System::Int32>(static_cast<System::Byte>(249)));
               this->labelDeadline->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
               this->labelDeadline->Location = System::Drawing::Point(235, 111);
               this->labelDeadline->Name = L"labelDeadline";
               this->labelDeadline->Size = System::Drawing::Size(68, 16);
               this->labelDeadline->TabIndex = 22;
               this->labelDeadline->Text = L"Deadline:";
               // 
               // dateLabel
               // 
               this->dateLabel->AutoSize = true;
               this->dateLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                   static_cast<System::Int32>(static_cast<System::Byte>(249)));
               this->dateLabel->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F));
               this->dateLabel->ForeColor = System::Drawing::Color::Black;
               this->dateLabel->Location = System::Drawing::Point(318, 111);
               this->dateLabel->Name = L"dateLabel";
               this->dateLabel->Size = System::Drawing::Size(28, 16);
               this->dateLabel->TabIndex = 23;
               this->dateLabel->Text = L"\?\?\?";
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
               this->labelProgress->Size = System::Drawing::Size(31, 16);
               this->labelProgress->TabIndex = 24;
               this->labelProgress->Text = L"\?\?\?";
               // 
               // mapwindow
               // 
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
               this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                   static_cast<System::Int32>(static_cast<System::Byte>(249)));
               this->ClientSize = System::Drawing::Size(756, 800);
               this->Controls->Add(this->labelProgress);
               this->Controls->Add(this->dateLabel);
               this->Controls->Add(this->labelDeadline);
               this->Controls->Add(this->labelAuthor);
               this->Controls->Add(this->authorLabel);
               this->Controls->Add(this->pictureBox3);
               this->Controls->Add(this->titleLabel);
               this->Controls->Add(this->labelSubtopic);
               this->Controls->Add(this->labelSections);
               this->Controls->Add(this->btnSaveChanges);
               this->Controls->Add(this->RowsPanel);
               this->Controls->Add(this->btnLoadFile);
               this->Controls->Add(this->pictureBox2);
               this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
               this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
               this->Margin = System::Windows::Forms::Padding(4);
               this->MaximizeBox = false;
               this->MinimizeBox = false;
               this->Name = L"mapwindow";
               this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
               this->Text = L"RoadMap - Map";
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
               this->ResumeLayout(false);
               this->PerformLayout();

           }

#pragma endregion

    private:
        System::Void btnLoadFile_Click(System::Object^ sender, System::EventArgs^ e) {
            openFileDialog1->Filter = "XML Files (*.xml)|*.xml|All files (*.*)|*.*";
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

                System::Xml::XmlNodeList^ rowNodes = xmlDoc->GetElementsByTagName("ROW");
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
                        authorLabel->Text = infoNodes[0]->Attributes["Author"]->Value;
                    }
                    else {
                        authorLabel->Text = "Author not found";
                    }
                }

                if (dateNodes->Count > 0) {
                    if (dateNodes[0]->Attributes["Deadline"] != nullptr) {
                        dateLabel->Text = dateNodes[0]->Attributes["Deadline"]->Value;
                    }
                    else {
                        dateLabel->Text = "Deadline not found";
                    }
                }
                else {
                    MessageBox::Show("Document element not found in XML.");
                }

                int yOffset = 0;

                for (int i = 0; i < rowsNodes->Count; i++) {
                    String^ additionalSection = rowsNodes[i]->Attributes["Topic"]->Value;
                    String^ additionalDescription = rowsNodes[i]->Attributes["Description"]->Value;
                    String^ additionalCheckpoints = rowsNodes[i]->Attributes["Subtopic"]->Value;

                    CreateAndDisplayCheckpoints(additionalSection, additionalDescription, additionalCheckpoints, yOffset, xmlDoc, "ROWS", i);
                    yOffset += 70 * (additionalCheckpoints->Split(',')->Length);
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
        System::Void CreateAndDisplayCheckpoints(String^ section, String^ description, String^ checkpoints, int yOffset, XmlDocument^ xmlDoc, String^ nodeType, int nodeIndex) {
            Label^ label = gcnew Label();
            label->AutoSize = true;
            label->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
            label->Location = System::Drawing::Point(12, yOffset);
            label->Text = section;
            RowsPanel->Controls->Add(label);

            Label^ label2 = gcnew Label();
            label2->AutoSize = true;
            label2->MaximumSize = System::Drawing::Size(180, 0);
            label2->Location = System::Drawing::Point(12, yOffset + 20);
            label2->Text = description;
            RowsPanel->Controls->Add(label2);

            array<String^>^ checkpointsArray = checkpoints->Split(',');
            for (int i = 0; i < checkpointsArray->Length; i++) {
                String^ checkpoint = checkpointsArray[i]->Trim();

                Label^ checkpointLabel = gcnew Label();
                checkpointLabel->AutoSize = true;
                checkpointLabel->MaximumSize = System::Drawing::Size(180, 0);
                checkpointLabel->Location = System::Drawing::Point(200, yOffset + i * 30);
                checkpointLabel->Text = checkpoint;
                RowsPanel->Controls->Add(checkpointLabel);

                CheckBox^ checkBox = gcnew CheckBox();
                checkBox->Location = System::Drawing::Point(420, yOffset + i * 30);
                checkBox->Tag = nodeType + ":" + nodeIndex + ":" + i;
                RowsPanel->Controls->Add(checkBox);

                XmlNodeList^ nodes = xmlDoc->GetElementsByTagName(nodeType);
                if (nodeIndex < nodes->Count) {
                    XmlNode^ node = nodes[nodeIndex];
                    String^ attributeName = "Checkpoints";
                    if (node->Attributes->GetNamedItem(attributeName)) {
                        String^ checkpoints = node->Attributes->GetNamedItem(attributeName)->Value;
                        array<String^>^ checkpointsArray = checkpoints->Split(',');
                        if (i < checkpointsArray->Length) {
                            String^ currentCheckpoint = checkpointsArray[i]->Trim();
                            if (currentCheckpoint->Contains("(+)")) {
                                checkBox->Checked = true;
                            }
                        }
                    }
                }
            }
        }


    private: 
        System::Void btnSaveChanges_Click(System::Object^ sender, System::EventArgs^ e) {
            XmlDocument^ xmlDoc = gcnew XmlDocument();
            xmlDoc->Load(openFileDialog1->FileName);

            for each (Control ^ control in RowsPanel->Controls) {
                if (CheckBox^ checkBox = dynamic_cast<CheckBox^>(control)) {
                    array<String^>^ tagParts = checkBox->Tag->ToString()->Split(':');
                    String^ nodeType = tagParts[0];
                    int nodeIndex = Convert::ToInt32(tagParts[1]);
                    int checkpointIndex = Convert::ToInt32(tagParts[2]);

                    XmlNodeList^ nodes = xmlDoc->GetElementsByTagName(nodeType);
                    if (nodeIndex < nodes->Count) {
                        XmlNode^ node = nodes[nodeIndex];
                        String^ attributeName = "Subtopic";
                        if (node->Attributes->GetNamedItem(attributeName)) {
                            String^ checkpoints = node->Attributes->GetNamedItem(attributeName)->Value;
                            array<String^>^ checkpointsArray = checkpoints->Split(',');
                            if (checkpointIndex < checkpointsArray->Length) {
                                if (checkBox->Checked) {
                                    if (!checkpointsArray[checkpointIndex]->Contains("[+]")) {
                                        checkpointsArray[checkpointIndex] = checkpointsArray[checkpointIndex]->TrimEnd() + " [+]";
                                    }
                                }
                                else {
                                    checkpointsArray[checkpointIndex] = checkpointsArray[checkpointIndex]->Replace(" [+]", "");
                                }
                                String^ newCheckpoints = String::Join(",", checkpointsArray);
                                node->Attributes->GetNamedItem(attributeName)->Value = newCheckpoints;
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
            int totalCheckpoints = 0;
            int completedCheckpoints = 0;

            for each (Control ^ control in RowsPanel->Controls) {
                if (CheckBox^ checkBox = dynamic_cast<CheckBox^>(control)) {
                    totalCheckpoints++;
                    if (checkBox->Checked) {
                        completedCheckpoints++;
                    }
                }
            }

            if (totalCheckpoints > 0) {
                double percentage = (double)completedCheckpoints / totalCheckpoints * 100;
                labelProgress->Text = "Progress: " + completedCheckpoints + " / " + totalCheckpoints + " (" + percentage.ToString("F2") + "%)";
            }
            else {
                labelProgress->Text = "No checkpoints available.";
            }
        }
    };
}