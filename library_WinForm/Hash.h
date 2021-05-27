#pragma once
#include <string>

using namespace std;

class Hash
{
private:
	string solt = "$sfgfd%gdgsurondkinc259tjisegkiylobg4sfffs3d8fgh8cjhgj*!jgdr$%rs2sw2rt8dkkk59684iftghpbd";
	string coding(string str);
	string encoding(string str);
	
public:
	string hashing(string str);
	bool compare(string hash, string str);
};


