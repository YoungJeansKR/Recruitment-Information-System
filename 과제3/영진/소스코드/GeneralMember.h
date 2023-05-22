#pragma once
#ifndef __GENERAL_MEMBER_H__
#define __GENERAL_MEMBER_H__

#include "Member.h"
#include <string>
using namespace std;

class GeneralMember : public Member
{
private:
	string residentId;	// �ֹι�ȣ
public:
	GeneralMember()
		: Member()
	{ }
	GeneralMember(string name, string residentId, string id, string password)
		: Member(name, residentId, id, password)
	{ }
};
#endif // !__GENERAL_MEMBER_H__