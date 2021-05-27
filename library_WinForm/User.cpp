#include "pch.h"
#include "User.h"

User::User(string nationalNumber, string name, string email, string phoneNumber)
{
	this->nationalNumber = nationalNumber;
	this->name = name;
	this->email = email;
	this->phoneNumber = phoneNumber;
}

string User::getNationalNumber()
{
	return this->nationalNumber;
}

string User::getName()
{
	return name;
}

string User::getEmail()
{
	return email;
}

string User::getPhoneNumber()
{
	return phoneNumber;
}
