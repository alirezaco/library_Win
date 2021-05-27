#include "pch.h"
#include "Session.h"

bool Session::isExist = false;
User Session::user;

void Session::add(User user)
{
	this->user = user;
	this->isExist = true;
}

void Session::remove()
{
	this->isExist = false;
}

void Session::update(User user)
{
	this->user = user;
}

bool Session::checkExist()
{
	return this->isExist;
}

User Session::getUser()
{
	return user;
}


