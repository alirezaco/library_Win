#include "pch.h"
#include "Borrowing.h"
#include <string>

Borrowing::Borrowing(User user, std::string dateGet, std::string dateSend)
{
	this->user = user;
	this->dateGet = dateGet;
	this->dateSent = dateSend;
}

std::string Borrowing::getDateGet()
{
	return this->dateGet;
}

std::string Borrowing::getDateSend()
{
	return this->dateSent;
}

User Borrowing::getUser()
{
	return this->user;
}
