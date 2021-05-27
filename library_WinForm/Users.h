#pragma once
#include <string>
#include <vector>
#include "User.h"

using namespace std;

class Users
{
private:
	static vector<User> users;
	int findIndexByNationalNumber(string);

public:
	void add(User user);
	User findByNationalNumber(string nationalNumber);
	void removeByNationalNumber(string nationalNumber);

};


