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
        System::Windows::Forms::Button^ button_create;
        System::Windows::Forms::Button^ button_upload;
        System::Windows::Forms::PictureBox^ pictureBox1;
        System::Windows::Forms::PictureBox^ pictureBox3;
        System::ComponentModel::Container^ components;

    protected:

#pragma region Windows Form Designer generated code

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainwindow::typeid));
            this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->button_create = (gcnew System::Windows::Forms::Button());
            this->button_upload = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
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
            // button_create
            // 
            this->button_create->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->button_create->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_create.BackgroundImage")));
            this->button_create->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_create->ForeColor = System::Drawing::Color::White;
            this->button_create->Location = System::Drawing::Point(83, 177);
            this->button_create->Margin = System::Windows::Forms::Padding(4);
            this->button_create->Name = L"button_create";
            this->button_create->Size = System::Drawing::Size(330, 271);
            this->button_create->TabIndex = 3;
            this->button_create->UseVisualStyleBackColor = false;
            this->button_create->Click += gcnew System::EventHandler(this, &mainwindow::button_create_Click);
            // 
            // button_upload
            // 
            this->button_upload->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->button_upload->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_upload.BackgroundImage")));
            this->button_upload->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->button_upload->FlatAppearance->BorderSize = 500;
            this->button_upload->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold));
            this->button_upload->ForeColor = System::Drawing::Color::White;
            this->button_upload->Location = System::Drawing::Point(495, 177);
            this->button_upload->Margin = System::Windows::Forms::Padding(4);
            this->button_upload->Name = L"button_upload";
            this->button_upload->Size = System::Drawing::Size(329, 271);
            this->button_upload->TabIndex = 4;
            this->button_upload->UseVisualStyleBackColor = false;
            this->button_upload->Click += gcnew System::EventHandler(this, &mainwindow::button_upload_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::White;
            this->pictureBox1->Location = System::Drawing::Point(-7, -7);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(927, 108);
            this->pictureBox1->TabIndex = 5;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
            this->pictureBox3->Location = System::Drawing::Point(24, 26);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(161, 50);
            this->pictureBox3->TabIndex = 7;
            this->pictureBox3->TabStop = false;
            // 
            // mainwindow
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(249)));
            this->ClientSize = System::Drawing::Size(909, 506);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button_create);
            this->Controls->Add(this->button_upload);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Margin = System::Windows::Forms::Padding(4);
            this->MaximizeBox = false;
            this->MinimizeBox = false;
            this->Name = L"mainwindow";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"RoadMap v0.8.0";
            this->TransparencyKey = System::Drawing::SystemColors::WindowFrame;
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }

#pragma endregion

    private:
        System::Void button_create_Click(System::Object^ sender, System::EventArgs^ e) {
            creationwindow^ createRoadmap = gcnew creationwindow();
            createRoadmap->Show();
        }

    private:
        System::Void button_upload_Click(System::Object^ sender, System::EventArgs^ e) {
            mapwindow^ RoadMapWindow = gcnew mapwindow();
            RoadMapWindow->Show();
        }
    };
}


