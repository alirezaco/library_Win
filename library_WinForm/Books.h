#pragma once
#include <vector>
#include "Book.h"

using namespace std;

class Books
{
private:
	static vector<Book> books;
	static int id;
	int findIndexById(int id);

public:
	void add(Book book);
	void remove(int id);
	void update(int id, Book book);
	vector<Book> findByName(string name);
	Book *findById(int id);
	vector<Book> findByAuthor(string);
	vector<Book> findByYearOfPublication(int year);
	vector<Book> findByCategory(string category);
	vector<Book> getAll();

};

