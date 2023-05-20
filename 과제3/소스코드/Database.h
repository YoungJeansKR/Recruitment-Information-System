#pragma once
#include <vector>

class Member;
class GeneralMember;
class CompanyMember;

class DataBase
{
public:
	DataBase();

	std::vector<Member*> GetMemberList() { return memberList; }
	std::vector<GeneralMember*> GetGeneralMemberList() { return generalMemberList; }
	std::vector<CompanyMember*> GetCompanyMemberList() { return companyMemberList; }

private:
	std::vector<Member*> memberList;
	std::vector<GeneralMember*> generalMemberList;
	std::vector<CompanyMember*> companyMemberList;
};