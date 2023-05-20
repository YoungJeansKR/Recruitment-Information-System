#pragma once
#include "Member.h"
#include<vector>

class Recruitment;

class CompanyMember : public Member
{
public:
	CompanyMember();
	CompanyMember(std::string companyName, std::string businessId, std::string id, std::string password);

private:
	std::string companyName;
	std::string businessId;
	std::vector<Recruitment*> recruitmentList;
};