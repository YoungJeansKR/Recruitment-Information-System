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

	ListMyRecruitmentUI* getListMyRecruitmentUI() { return listMyRecruitmentUI; }

	std::vector<Recruitment*> showMyRecruitments();

private:
	DataBase* dataBase;
	ListMyRecruitmentUI* listMyRecruitmentUI;
};