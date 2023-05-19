#pragma once
#include "Member.h"
#include <vector>

class Apply;

class GeneralMember : public Member
{
public:
	GeneralMember();

private:
	std::vector<Apply*> applyList;

};