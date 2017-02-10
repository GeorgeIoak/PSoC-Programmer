#pragma once
#include "Programmer.h"


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  butStart;
	private: System::Windows::Forms::Button^  butClose;

	private: System::Windows::Forms::TextBox^  txtBoxStatus;
	private: System::Windows::Forms::TextBox^  txtBoxResult;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->butStart = (gcnew System::Windows::Forms::Button());
			this->butClose = (gcnew System::Windows::Forms::Button());
			this->txtBoxStatus = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxResult = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// butStart
			// 
			this->butStart->Location = System::Drawing::Point(81, 123);
			this->butStart->Name = L"butStart";
			this->butStart->Size = System::Drawing::Size(114, 43);
			this->butStart->TabIndex = 0;
			this->butStart->Text = L"Start";
			this->butStart->UseVisualStyleBackColor = true;
			this->butStart->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// butClose
			// 
			this->butClose->Location = System::Drawing::Point(81, 209);
			this->butClose->Name = L"butClose";
			this->butClose->Size = System::Drawing::Size(114, 41);
			this->butClose->TabIndex = 1;
			this->butClose->Text = L"Close";
			this->butClose->UseVisualStyleBackColor = true;
			this->butClose->Click += gcnew System::EventHandler(this, &MyForm::butClose_Click);
			// 
			// txtBoxStatus
			// 
			this->txtBoxStatus->Location = System::Drawing::Point(26, 78);
			this->txtBoxStatus->Name = L"txtBoxStatus";
			this->txtBoxStatus->Size = System::Drawing::Size(219, 20);
			this->txtBoxStatus->TabIndex = 3;
			this->txtBoxStatus->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// txtBoxResult
			// 
			this->txtBoxResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBoxResult->Location = System::Drawing::Point(27, 23);
			this->txtBoxResult->Name = L"txtBoxResult";
			this->txtBoxResult->Size = System::Drawing::Size(217, 38);
			this->txtBoxResult->TabIndex = 4;
			this->txtBoxResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtBoxResult->WordWrap = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->txtBoxResult);
			this->Controls->Add(this->txtBoxStatus);
			this->Controls->Add(this->butClose);
			this->Controls->Add(this->butStart);
			this->Name = L"MyForm";
			this->Text = L"Backbone Programmer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->txtBoxStatus->Text = "START";
		this->txtBoxResult->BackColor = System::Drawing::Color::LightYellow;
		this->txtBoxStatus->BackColor = System::Drawing::Color::LightYellow;
		int s1 = 9;
		s1 = StartProgram();
		if (s1 == 1) {
			this->txtBoxResult->BackColor = System::Drawing::Color::Green;
			this->txtBoxResult->Text = "PASS";
		}
		if (s1 == 0) {
			this->txtBoxResult->BackColor = System::Drawing::Color::Red;
			this->txtBoxResult->Text = "FAIL";
			//this->txtBoxStatus->BackColor = System::Drawing::Color::Red;
		}
	}
	private: System::Void butClose_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void txtBoxResult_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
