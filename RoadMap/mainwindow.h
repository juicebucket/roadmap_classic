#pragma once
#include "creationwindow.h"
#include "mapwindow.h"
#include "editwindow.h"

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
            SetDragHandlers(panel1);
            SetDragHandlers(panel2);
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
        System::Windows::Forms::Button^ createButton;
        System::Windows::Forms::Button^ uploadButton;
        System::Windows::Forms::Button^ editButton;
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Panel^ panel2;
        System::Windows::Forms::PictureBox^ pictureBox2;
        System::Windows::Forms::PictureBox^ pictureBox1;
        System::Windows::Forms::Button^ githubButton;
        System::Windows::Forms::Button^ closeButton;
        System::ComponentModel::Container^ components;
        System::Drawing::Point lastPoint;

        bool dragging = false;

    protected:

#pragma region Windows Form Designer generated code

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainwindow::typeid));
            this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
            this->createButton = (gcnew System::Windows::Forms::Button());
            this->uploadButton = (gcnew System::Windows::Forms::Button());
            this->editButton = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->closeButton = (gcnew System::Windows::Forms::Button());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->githubButton = (gcnew System::Windows::Forms::Button());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->SuspendLayout();
            // 
            // createButton
            // 
            this->createButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->createButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)),
                static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->createButton->FlatAppearance->BorderSize = 10;
            this->createButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            resources->ApplyResources(this->createButton, L"createButton");
            this->createButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(26)));
            this->createButton->Name = L"createButton";
            this->createButton->UseVisualStyleBackColor = false;
            this->createButton->Click += gcnew System::EventHandler(this, &mainwindow::createButton_Click);
            // 
            // uploadButton
            // 
            this->uploadButton->Cursor = System::Windows::Forms::Cursors::Hand;
            resources->ApplyResources(this->uploadButton, L"uploadButton");
            this->uploadButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(26)));
            this->uploadButton->Name = L"uploadButton";
            this->uploadButton->UseVisualStyleBackColor = false;
            this->uploadButton->Click += gcnew System::EventHandler(this, &mainwindow::uploadButton_Click);
            // 
            // editButton
            // 
            this->editButton->Cursor = System::Windows::Forms::Cursors::Hand;
            resources->ApplyResources(this->editButton, L"editButton");
            this->editButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(26)));
            this->editButton->Name = L"editButton";
            this->editButton->UseVisualStyleBackColor = false;
            this->editButton->Click += gcnew System::EventHandler(this, &mainwindow::editButton_Click);
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->createButton);
            this->panel1->Controls->Add(this->editButton);
            this->panel1->Controls->Add(this->uploadButton);
            this->panel1->Controls->Add(this->closeButton);
            resources->ApplyResources(this->panel1, L"panel1");
            this->panel1->Name = L"panel1";
            // 
            // closeButton
            // 
            this->closeButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->closeButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->closeButton->FlatAppearance->BorderColor = System::Drawing::Color::Red;
            this->closeButton->FlatAppearance->BorderSize = 0;
            this->closeButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkRed;
            resources->ApplyResources(this->closeButton, L"closeButton");
            this->closeButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(26)));
            this->closeButton->Name = L"closeButton";
            this->closeButton->UseVisualStyleBackColor = false;
            this->closeButton->Click += gcnew System::EventHandler(this, &mainwindow::closeButton_Click);
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->panel2->Controls->Add(this->pictureBox1);
            this->panel2->Controls->Add(this->githubButton);
            this->panel2->Controls->Add(this->pictureBox2);
            resources->ApplyResources(this->panel2, L"panel2");
            this->panel2->Name = L"panel2";
            // 
            // pictureBox1
            // 
            resources->ApplyResources(this->pictureBox1, L"pictureBox1");
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->TabStop = false;
            // 
            // githubButton
            // 
            this->githubButton->Cursor = System::Windows::Forms::Cursors::Hand;
            resources->ApplyResources(this->githubButton, L"githubButton");
            this->githubButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->githubButton->Name = L"githubButton";
            this->githubButton->UseVisualStyleBackColor = false;
            this->githubButton->Click += gcnew System::EventHandler(this, &mainwindow::githubButton_Click);
            // 
            // pictureBox2
            // 
            resources->ApplyResources(this->pictureBox2, L"pictureBox2");
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->TabStop = false;
            // 
            // mainwindow
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(26)));
            resources->ApplyResources(this, L"$this");
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->MaximizeBox = false;
            this->MinimizeBox = false;
            this->Name = L"mainwindow";
            this->TransparencyKey = System::Drawing::SystemColors::WindowFrame;
            this->panel1->ResumeLayout(false);
            this->panel2->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->ResumeLayout(false);

        }

#pragma endregion
    private:
        void SetDragHandlers(System::Windows::Forms::Panel^ panel) {
            panel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &mainwindow::Form_MouseDown);
            panel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &mainwindow::Form_MouseMove);
            panel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &mainwindow::Form_MouseUp);
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
        System::Void createButton_Click(System::Object^ sender, System::EventArgs^ e) {
            creationwindow^ createRoadMap = gcnew creationwindow();
            createRoadMap->Show();
        }

        System::Void uploadButton_Click(System::Object^ sender, System::EventArgs^ e) {
            mapwindow^ progressRoadMap = gcnew mapwindow();
            progressRoadMap->Show();
        }

    private:
        System::Void githubButton_Click(System::Object^ sender, System::EventArgs^ e) {
            String^ url = "https://github.com/juicebucket";

            try {
                System::Diagnostics::Process::Start("explorer.exe", url);
            }
            catch (Exception^ ex) {
                MessageBox::Show("Unable to open the link: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

    private:
        System::Void closeButton_Click(System::Object^ sender, System::EventArgs^ e) {
            this->Close();
        }

    private: 
        System::Void editButton_Click(System::Object^ sender, System::EventArgs^ e) {
            editwindow^ editRoadMap = gcnew editwindow();
            editRoadMap->Show();
        }
    };
}
