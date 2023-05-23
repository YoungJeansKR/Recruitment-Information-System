#pragma once
#include <iostream>

class Member;
class CreateRecruitmentUI;

class CreateRecruitment
{
public:
	CreateRecruitment();
	CreateRecruitment(Member* member);

	CreateRecruitmentUI* GetCreateRecruitmentUI() { return createRecruitmentUI; }

	void addNewRecruitment(std::string task, std::string capacity, std::string deadline);

private:
	Member* member;
	CreateRecruitmentUI* createRecruitmentUI;
};