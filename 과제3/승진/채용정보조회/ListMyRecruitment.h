#pragma once
#include <vector>

class DataBase;
class ListMyRecruitmentUI;
class Recruitment;

class ListMyRecruitment
{
public:
	ListMyRecruitment();
	ListMyRecruitment(DataBase* database);

	ListMyRecruitmentUI* GetListMyRecruitmentUI() { return listMyRecruitmentUI; }

	std::vector<Recruitment*> ShowMyRecruitments();

private:
	DataBase* database;
	ListMyRecruitmentUI* listMyRecruitmentUI;
};