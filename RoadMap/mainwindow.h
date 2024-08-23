#pragma once
#include "creationwindow.h"
#include "mapwindow.h"

namespace RoadMap {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class mainwindow : public System::Windows::Forms::Form
    {
    public:
        mainwindow(void)
        {
            InitializeComponent();
        }

    protected:
        ~mainwindow()
        {
            if (components)
            {
                delete components;
            }
        }

    private:

        System::ComponentModel::BackgroundWorker^ backgroundWorker1;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Button^ createButton;
        System::Windows::Forms::Button^ uploadButton;
        System::Windows::Forms::PictureBox^ logoPicture;
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Button^ githubButton;

           System::ComponentModel::Container^ components;

    protected:

#pragma region Windows Form Designer generated code

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainwindow::typeid));
            this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->createButton = (gcnew System::Windows::Forms::Button());
            this->uploadButton = (gcnew System::Windows::Forms::Button());
            this->logoPicture = (gcnew System::Windows::Forms::PictureBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->githubButton = (gcnew System::Windows::Forms::Button());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoPicture))->BeginInit();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
            this->label1->ForeColor = System::Drawing::Color::Black;
            this->label1->Location = System::Drawing::Point(80, 140);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(166, 16);
            this->label1->TabIndex = 2;
            this->label1->Text = L"Please, choose an action";
            // 
            // createButton
            // 
            this->createButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->createButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"createButton.BackgroundImage")));
            this->createButton->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->createButton->ForeColor = System::Drawing::Color::White;
            this->createButton->Location = System::Drawing::Point(83, 177);
            this->createButton->Margin = System::Windows::Forms::Padding(4);
            this->createButton->Name = L"createButton";
            this->createButton->Size = System::Drawing::Size(330, 271);
            this->createButton->TabIndex = 3;
            this->createButton->UseVisualStyleBackColor = false;
            this->createButton->Click += gcnew System::EventHandler(this, &mainwindow::createButton_Click);
            // 
            // uploadButton
            // 
            this->uploadButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->uploadButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uploadButton.BackgroundImage")));
            this->uploadButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->uploadButton->FlatAppearance->BorderSize = 500;
            this->uploadButton->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold));
            this->uploadButton->ForeColor = System::Drawing::Color::White;
            this->uploadButton->Location = System::Drawing::Point(495, 177);
            this->uploadButton->Margin = System::Windows::Forms::Padding(4);
            this->uploadButton->Name = L"uploadButton";
            this->uploadButton->Size = System::Drawing::Size(329, 271);
            this->uploadButton->TabIndex = 4;
            this->uploadButton->UseVisualStyleBackColor = false;
            this->uploadButton->Click += gcnew System::EventHandler(this, &mainwindow::uploadButton_Click);
            // 
            // logoPicture
            // 
            this->logoPicture->BackColor = System::Drawing::Color::White;
            this->logoPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoPicture.Image")));
            this->logoPicture->Location = System::Drawing::Point(30, 35);
            this->logoPicture->Name = L"logoPicture";
            this->logoPicture->Size = System::Drawing::Size(161, 39);
            this->logoPicture->TabIndex = 7;
            this->logoPicture->TabStop = false;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::White;
            this->panel1->Controls->Add(this->githubButton);
            this->panel1->Controls->Add(this->logoPicture);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(909, 100);
            this->panel1->TabIndex = 8;
            // 
            // githubButton
            // 
            this->githubButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->githubButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->githubButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->githubButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->githubButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"githubButton.Image")));
            this->githubButton->Location = System::Drawing::Point(704, 35);
            this->githubButton->Name = L"githubButton";
            this->githubButton->Size = System::Drawing::Size(176, 39);
            this->githubButton->TabIndex = 0;
            this->githubButton->UseVisualStyleBackColor = false;
            this->githubButton->Click += gcnew System::EventHandler(this, &mainwindow::githubButton_Click);
            // 
            // panel2
            // 
            this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->panel2->Location = System::Drawing::Point(0, 79);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(909, 423);
            this->panel2->TabIndex = 9;
            // 
            // mainwindow
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(249)));
            this->ClientSize = System::Drawing::Size(909, 502);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->createButton);
            this->Controls->Add(this->uploadButton);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->panel2);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Margin = System::Windows::Forms::Padding(4);
            this->MaximizeBox = false;
            this->MinimizeBox = false;
            this->Name = L"mainwindow";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"RoadMap Classic v0.6.1";
            this->TransparencyKey = System::Drawing::SystemColors::WindowFrame;
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoPicture))->EndInit();
            this->panel1->ResumeLayout(false);
            this->ResumeLayout(false);
            this->PerformLayout();

        }

#pragma endregion
    private:
        System::Void githubButton_Click(System::Object^ sender, System::EventArgs^ e) {
            String^ url = "https://github.com/juicebucket/roadmap_project/tree/classic";

            try {
                System::Diagnostics::Process::Start("explorer.exe", url);
            }
            catch (Exception^ ex) {
                MessageBox::Show("Unable to open the link: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

    private:
        System::Void createButton_Click(System::Object^ sender, System::EventArgs^ e) {
            creationwindow^ createRoadmap = gcnew creationwindow();
            createRoadmap->Show();
        }

    private:
        System::Void uploadButton_Click(System::Object^ sender, System::EventArgs^ e) {
            mapwindow^ RoadMapWindow = gcnew mapwindow();
            RoadMapWindow->Show();
        }
    };
}


