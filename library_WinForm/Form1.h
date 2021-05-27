#pragma once
#include "pch.h"
#include "LoginPage.h"
#include "NewBookPage.h"
#include "Form2.h"

#include "Book.h"
#include "Books.h"
#include <vector>

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ btnNewBook;
	private: System::Windows::Forms::DataGridView^ dgvBooks;
	private: System::Windows::Forms::TextBox^ txbSearch;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cmbTypeSearch;
	private: System::Windows::Forms::Button^ btnSearch;




















	protected:



	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->btnNewBook = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dgvBooks = (gcnew System::Windows::Forms::DataGridView());
			this->txbSearch = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cmbTypeSearch = (gcnew System::Windows::Forms::ComboBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBooks))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->btnNewBook });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(792, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menu";
			// 
			// btnNewBook
			// 
			this->btnNewBook->Name = L"btnNewBook";
			this->btnNewBook->Size = System::Drawing::Size(91, 24);
			this->btnNewBook->Text = L"New book";
			this->btnNewBook->Click += gcnew System::EventHandler(this, &Form1::btnNewBook_Click);
			// 
			// dgvBooks
			// 
			this->dgvBooks->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvBooks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvBooks->Location = System::Drawing::Point(15, 90);
			this->dgvBooks->Name = L"dgvBooks";
			this->dgvBooks->ReadOnly = true;
			this->dgvBooks->RowHeadersWidth = 51;
			this->dgvBooks->RowTemplate->Height = 24;
			this->dgvBooks->Size = System::Drawing::Size(765, 477);
			this->dgvBooks->TabIndex = 1;
			this->dgvBooks->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dgvBooks_CellClick);
			// 
			// txbSearch
			// 
			this->txbSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbSearch->Location = System::Drawing::Point(153, 42);
			this->txbSearch->Multiline = true;
			this->txbSearch->Name = L"txbSearch";
			this->txbSearch->Size = System::Drawing::Size(327, 30);
			this->txbSearch->TabIndex = 2;
			this->txbSearch->Tag = L"";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(69, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 30);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Search : ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cmbTypeSearch
			// 
			this->cmbTypeSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbTypeSearch->FormattingEnabled = true;
			this->cmbTypeSearch->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"name", L"author", L"year", L"category" });
			this->cmbTypeSearch->Location = System::Drawing::Point(486, 41);
			this->cmbTypeSearch->Name = L"cmbTypeSearch";
			this->cmbTypeSearch->Size = System::Drawing::Size(133, 30);
			this->cmbTypeSearch->TabIndex = 4;
			this->cmbTypeSearch->Text = L"type Search";
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(625, 40);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(102, 31);
			this->btnSearch->TabIndex = 5;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &Form1::btnSearch_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(792, 579);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->cmbTypeSearch);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txbSearch);
			this->Controls->Add(this->dgvBooks);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Library";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBooks))->EndInit();
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

		DataTable^ getData(vector<Book> books)
		{
			DataTable^ data = gcnew DataTable();
			
			Type^ tInt = System::Type::GetType("System.Int32");
			Type^ tString = System::Type::GetType("System.String");
			Type^ tDouble = System::Type::GetType("System.Double");
			
			DataColumn^ dc1 = gcnew DataColumn("id", tInt);
			DataColumn^ dc2 = gcnew DataColumn("name", tString);
			DataColumn^ dc3 = gcnew DataColumn("category", tString);
			DataColumn^ dc4 = gcnew DataColumn("author", tString);
			DataColumn^ dc5 = gcnew DataColumn("yearOfPublication", tInt);
			DataColumn^ dc6 = gcnew DataColumn("versoin", tDouble);

			dc1->AllowDBNull = false;
			dc1->Caption = "id";
			dc1->ColumnName = "id";

			dc2->AllowDBNull = false;
			dc2->Caption = "name";
			dc2->ColumnName = "name";

			dc3->AllowDBNull = false;
			dc3->Caption = "category";
			dc3->ColumnName = "category";

			dc4->AllowDBNull = false;
			dc4->Caption = "author";
			dc4->ColumnName = "author";

			dc5->AllowDBNull = false;
			dc5->Caption = "Publication";
			dc5->ColumnName = "Publication";

			dc6->AllowDBNull = false;
			dc6->Caption = "versoin";
			dc6->ColumnName = "versoin";

			data->Columns->Add(dc1);
			data->Columns->Add(dc2);
			data->Columns->Add(dc3);
			data->Columns->Add(dc4);
			data->Columns->Add(dc5);
			data->Columns->Add(dc6);

			int count = 0;
			for (Book& book : books)
			{

				if (count > 40)
					break;

				data->Rows->Add(book.getId(), gcnew String(book.getName().c_str()), gcnew String(book.getCategory().c_str()), gcnew String(book.getAuthor().c_str()), book.getYearOfPublication(), book.getVersion());
				
				count++;

			}

			return data;
		}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		library_WinForm::LoginPage loginPage;
		loginPage.ShowDialog();
		Session session;
		if (!session.checkExist())
			this->Close();

		Books books;

		Book book1("a", "b", "c");
		Book book2("a", "b", "d");
		Book book3("a", "b", "f");
		Book book4("a", "b", "a");
		Book book5("a", "b", "a");
		Book book6("a", "b", "a");
		Book book7("a", "b", "a");
		Book book8("a", "b", "b");
		Book book9("a", "b", "c");
		Book book10("a", "b", "c");

		books.add(book1);
		books.add(book2);
		books.add(book3);
		books.add(book4);
		books.add(book5);
		books.add(book6);
		books.add(book7);
		books.add(book8);
		books.add(book9);
		books.add(book10);

		dgvBooks->DataSource = getData(books.getAll());
		dgvBooks->Columns["id"]->Visible = false;
	}
	
	private: System::Void btnNewBook_Click(System::Object^ sender, System::EventArgs^ e) {
		library_WinForm::NewBookPage newBookPage;
		newBookPage.ShowDialog();

		Books books;

		dgvBooks->DataSource = getData(books.getAll());
		dgvBooks->Columns["id"]->Visible = false;
	}

private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if(txbSearch->Text == "" || cmbTypeSearch->Text == "type Search")
	{
		MessageBox::Show("Select a type search", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	string text;

	MarshalString(txbSearch->Text, text);

	Books books;

	if (cmbTypeSearch->Text == "name")
	{

		dgvBooks->DataSource = getData(books.findByName(text));
		dgvBooks->Columns["id"]->Visible = false;

	} else if (cmbTypeSearch->Text == "category")
	{

		dgvBooks->DataSource = getData(books.findByCategory(text));
		dgvBooks->Columns["id"]->Visible = false;

	} else if (cmbTypeSearch->Text == "author")
	{

		dgvBooks->DataSource = getData(books.findByAuthor(text));
		dgvBooks->Columns["id"]->Visible = false;

	}
	else if (cmbTypeSearch->Text == "year")
	{

		dgvBooks->DataSource = getData(books.findByYearOfPublication(stoi(text)));
		dgvBooks->Columns["id"]->Visible = false;

	}
}

private: System::Void dgvBooks_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	if (e->RowIndex >= 0)
	{
		library_WinForm::Form2 profielBook;
		profielBook.BookId = Convert::ToInt32(dgvBooks->Rows[e->RowIndex]->Cells["id"]->Value->ToString());
		profielBook.ShowDialog();

		Books books;

		dgvBooks->DataSource = getData(books.getAll());
		dgvBooks->Columns["id"]->Visible = false;
	}
}
};
}
