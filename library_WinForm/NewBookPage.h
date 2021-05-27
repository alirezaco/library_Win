#pragma once
#include "Book.h"
#include "Books.h"
#include <string>


namespace library_WinForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for NewBookPage
	/// </summary>
	public ref class NewBookPage : public System::Windows::Forms::Form
	{
	public:
		NewBookPage(void)
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
		~NewBookPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txbName;
	private: System::Windows::Forms::TextBox^ txbAuthor;
	protected:


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txbCategory;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txbYear;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txbVersion;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;

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
			this->txbAuthor = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txbCategory = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txbYear = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txbVersion = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(30, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"name :";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txbName
			// 
			this->txbName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbName->Location = System::Drawing::Point(123, 29);
			this->txbName->Multiline = true;
			this->txbName->Name = L"txbName";
			this->txbName->Size = System::Drawing::Size(269, 40);
			this->txbName->TabIndex = 1;
			// 
			// txbAuthor
			// 
			this->txbAuthor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbAuthor->Location = System::Drawing::Point(123, 121);
			this->txbAuthor->Multiline = true;
			this->txbAuthor->Name = L"txbAuthor";
			this->txbAuthor->Size = System::Drawing::Size(269, 40);
			this->txbAuthor->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(30, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 40);
			this->label4->TabIndex = 6;
			this->label4->Text = L"author :";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txbCategory
			// 
			this->txbCategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbCategory->Location = System::Drawing::Point(123, 75);
			this->txbCategory->Multiline = true;
			this->txbCategory->Name = L"txbCategory";
			this->txbCategory->Size = System::Drawing::Size(269, 40);
			this->txbCategory->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(30, 75);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 40);
			this->label5->TabIndex = 8;
			this->label5->Text = L"category :";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txbYear
			// 
			this->txbYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbYear->Location = System::Drawing::Point(123, 213);
			this->txbYear->Multiline = true;
			this->txbYear->Name = L"txbYear";
			this->txbYear->Size = System::Drawing::Size(269, 40);
			this->txbYear->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(12, 213);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 40);
			this->label2->TabIndex = 14;
			this->label2->Text = L"publication :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txbVersion
			// 
			this->txbVersion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbVersion->Location = System::Drawing::Point(123, 167);
			this->txbVersion->Multiline = true;
			this->txbVersion->Name = L"txbVersion";
			this->txbVersion->Size = System::Drawing::Size(269, 40);
			this->txbVersion->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(30, 167);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 40);
			this->label6->TabIndex = 10;
			this->label6->Text = L"versoin :";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(123, 259);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(269, 40);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NewBookPage::button1_Click);
			// 
			// NewBookPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(441, 322);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txbYear);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txbVersion);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txbCategory);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txbAuthor);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txbName);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"NewBookPage";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"NEW BOOK";
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

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (txbAuthor->Text != "" && txbCategory->Text != "" && txbName->Text != "")
	{
		std::string name, author, category;

		//convert system string to std string
		MarshalString(txbName->Text, name);
		MarshalString(txbCategory->Text, category);
		MarshalString(txbAuthor->Text, author);

		Book newBook(name, category, author); // create new Book

		//set version
		if (txbVersion->Text != "")
			newBook.setVersion(Convert::ToDouble(txbVersion->Text));
		
		//set year of publication
		if (txbYear->Text != "")
			newBook.setYearOfPublication(Convert::ToInt64(txbYear->Text));

		Books books;

		books.add(newBook);

		MessageBox::Show("book saved!!!", "Successfully", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Close();
		
		return;
	}

	MessageBox::Show("please enter inputs", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

}
};
}
