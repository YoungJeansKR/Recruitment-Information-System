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

	void addNewCompanyMember(Member* companymember);
	void addNewGeneralMember(Member* generalmember);

private:
	vector<Member*> memberList;
};