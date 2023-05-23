#pragma once
#include <vector>

class Member;
class ListMyRecruitmentUI;
class Recruitment;

class ListMyRecruitment
{
public:
	ListMyRecruitment();
	ListMyRecruitment(Member* member);

	ListMyRecruitmentUI* GetListMyRecruitmentUI() { return listMyRecruitmentUI; }

	std::vector<Recruitment*> ShowMyRecruitments();

private:
	Member* member;
	ListMyRecruitmentUI* listMyRecruitmentUI;
};