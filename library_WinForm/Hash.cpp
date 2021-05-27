#include "pch.h"
#include "Hash.h"
#include <string>

using namespace std;

string Hash::coding(string str)
{
	int first = (rand() % 10) * (rand() % 8);
	string result = solt.substr(first, 5);

	for (int i = 0; i < str.length(); i++)
	{
		result += (str[i] + 10);
	}

	int end = (rand() % 10) * (rand() % 8);
	result += solt.substr(end, 5);

	return result;
}

string Hash::encoding(string str)
{
	string result = "";
	for (int i = 5; i < str.length() - 5 ; i++)
	{
		result += str[i] - 10;
	}
	return result;
}

string Hash::hashing(string str)
{
	return coding(str);
}

bool Hash::compare(string hash, string str)
{
	if (encoding(hash) == str)
	{
		return true;
	}
	return false;
}