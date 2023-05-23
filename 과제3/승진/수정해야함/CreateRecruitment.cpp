#include "CreateRecruitment.h"
#include "CreateRecruitmentUI.h"
#include "Member.h"
#include "Recruitment.h"
#include "CompanyMember.h"

CreateRecruitment::CreateRecruitment()
{
	this->member = nullptr;
	createRecruitmentUI = new CreateRecruitmentUI();
	createRecruitmentUI->startInterface();
}

CreateRecruitment::CreateRecruitment(Member* member)
{
	this->member = member;
	createRecruitmentUI = new CreateRecruitmentUI();
	createRecruitmentUI->startInterface();
}

void CreateRecruitment::addNewRecruitment(std::string task, std::string capacity, std::string deadline)
{
	CompanyMember* companymember = member->getCompanyMemberList()[member->getLogInIndex()];
	Recruitment* newRecruitment = new Recruitment(task, capacity, deadline);
}