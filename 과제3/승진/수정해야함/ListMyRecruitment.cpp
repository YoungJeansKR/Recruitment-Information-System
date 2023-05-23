#include "ListMyRecruitment.h"
#include "ListMyRecruitmentUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "CompanyMember.h"

ListMyRecruitment::ListMyRecruitment()
{
	this->dataBase = nullptr;
	ListMyRecruitmentUI* listMyRecruitmentUI = new ListMyRecruitmentUI();
	listMyRecruitmentUI->StartInterface();
}

ListMyRecruitment::ListMyRecruitment(DataBase* dataBase)
{
	this->dataBase = dataBase;
	ListMyRecruitmentUI* listMyRecruitmentUI = new ListMyRecruitmentUI();
	listMyRecruitmentUI->StartInterface();
}

std::vector<Recruitment*> ListMyRecruitment::ShowMyRecruitment()
{
	CompanyMember* companymember = dataBase->GetSellerList()[dataBase->GetLogInIndex()];
	return companymember->GetlistRecruitment();
}
