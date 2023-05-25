#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
using namespace std;

class DataBase
{
public:
	DataBase();

	vector<Member*> getMemberList() { return memberList; }

    void addNewCompanyMember(Member* companyMember);
	void addNewGeneralMember(Member* generalMember);

    void deleteMember(int index) { memberList.erase(memberList.begin()+index); }

	void setLoginIndex(int i) { loginIndex = i; }
	int getLoginIndex() { return loginIndex; }
private:
	vector<Member*> memberList;
    int loginIndex;
};