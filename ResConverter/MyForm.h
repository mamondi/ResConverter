#pragma once

namespace ResConverter {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form {
    public:
        MyForm(void) {
            InitializeComponent();
        }

    protected:
        ~MyForm() {
            if (components) {
                delete components;
            }
        }

    private:
        System::Windows::Forms::TextBox^ txtOhms;
        System::Windows::Forms::TextBox^ MicroOhms;
        System::Windows::Forms::TextBox^ MilliOhms;
        System::Windows::Forms::TextBox^ KiloOhms;
        System::Windows::Forms::TextBox^ MegaOhms;
        System::Windows::Forms::Button^ btnConvert;
        System::Windows::Forms::Label^ lblOhms;
        System::Windows::Forms::Label^ lblMicroOhms;
        System::Windows::Forms::Label^ lblMilliOhms;
        System::Windows::Forms::Label^ lblKiloOhms;
        System::Windows::Forms::Label^ lblMegaOhms;
        System::ComponentModel::Container^ components;

    private:
        void InitializeComponent(void) {
            this->txtOhms = (gcnew System::Windows::Forms::TextBox());
            this->MicroOhms = (gcnew System::Windows::Forms::TextBox());
            this->MilliOhms = (gcnew System::Windows::Forms::TextBox());
            this->KiloOhms = (gcnew System::Windows::Forms::TextBox());
            this->MegaOhms = (gcnew System::Windows::Forms::TextBox());
            this->btnConvert = (gcnew System::Windows::Forms::Button());
            this->lblOhms = (gcnew System::Windows::Forms::Label());
            this->lblMicroOhms = (gcnew System::Windows::Forms::Label());
            this->lblMilliOhms = (gcnew System::Windows::Forms::Label());
            this->lblKiloOhms = (gcnew System::Windows::Forms::Label());
            this->lblMegaOhms = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // txtOhms
            // 
            this->txtOhms->Location = System::Drawing::Point(18, 31);
            this->txtOhms->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->txtOhms->Name = L"txtOhms";
            this->txtOhms->Size = System::Drawing::Size(76, 20);
            this->txtOhms->TabIndex = 0;
            // 
            // MicroOhms
            // 
            this->MicroOhms->Location = System::Drawing::Point(98, 78);
            this->MicroOhms->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->MicroOhms->Name = L"MicroOhms";
            this->MicroOhms->ReadOnly = true;
            this->MicroOhms->Size = System::Drawing::Size(76, 20);
            this->MicroOhms->TabIndex = 1;
            // 
            // MilliOhms
            // 
            this->MilliOhms->Location = System::Drawing::Point(98, 114);
            this->MilliOhms->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->MilliOhms->Name = L"MilliOhms";
            this->MilliOhms->ReadOnly = true;
            this->MilliOhms->Size = System::Drawing::Size(76, 20);
            this->MilliOhms->TabIndex = 2;
            // 
            // KiloOhms
            // 
            this->KiloOhms->Location = System::Drawing::Point(98, 146);
            this->KiloOhms->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->KiloOhms->Name = L"KiloOhms";
            this->KiloOhms->ReadOnly = true;
            this->KiloOhms->Size = System::Drawing::Size(76, 20);
            this->KiloOhms->TabIndex = 3;
            // 
            // MegaOhms
            // 
            this->MegaOhms->Location = System::Drawing::Point(98, 179);
            this->MegaOhms->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->MegaOhms->Name = L"MegaOhms";
            this->MegaOhms->ReadOnly = true;
            this->MegaOhms->Size = System::Drawing::Size(76, 20);
            this->MegaOhms->TabIndex = 4;
            // 
            // btnConvert
            // 
            this->btnConvert->Location = System::Drawing::Point(112, 27);
            this->btnConvert->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->btnConvert->Name = L"btnConvert";
            this->btnConvert->Size = System::Drawing::Size(88, 27);
            this->btnConvert->TabIndex = 5;
            this->btnConvert->Text = L"Конвертувати";
            this->btnConvert->UseVisualStyleBackColor = true;
            this->btnConvert->Click += gcnew System::EventHandler(this, &MyForm::btnConvert_Click);
            // 
            // lblOhms
            // 
            this->lblOhms->AutoSize = true;
            this->lblOhms->Location = System::Drawing::Point(15, 16);
            this->lblOhms->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->lblOhms->Name = L"lblOhms";
            this->lblOhms->Size = System::Drawing::Size(32, 13);
            this->lblOhms->TabIndex = 6;
            this->lblOhms->Text = L"Оми:";
            // 
            // lblMicroOhms
            // 
            this->lblMicroOhms->AutoSize = true;
            this->lblMicroOhms->Location = System::Drawing::Point(9, 81);
            this->lblMicroOhms->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->lblMicroOhms->Name = L"lblMicroOhms";
            this->lblMicroOhms->Size = System::Drawing::Size(85, 13);
            this->lblMicroOhms->TabIndex = 7;
            this->lblMicroOhms->Text = L"МікроОми (µΩ):";
            this->lblMicroOhms->Click += gcnew System::EventHandler(this, &MyForm::lblMicroOhms_Click);
            // 
            // lblMilliOhms
            // 
            this->lblMilliOhms->AutoSize = true;
            this->lblMilliOhms->Location = System::Drawing::Point(9, 117);
            this->lblMilliOhms->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->lblMilliOhms->Name = L"lblMilliOhms";
            this->lblMilliOhms->Size = System::Drawing::Size(77, 13);
            this->lblMilliOhms->TabIndex = 8;
            this->lblMilliOhms->Text = L"МіліОми (mΩ):";
            this->lblMilliOhms->Click += gcnew System::EventHandler(this, &MyForm::lblMilliOhms_Click);
            // 
            // lblKiloOhms
            // 
            this->lblKiloOhms->AutoSize = true;
            this->lblKiloOhms->Location = System::Drawing::Point(9, 149);
            this->lblKiloOhms->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->lblKiloOhms->Name = L"lblKiloOhms";
            this->lblKiloOhms->Size = System::Drawing::Size(77, 13);
            this->lblKiloOhms->TabIndex = 9;
            this->lblKiloOhms->Text = L"КілоОми (kΩ):";
            this->lblKiloOhms->Click += gcnew System::EventHandler(this, &MyForm::lblKiloOhms_Click);
            // 
            // lblMegaOhms
            // 
            this->lblMegaOhms->AutoSize = true;
            this->lblMegaOhms->Location = System::Drawing::Point(9, 182);
            this->lblMegaOhms->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->lblMegaOhms->Name = L"lblMegaOhms";
            this->lblMegaOhms->Size = System::Drawing::Size(85, 13);
            this->lblMegaOhms->TabIndex = 10;
            this->lblMegaOhms->Text = L"МегаОми (MΩ):";
            this->lblMegaOhms->Click += gcnew System::EventHandler(this, &MyForm::lblMegaOhms_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(216, 216);
            this->Controls->Add(this->lblOhms);
            this->Controls->Add(this->txtOhms);
            this->Controls->Add(this->btnConvert);
            this->Controls->Add(this->lblMicroOhms);
            this->Controls->Add(this->MicroOhms);
            this->Controls->Add(this->lblMilliOhms);
            this->Controls->Add(this->MilliOhms);
            this->Controls->Add(this->lblKiloOhms);
            this->Controls->Add(this->KiloOhms);
            this->Controls->Add(this->lblMegaOhms);
            this->Controls->Add(this->MegaOhms);
            this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->Name = L"MyForm";
            this->Text = L"в";
            this->ResumeLayout(false);
            this->PerformLayout();

        }

        void btnConvert_Click(System::Object^ sender, System::EventArgs^ e) {
            try {
                double ohms = Convert::ToDouble(txtOhms->Text);
                MicroOhms->Text = (ohms * 1000000).ToString();
                MilliOhms->Text = (ohms * 1000).ToString();
                KiloOhms->Text = (ohms / 1000).ToString();
                MegaOhms->Text = (ohms / 1000000).ToString();
            }
            catch (Exception^ ex) {
                MessageBox::Show("Будь ласка, введіть коректне число", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
    private: System::Void lblMegaOhms_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void lblKiloOhms_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void lblMilliOhms_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void lblMicroOhms_Click(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
