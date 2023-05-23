#include "ListMyRecruitment.h"
#include "ListMyRecruitmentUI.h"
#include "Member.h"
#include "Recruitment.h"
#include "CompanyMember.h"

ListMyRecruitment::ListMyRecruitment()
{
	this->member = nullptr;
	ListMyRecruitmentUI* listMyRecruitmentUI = new ListMyRecruitmentUI();
	listMyRecruitmentUI->StartInterface();
}

ListMyRecruitment::ListMyRecruitment(DataBase* dataBase)
{
	this->member = dataBase;
	ListMyRecruitmentUI* listMyRecruitmentUI = new ListMyRecruitmentUI();
	listMyRecruitmentUI->StartInterface();
}

std::vector<Recruitment*> ListMyRecruitment::ShowMyRecruitment()
{
	CompanyMember* companymember = member->GetSellerList()[member->GetLogInIndex()];
	return companymember->GetlistRecruitment();
}
