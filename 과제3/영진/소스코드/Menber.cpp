#include "Member.h"

Member::Member()
{

}

Member::Member(string name, string ssn, string id, string password)
{
	this->name = name;
	this->ssn = ssn;
	this->id = id;
	this->password = password;
}