#pragma once
#include "User.h"

class Session
{
private:
	static User user;
	static bool isExist;

public:
	void add(User user);
	void remove();
	void update(User user);
	bool checkExist();
	User getUser();
};

