#include "ListMyRecruitment.h"
#include "ListMyRecruitmentUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "CompanyMember.h"

ListMyRecruitment::ListMyRecruitment()
{
	this->database = nullptr;
	ListMyRecruitmentUI* listMyRecruitmentUI = new ListMyRecruitmentUI();
	listMyRecruitmentUI->startInterface();
}

ListMyRecruitment::ListMyRecruitment(DataBase* database)
{
	this->database = database;
	ListMyRecruitmentUI* listMyRecruitmentUI = new ListMyRecruitmentUI();
	listMyRecruitmentUI->startInterface();
}

std::vector<Recruitment*> ListMyRecruitment::ShowMyRecruitments()
{
	Member* member = database->getCompanyMemberList()[database->getLoginIndex()];
	return member->getRecruitmentList();
}

