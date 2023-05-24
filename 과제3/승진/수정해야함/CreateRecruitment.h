#pragma once
#include <iostream>

class Database;
class CreateRecruitmentUI;

class CreateRecruitment
{
public:
	CreateRecruitment();
	CreateRecruitment(DataBase* database);

	CreateRecruitmentUI* GetCreateRecruitmentUI() { return createRecruitmentUI; }

	void addNewRecruitment(std::string task, std::string capacity, std::string deadline);

private:
	DataBase* database;
	CreateRecruitmentUI* createRecruitmentUI;
};