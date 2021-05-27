#pragma once
#include "User.h"
#include <string>

class Borrowing
{
private:
	User user;
	std::string dateGet;
	std::string dateSent;
	
public:
	Borrowing(User user, std::string dateGet, std::string dateSend);
	Borrowing() {}
	std::string getDateGet();
	std::string getDateSend();
	User getUser();

};

