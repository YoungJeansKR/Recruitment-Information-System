#pragma once
#include <vector>

class DataBase;
class ListMyRecruitmentUI;
class Recruitment;

class ListMyRecruitment
{
public:
	ListMyRecruitment();
	ListMyRecruitment(DataBase* dataBase);

	ListMyRecruitmentUI* GetListMyRecruitmentUI() { return listMyRecruitmentUI; }

	std::vector<Recruitment*> ShowMyRecruitment();

private:
	DataBase* dataBase;
	ListMyRecruitmentUI* listMyRecruitmentUI;
};