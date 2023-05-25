#include "ListMyRecruitment.h"
#include "ListMyRecruitmentUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "CompanyMember.h"

ListMyRecruitment::ListMyRecruitment()
{
	this->dataBase = nullptr;
	ListMyRecruitmentUI* listMyRecruitmentUI = new ListMyRecruitmentUI();
	listMyRecruitmentUI->startInterface();
}

ListMyRecruitment::ListMyRecruitment(DataBase* dataBase)
{
	this->dataBase = dataBase;
	ListMyRecruitmentUI* listMyRecruitmentUI = new ListMyRecruitmentUI();
	listMyRecruitmentUI->startInterface();
}

std::vector<Recruitment*> ListMyRecruitment::showMyRecruitments()
{
	int loginIndex = this->dataBase->getLoginIndex();
	Member* member = (this->dataBase)->getMemberList()[loginIndex];
	CompanyMember* companyMember = dynamic_cast<CompanyMember*>(member);
	return companyMember->getRecruitmentList();
}

