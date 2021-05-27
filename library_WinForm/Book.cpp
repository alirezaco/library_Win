#define _CRT_SECURE_NO_WARNINGS

#include "pch.h"
#include "Book.h"
#include <string>
#include <time.h>
#include "Borrowing.h"

using namespace std;

int Book::ids = 1;

Book::Book(string name, string category, string author)
{
	this->category = category;
	this->author = author;
	this->name = name;
	time_t now = time(0);
	this->createAt = ctime(&now);
	this->versoin = 1;
	this->yearOfPublication = 2000;
	this->isExist = true;
	this->id = ids;
	ids++;
}

void Book::setVersion(double version)
{
	this->versoin = version;
}

void Book::setYearOfPublication(int year)
{
	this->yearOfPublication = year;
}

string Book::getName()
{
	return name;
}

string Book::getCategory()
{
	return category;
}

string Book::getAuthor()
{
	return author;
}

int Book::getYearOfPublication()
{
	return this->yearOfPublication;
}

double Book::getVersion()
{
	return this->versoin;
}

string Book::getCreateAt()
{
	return createAt;
}

bool Book::checkExist()
{
	return isExist;
}

int Book::getId()
{
	return id;
}

void Book::borrow(User user, string dateGet, string dateSend)
{

	this->borrowing =  Borrowing(user, dateGet, dateSend);

	isExist = false;
	
}

Borrowing Book::getBorrow()
{
	return this->borrowing;
}
