#pragma once
#include <string>
#include "Borrowing.h"
#include "pch.h"

using namespace std;

class Book
{
private:
	static int ids;
	int id;
	string name;
	string category;
	string createAt;
	string author;
	int yearOfPublication;
	double versoin;
	bool isExist;
	Borrowing borrowing;

public:
	Book(string name, string category, string author);
	void setVersion(double version);
	void setYearOfPublication(int year);
	string getName();
	string getCategory();
	string getAuthor();
	int getYearOfPublication();
	double getVersion();
	string getCreateAt();
	bool checkExist();
	int getId();
	void borrow(User user, string dateGet, string dateSend);
	Borrowing getBorrow();
};


