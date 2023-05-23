#include "Member.h"

Member::Member()
{
	this->user_type = 0;
	this->name = "";
	this->ssn = "";
	this->id = "";
	this->password = "";
}

Member::Member(int user_type, string name, string ssn, string id, string password)
{
	this->user_type = user_type;
	this->name = name;
	this->ssn = ssn;
	this->id = id;
	this->password = password;
}