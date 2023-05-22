#pragma once
#include <iostream>
#include <string>
using namespace std;

class Member
{
public:
	Member();
	Member(string name, string ssn, string id, string password);

	string GetID() { return id; }
	string GetPassword() { return password; }

private:
	string name;
	string ssn;
	string id;
	string password;
};
