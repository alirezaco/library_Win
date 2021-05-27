#include "pch.h"
#include "Books.h"
#include <vector>
#include "Book.h"

using namespace std;

vector<Book> Books::books;

int Books::findIndexById(int id)
{
	int index = 0;

	for (Book& book : books)
	{
		if (book.getId() == id)
		{
			return index;
		}

		index++;
	}

	throw "Error : book not find";
}

void Books::add(Book book)
{
	books.push_back(book);
}

void Books::remove(int id)
{
	int index = findIndexById(id);

	books.erase(books.begin() + index);
}

vector<Book> Books::findByName(string name)
{
	vector<Book> booksWithName;
	for (Book& book : books)
	{
		if (book.getName() == name)
		{
			 booksWithName.push_back(book);
		}
	}
	return booksWithName;
}

Book *Books::findById(int id)
{
	int index = findIndexById(id);
	return &books.at(index);
}

vector<Book> Books::findByAuthor(string author)
{
	vector<Book> booksAouthor;
	
	for (Book& book : books)
	{
		if (book.getAuthor() == author)
		{
			booksAouthor.push_back(book);
		}
	}
	return booksAouthor;
}

vector<Book> Books::findByYearOfPublication(int year)
{
	vector<Book> bookWithYear;

	for (Book& book : books)
	{
		if (book.getYearOfPublication() == year)
		{
			bookWithYear.push_back(book);
		}
	}
	return bookWithYear;
}

vector<Book> Books::findByCategory(string category)
{
	vector<Book> booksCategory;

	for (Book& book : books)
	{
		if (book.getCategory() == category)
		{
			booksCategory.push_back(book);
		}
	}
	return booksCategory;
}

vector<Book> Books::getAll()
{
	return this->books;
}

