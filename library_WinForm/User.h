#pragma once
#include <string>

using namespace std;

class User
{
private:
	string nationalNumber;
	string name;
	string email;
	string phoneNumber;

public:
	User(string nationalNumber, string name, string email, string phoneNumber);
	User() {}
	string getNationalNumber();
	string getName();
	string getEmail();
	string getPhoneNumber();

};

