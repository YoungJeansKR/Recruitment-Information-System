#include "ListMyRecruitment.h"
#include "ListMyRecruitmentUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "CompanyMember.h"

ListMyRecruitment::ListMyRecruitment()
{
	this->database = nullptr;
	ListMyRecruitmentUI* listMyRecruitmentUI = new ListMyRecruitmentUI();
	listMyRecruitmentUI->StartInterface();
}

ListMyRecruitment::ListMyRecruitment(DataBase* database)
{
	this->database = database;
	ListMyRecruitmentUI* listMyRecruitmentUI = new ListMyRecruitmentUI();
	listMyRecruitmentUI->StartInterface();
}

std::vector<Recruitment*> ListMyRecruitment::ShowMyRecruitments()
{
	CompanyMember* companymember = database->listRecruitments()[database->GetLogInIndex()];
	return CompanyMember->listRecruitments();

}
