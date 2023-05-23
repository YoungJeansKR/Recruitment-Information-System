#pragma once
#include "Member.h"
#include <vector>

class Apply;

class GeneralMember : public Member
{
public:
	GeneralMember(std::string name, std::string residentId, std::string id, std::string password);

private:
	std::string name;
	std::string residentId;
	std::vector<Apply*> applyList;
};