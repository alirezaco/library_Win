#pragma once
#include "Session.h"
#include "User.h"
#include "Users.h"

namespace library_WinForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginPage
	/// </summary>
	public ref class LoginPage : public System::Windows::Forms::Form
	{
	public:
		LoginPage(void)
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
		~LoginPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txbUsername;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txbPassword;
	private: System::Windows::Forms::Button^ btnLogin;



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
			this->txbUsername = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txbUsername
			// 
			this->txbUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbUsername->Location = System::Drawing::Point(138, 51);
			this->txbUsername->Multiline = true;
			this->txbUsername->Name = L"txbUsername";
			this->txbUsername->Size = System::Drawing::Size(290, 35);
			this->txbUsername->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 35);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Username : ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(7, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 35);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txbPassword
			// 
			this->txbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbPassword->Location = System::Drawing::Point(138, 105);
			this->txbPassword->Multiline = true;
			this->txbPassword->Name = L"txbPassword";
			this->txbPassword->PasswordChar = '*';
			this->txbPassword->Size = System::Drawing::Size(290, 35);
			this->txbPassword->TabIndex = 2;
			// 
			// btnLogin
			// 
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"MS Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->Location = System::Drawing::Point(15, 158);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(413, 35);
			this->btnLogin->TabIndex = 4;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LoginPage::btnLogin_Click);
			// 
			// LoginPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(460, 219);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txbPassword);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txbUsername);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"LoginPage";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"LoginPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {

	User user("1236548", "alireza", "ali@gmail.com", "0912111111");
	Users users;
	users.add(user);

	if(txbUsername->Text == "alireza")
		if (txbPassword->Text == "1234")
		{
			Session session;
			session.add(user);
			MessageBox::Show("Username and password is correct!", "successfully", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
			return;
		}
	MessageBox::Show("Username and password is incorrect!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
};
}
