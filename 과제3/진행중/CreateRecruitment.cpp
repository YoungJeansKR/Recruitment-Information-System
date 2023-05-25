#include "CreateRecruitment.h"
#include "CreateRecruitmentUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "CompanyMember.h"

CreateRecruitment::CreateRecruitment() {
    this->dataBase = nullptr;
    createRecruitmentUI = new CreateRecruitmentUI;
    createRecruitmentUI->StartInterface();
}

CreateRecruitment::CreateRecruitment(DataBase *dataBase) {
    this->dataBase = dataBase;
    createRecruitmentUI = new CreateRecruitmentUI();
    createRecruitmentUI->StartInterface();
}

void CreateRecruitment::AddNewRecruitment(std::string task, std::string capacity, std::string deadline) {
    CompanyMember* companyMember = dataBase->getCompanyMemberList()[dataBase->getLoginIndex()];
    Recruitment* newRecruitment = new Recruitment(task, capacity, deadline);
    newRecruitment->SetCompanyMemberID(dataBase->getMemberList()[dataBase->getLoginIndex()]->getId());
    companyMember->CreateRecruitment(newRecruitment);
}


