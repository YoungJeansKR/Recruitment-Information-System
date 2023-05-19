#pragma once
#include "Member.h"
#include<vector>

class Recruitment;

class CompanyMember : public Member
{
public:
	CompanyMember();

private:
	std::vector<Recruitment*> recruitmentList;
};