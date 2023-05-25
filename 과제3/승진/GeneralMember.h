#pragma once
#include "Member.h"
#include <string>
using namespace std;

class GeneralMember : public Member
{
public:
	GeneralMember()
		: Member()
	{ }
	GeneralMember(int user_type, string name, string residentId, string id, string password)
		: Member(user_type, name, residentId, id, password)
	{ }
private:
};
