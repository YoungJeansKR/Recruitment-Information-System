#pragma once
#include "Member.h"
#include <vector>
#include <string>
using namespace std;

class Recruitment;

class GeneralMember : public Member
{
public:
	GeneralMember();

	GeneralMember(int user_type, string name, string residentId, string id, string password)
		: Member(user_type, name, residentId, id, password)
	{ }

    void createApply(Recruitment* recruitment);
    std::vector<Recruitment*> getRecruitmentList() { return recruitmentList; }
private:
    std::vector<Recruitment*> recruitmentList;
};
