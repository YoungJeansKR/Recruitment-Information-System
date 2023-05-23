#pragma once
#ifndef __COMPANY_MEMBER_H__
#define __COMPANY_MEMBER_H__

#include "Member.h"
#include <string>
using namespace std;

class CompanyMember : public Member
{
private:
	string businessId;	// ����ڹ�ȣ
public:
	CompanyMember()
		: Member()
	{ }
	CompanyMember(string name, string businessId, string id, string password)
		: Member(name, businessId, id, password)
	{ }
};
#endif // !__COMPANY_MEMBER_H__
