#pragma once
#include "Member.h"
#include <string>
using namespace std;

class CompanyMember : public Member
{
public:
	CompanyMember()
		: Member()
	{ }
	CompanyMember(int user_type, string name, string businessId, string id, string password)
		: Member(user_type, name, businessId, id, password)
	{ }
private:
};
