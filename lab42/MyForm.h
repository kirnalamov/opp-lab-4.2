#include "model.h"

namespace lab42 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxA;
	private: System::Windows::Forms::TextBox^ textBoxB;
	private: System::Windows::Forms::TextBox^ textBoxC;
	private: Model model;



	private: System::Windows::Forms::NumericUpDown^ numericUpDownA;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownB;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownC;
	private: System::Windows::Forms::TrackBar^ trackBarA;
	private: System::Windows::Forms::TrackBar^ trackBarB;
	private: System::Windows::Forms::TrackBar^ trackBarC;
	protected:

	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxB = (gcnew System::Windows::Forms::TextBox());
			this->textBoxC = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDownA = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownB = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownC = (gcnew System::Windows::Forms::NumericUpDown());
			this->trackBarA = (gcnew System::Windows::Forms::TrackBar());
			this->trackBarB = (gcnew System::Windows::Forms::TrackBar());
			this->trackBarC = (gcnew System::Windows::Forms::TrackBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarC))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Open Sans", 100, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(70, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(937, 194);
			this->label1->TabIndex = 0;
			this->label1->Text = L"A  <=  B  <=  C";
			// 
			// textBoxA
			// 
			this->textBoxA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxA->Location = System::Drawing::Point(66, 278);
			this->textBoxA->Name = L"textBoxA";
			this->textBoxA->Size = System::Drawing::Size(169, 31);
			this->textBoxA->TabIndex = 1;
			this->textBoxA->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_TextChanged);
			this->textBoxA->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox_KeyDown);
			this->textBoxA->Leave += gcnew System::EventHandler(this, &MyForm::textBox_Leave);
			// 
			// textBoxB
			// 
			this->textBoxB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxB->Location = System::Drawing::Point(461, 278);
			this->textBoxB->Name = L"textBoxB";
			this->textBoxB->Size = System::Drawing::Size(169, 31);
			this->textBoxB->TabIndex = 2;
			this->textBoxB->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_TextChanged);
			this->textBoxB->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox_KeyDown);
			this->textBoxB->Leave += gcnew System::EventHandler(this, &MyForm::textBox_Leave);
			// 
			// textBoxC
			// 
			this->textBoxC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxC->Location = System::Drawing::Point(838, 278);
			this->textBoxC->Name = L"textBoxC";
			this->textBoxC->Size = System::Drawing::Size(169, 31);
			this->textBoxC->TabIndex = 3;
			this->textBoxC->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_TextChanged);
			this->textBoxC->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox_KeyDown);
			this->textBoxC->Leave += gcnew System::EventHandler(this, &MyForm::textBox_Leave);
			// 
			// numericUpDownA
			// 
			this->numericUpDownA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDownA->Location = System::Drawing::Point(66, 324);
			this->numericUpDownA->Name = L"numericUpDownA";
			this->numericUpDownA->Size = System::Drawing::Size(169, 31);
			this->numericUpDownA->TabIndex = 7;
			this->numericUpDownA->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown_ValueChanged);
			// 
			// numericUpDownB
			// 
			this->numericUpDownB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDownB->Location = System::Drawing::Point(461, 324);
			this->numericUpDownB->Name = L"numericUpDownB";
			this->numericUpDownB->Size = System::Drawing::Size(169, 31);
			this->numericUpDownB->TabIndex = 8;
			this->numericUpDownB->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown_ValueChanged);
			// 
			// numericUpDownC
			// 
			this->numericUpDownC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDownC->Location = System::Drawing::Point(838, 324);
			this->numericUpDownC->Name = L"numericUpDownC";
			this->numericUpDownC->Size = System::Drawing::Size(169, 31);
			this->numericUpDownC->TabIndex = 9;
			this->numericUpDownC->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown_ValueChanged);
			// 
			// trackBarA
			// 
			this->trackBarA->Location = System::Drawing::Point(66, 379);
			this->trackBarA->Maximum = 100;
			this->trackBarA->Name = L"trackBarA";
			this->trackBarA->Size = System::Drawing::Size(169, 45);
			this->trackBarA->TabIndex = 10;
			this->trackBarA->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar_ValueChanged);
			// 
			// trackBarB
			// 
			this->trackBarB->Location = System::Drawing::Point(461, 368);
			this->trackBarB->Maximum = 100;
			this->trackBarB->Name = L"trackBarB";
			this->trackBarB->Size = System::Drawing::Size(169, 45);
			this->trackBarB->TabIndex = 11;
			this->trackBarB->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar_ValueChanged);
			// 
			// trackBarC
			// 
			this->trackBarC->Location = System::Drawing::Point(838, 368);
			this->trackBarC->Maximum = 100;
			this->trackBarC->Name = L"trackBarC";
			this->trackBarC->Size = System::Drawing::Size(169, 45);
			this->trackBarC->TabIndex = 12;
			this->trackBarC->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar_ValueChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1091, 481);
			this->Controls->Add(this->trackBarC);
			this->Controls->Add(this->trackBarB);
			this->Controls->Add(this->trackBarA);
			this->Controls->Add(this->numericUpDownC);
			this->Controls->Add(this->numericUpDownB);
			this->Controls->Add(this->numericUpDownA);
			this->Controls->Add(this->textBoxC);
			this->Controls->Add(this->textBoxB);
			this->Controls->Add(this->textBoxA);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarC))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->model.observers += gcnew System::EventHandler(this, &MyForm::setValue);
		this->model.erors += gcnew System::EventHandler(this, &MyForm::getEror);
		update();
	}
	private: System::Void textBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void setValue(System::Object^ sender, System::EventArgs^ e);
	private: System::Void getEror(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	private: System::Void numericUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void trackBar_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_Leave(System::Object^ sender, System::EventArgs^ e);
	private: bool is_ditgit(System::String^ line);

	private: System::Void update();
};
}
