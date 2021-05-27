#pragma once
#include "pch.h"
#include "Books.h"
#include "Book.h"
#include "UserPage.h"

namespace library_WinForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^ btnDelete;
	public:
	private: System::Windows::Forms::Button^ btnBorrowing;

	public: int BookId = -1;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txbName;
	private: System::Windows::Forms::TextBox^ txbCategory;
	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txbVersion;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txbAuthor;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txbExist;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txbCreateAt;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txbYear;

	private: System::Windows::Forms::Label^ label8;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txbName = (gcnew System::Windows::Forms::TextBox());
			this->txbCategory = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txbVersion = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txbAuthor = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txbExist = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txbCreateAt = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txbYear = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnBorrowing = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(12, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"name :";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txbName
			// 
			this->txbName->Location = System::Drawing::Point(118, 34);
			this->txbName->Multiline = true;
			this->txbName->Name = L"txbName";
			this->txbName->ReadOnly = true;
			this->txbName->Size = System::Drawing::Size(351, 35);
			this->txbName->TabIndex = 1;
			// 
			// txbCategory
			// 
			this->txbCategory->Location = System::Drawing::Point(118, 78);
			this->txbCategory->Multiline = true;
			this->txbCategory->Name = L"txbCategory";
			this->txbCategory->ReadOnly = true;
			this->txbCategory->Size = System::Drawing::Size(351, 35);
			this->txbCategory->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(12, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 35);
			this->label2->TabIndex = 2;
			this->label2->Text = L"category :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txbVersion
			// 
			this->txbVersion->Location = System::Drawing::Point(118, 169);
			this->txbVersion->Multiline = true;
			this->txbVersion->Name = L"txbVersion";
			this->txbVersion->ReadOnly = true;
			this->txbVersion->Size = System::Drawing::Size(351, 35);
			this->txbVersion->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(12, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 35);
			this->label3->TabIndex = 6;
			this->label3->Text = L"version :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txbAuthor
			// 
			this->txbAuthor->Location = System::Drawing::Point(118, 125);
			this->txbAuthor->Multiline = true;
			this->txbAuthor->Name = L"txbAuthor";
			this->txbAuthor->ReadOnly = true;
			this->txbAuthor->Size = System::Drawing::Size(351, 35);
			this->txbAuthor->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(12, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 35);
			this->label4->TabIndex = 4;
			this->label4->Text = L"author :";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txbExist
			// 
			this->txbExist->Location = System::Drawing::Point(118, 306);
			this->txbExist->Multiline = true;
			this->txbExist->Name = L"txbExist";
			this->txbExist->ReadOnly = true;
			this->txbExist->Size = System::Drawing::Size(351, 35);
			this->txbExist->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(12, 306);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 35);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Exist :";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txbCreateAt
			// 
			this->txbCreateAt->Location = System::Drawing::Point(118, 259);
			this->txbCreateAt->Multiline = true;
			this->txbCreateAt->Name = L"txbCreateAt";
			this->txbCreateAt->ReadOnly = true;
			this->txbCreateAt->Size = System::Drawing::Size(351, 35);
			this->txbCreateAt->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(12, 259);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 35);
			this->label7->TabIndex = 10;
			this->label7->Text = L"create at :";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txbYear
			// 
			this->txbYear->Location = System::Drawing::Point(118, 215);
			this->txbYear->Multiline = true;
			this->txbYear->Name = L"txbYear";
			this->txbYear->ReadOnly = true;
			this->txbYear->Size = System::Drawing::Size(351, 35);
			this->txbYear->TabIndex = 9;
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(12, 215);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 35);
			this->label8->TabIndex = 8;
			this->label8->Text = L"populication :";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(118, 366);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(123, 35);
			this->btnDelete->TabIndex = 14;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &Form2::btnDelete_Click);
			// 
			// btnBorrowing
			// 
			this->btnBorrowing->Location = System::Drawing::Point(346, 366);
			this->btnBorrowing->Name = L"btnBorrowing";
			this->btnBorrowing->Size = System::Drawing::Size(123, 35);
			this->btnBorrowing->TabIndex = 15;
			this->btnBorrowing->Text = L"Borrowing";
			this->btnBorrowing->UseVisualStyleBackColor = true;
			this->btnBorrowing->Click += gcnew System::EventHandler(this, &Form2::btnBorrowing_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(527, 428);
			this->Controls->Add(this->btnBorrowing);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->txbExist);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txbCreateAt);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txbYear);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txbVersion);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txbAuthor);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txbCategory);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txbName);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form2";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Book";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e) {

		Books books;

		Book *book = books.findById(BookId);

		txbName->Text = gcnew String(book->getName().c_str());

		txbCategory->Text = gcnew String(book->getCategory().c_str());

		txbAuthor->Text = gcnew String(book->getAuthor().c_str());

		txbYear->Text = Convert::ToString(book->getYearOfPublication());

		txbVersion->Text = Convert::ToString(book->getVersion());

		txbCreateAt->Text = gcnew String(book->getCreateAt().c_str());

		txbExist->Text = Convert::ToString(book->checkExist());

		if (!book->checkExist())
			btnBorrowing->Text = "User";

	}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Books books;

	if (MessageBox::Show("Do you want to delete the book?", "Warnning", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == Windows::Forms::DialogResult::OK)
	{

		books.remove(BookId);

		this->Close();

	}
}
private: System::Void btnBorrowing_Click(System::Object^ sender, System::EventArgs^ e) {
	
	library_WinForm::UserPage userPage;

	if (btnBorrowing->Text == "User")
	{
		userPage.type = "User";
	}

	userPage.bookId = BookId;
	
	userPage.ShowDialog();

	Books books;

	Book* book = books.findById(BookId);

	txbExist->Text = Convert::ToString(book->checkExist());

	if (!book->checkExist())
		btnBorrowing->Text = "User";
	
}
};
}
