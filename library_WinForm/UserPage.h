#pragma once
#include "User.h"
#include "Users.h"
#include "Books.h"
#include "Book.h"
#include "Borrowing.h"

namespace library_WinForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserPage
	/// </summary>
	public ref class UserPage : public System::Windows::Forms::Form
	{
	public:
		UserPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	public:String^ type = "Save";
	private: System::Windows::Forms::DateTimePicker^ dtpGet;
	public:
	private: System::Windows::Forms::Label^ lblGet;

	public:int bookId;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txbNational;
	private: System::Windows::Forms::TextBox^ txbName;
	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txbPhone;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txbEmail;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dtpTime;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txbNational = (gcnew System::Windows::Forms::TextBox());
			this->txbName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txbPhone = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dtpTime = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpGet = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblGet = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(12, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"National number:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txbNational
			// 
			this->txbNational->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbNational->Location = System::Drawing::Point(141, 27);
			this->txbNational->Multiline = true;
			this->txbNational->Name = L"txbNational";
			this->txbNational->Size = System::Drawing::Size(254, 32);
			this->txbNational->TabIndex = 1;
			// 
			// txbName
			// 
			this->txbName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbName->Location = System::Drawing::Point(141, 72);
			this->txbName->Multiline = true;
			this->txbName->Name = L"txbName";
			this->txbName->Size = System::Drawing::Size(254, 32);
			this->txbName->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(12, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Name:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txbPhone
			// 
			this->txbPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbPhone->Location = System::Drawing::Point(141, 164);
			this->txbPhone->Multiline = true;
			this->txbPhone->Name = L"txbPhone";
			this->txbPhone->Size = System::Drawing::Size(254, 32);
			this->txbPhone->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(12, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 32);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Phone number:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txbEmail
			// 
			this->txbEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbEmail->Location = System::Drawing::Point(141, 119);
			this->txbEmail->Multiline = true;
			this->txbEmail->Name = L"txbEmail";
			this->txbEmail->Size = System::Drawing::Size(254, 32);
			this->txbEmail->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(12, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 32);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Email:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(141, 269);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(111, 32);
			this->btnCancel->TabIndex = 8;
			this->btnCancel->Text = L"cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &UserPage::btnCancel_Click);
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(284, 269);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(111, 32);
			this->btnSave->TabIndex = 9;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &UserPage::btnSave_Click);
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(12, 214);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 32);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Delivery time:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// dtpTime
			// 
			this->dtpTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpTime->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpTime->Location = System::Drawing::Point(141, 214);
			this->dtpTime->MinDate = System::DateTime(2021, 1, 1, 0, 0, 0, 0);
			this->dtpTime->Name = L"dtpTime";
			this->dtpTime->Size = System::Drawing::Size(254, 32);
			this->dtpTime->TabIndex = 12;
			// 
			// dtpGet
			// 
			this->dtpGet->Enabled = false;
			this->dtpGet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpGet->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpGet->Location = System::Drawing::Point(141, 264);
			this->dtpGet->MinDate = System::DateTime(2021, 1, 1, 0, 0, 0, 0);
			this->dtpGet->Name = L"dtpGet";
			this->dtpGet->Size = System::Drawing::Size(254, 32);
			this->dtpGet->TabIndex = 14;
			this->dtpGet->Visible = false;
			// 
			// lblGet
			// 
			this->lblGet->Location = System::Drawing::Point(12, 264);
			this->lblGet->Name = L"lblGet";
			this->lblGet->Size = System::Drawing::Size(123, 32);
			this->lblGet->TabIndex = 13;
			this->lblGet->Text = L"Date Received:";
			this->lblGet->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblGet->Visible = false;
			// 
			// UserPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(407, 315);
			this->Controls->Add(this->dtpGet);
			this->Controls->Add(this->lblGet);
			this->Controls->Add(this->dtpTime);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->txbPhone);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txbEmail);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txbName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txbNational);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"UserPage";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Borrowing";
			this->Load += gcnew System::EventHandler(this, &UserPage::UserPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void MarshalString(String^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

	private: System::Void UserPage_Load(System::Object^ sender, System::EventArgs^ e) {

		if (type != "Save")
		{
			btnSave->Visible = false;
			btnCancel->Visible = false;

			lblGet->Visible = true;
			dtpGet->Visible = true;

			txbEmail->ReadOnly = true;
			txbName->ReadOnly = true;
			txbNational->ReadOnly = true;
			txbPhone->ReadOnly = true;
			dtpTime->Enabled = false;
			
			Books books;

			Book *book = books.findById(bookId);

			Borrowing borrow = book->getBorrow();

			txbEmail->Text = gcnew String(borrow.getUser().getEmail().c_str());
			txbName->Text = gcnew String(borrow.getUser().getName().c_str());
			txbNational->Text = gcnew String(borrow.getUser().getNationalNumber().c_str());
			txbPhone->Text = gcnew String(borrow.getUser().getPhoneNumber().c_str());
			dtpTime->Value = Convert::ToDateTime(gcnew String(borrow.getDateSend().c_str()));
			dtpGet->Value = Convert::ToDateTime(gcnew String(borrow.getDateGet().c_str()));

		}
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (MessageBox::Show("Do you want to be saved?", "warnning", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == Windows::Forms::DialogResult::OK)
	{

		string national, name, email, phone, time, now;

		MarshalString(txbEmail->Text, email);
		MarshalString(txbName->Text, name);
		MarshalString(txbPhone->Text, phone);
		MarshalString(txbNational->Text, national);
		MarshalString(dtpTime->Value.ToString(), time);
		MarshalString(System::DateTime::Now.ToString(), now);

		User user(national, name, email, phone);

		Users users;
		users.add(user);

		Books books;

		Book* book = books.findById(bookId);

		book->borrow(user, now, time);

		this->Close();

	}
	
}
};
}
