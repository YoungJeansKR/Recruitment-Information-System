#include "CreateRecruitment.h"
#include "CreateRecruitmentUI.h"
#include "Database.h"
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
    int loginIndex = this->dataBase->getLoginIndex();
    Member* member = (this->dataBase)->getMemberList()[loginIndex];
    CompanyMember* companyMember = dynamic_cast<CompanyMember*>(member);

    Recruitment* newRecruitment = new Recruitment(task, capacity, deadline);
    newRecruitment->SetCompanyMemberID(dataBase->getMemberList()[dataBase->getLoginIndex()]->getId());
    newRecruitment->SetBusinessID(dataBase->getMemberList()[dataBase->getLoginIndex()]->getSSN());
    companyMember->CreateNewRecruitment(newRecruitment);
}


