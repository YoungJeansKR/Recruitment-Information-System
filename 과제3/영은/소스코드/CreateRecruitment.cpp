#include "CreateRecruitment.h"
#include "CreateRecruitmentUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "CompanyMember.h"

CreateRecruitment::CreateRecruitment() {
    this->dataBase = nullptr;
    createRecruitmentUI = new CreateRecruitmentUI;
    createRecruitmentUI->startInterface();
}

CreateRecruitment::CreateRecruitment(DataBase *dataBase) {
    this->dataBase = dataBase;
    createRecruitmentUI = new CreateRecruitmentUI();
    createRecruitmentUI->startInterface();
}

void CreateRecruitment::addNewRecruitment(std::string task, std::string capacity, std::string deadline) {
    int loginIndex = this->dataBase->getLoginIndex();
    Member* member = (this->dataBase)->getMemberList()[loginIndex];
    CompanyMember* companyMember = dynamic_cast<CompanyMember*>(member);

    Recruitment* newRecruitment = new Recruitment(task, capacity, deadline);
    newRecruitment->setCompanyMemberName(dataBase->getMemberList()[dataBase->getLoginIndex()]->getName());
    newRecruitment->setBusinessID(dataBase->getMemberList()[dataBase->getLoginIndex()]->getSSN());
    companyMember->createNewRecruitment(newRecruitment);
}


