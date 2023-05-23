#include "CreateRecruitment.h"
#include "CreateRecruitmentUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "CompanyMember.h"

CreateRecruitment::CreateRecruitment()
{
	this->dataBase = nullptr;
	createRecruitmentUI = new CreateRecruitmentUI();
	createRecruitmentUI->StartInterface();
}

CreateRecruitment::CreateRecruitment(DataBase* dataBase)
{
	this->dataBase = dataBase;
	createRecruitmentUI = new CreateRecruitmentUI();
	createRecruitmentUI->StartInterface();
}

void CreateRecruitment::CreateRecruitment(std::string task, int capacity, std::string deadline)
{
	CompanyMember* companymember = dataBase->GetCompanyMemberList()[dataBase->GetLogInIndex()];
	Recruitment* newRecruitment = new Recruitment(task, capacity, deadline);
}