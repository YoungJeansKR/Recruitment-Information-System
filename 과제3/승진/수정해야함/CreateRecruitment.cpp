#include "CreateRecruitment.h"
#include "CreateRecruitmentUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "CompanyMember.h"

CreateRecruitment::CreateRecruitment()
{
	this->database = nullptr;
	createRecruitmentUI = new CreateRecruitmentUI();
	createRecruitmentUI->startInterface();
}

CreateRecruitment::CreateRecruitment(DataBase* database)
{
	this->database = database;
	createRecruitmentUI = new CreateRecruitmentUI();
	createRecruitmentUI->startInterface();
}

void CreateRecruitment::addNewRecruitment(std::string task, std::string capacity, std::string deadline)
{
	CompanyMember* companymember = database->getCompanyMemberList()[database->getLogInIndex()];
	Recruitment* newRecruitment = new Recruitment(task, capacity, deadline);
}