#include "pch.h"
#include "Users.h"
#include <vector>
#include <string>
#include "User.h";

using namespace std;

vector<User> Users::users;

int Users::findIndexByNationalNumber(string nationalNumber)
{
	int index = 0;
	for (User& user : users)
	{
		if (user.getNationalNumber() == nationalNumber)
			return index;
		index++;
	}
	return -1;
}

void Users::add(User user)
{
	users.push_back(user);
}

User Users::findByNationalNumber(string nationalNumber)
{
	int index = findIndexByNationalNumber(nationalNumber);

	if (index == -1)
		throw "Error :  user not found";

	return users.at(index);
}

void Users::removeByNationalNumber(string nationalNumber)
{
	int index = findIndexByNationalNumber(nationalNumber);

	if (index == -1)
		throw "Error : user not found";
	
	users.erase(users.begin() + index);
}
