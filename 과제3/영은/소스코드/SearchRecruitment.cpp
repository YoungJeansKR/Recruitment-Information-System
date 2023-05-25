#include <iostream>
#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"
#include "CompanyMember.h"

SearchRecruitment::SearchRecruitment() {
    SearchRecruitmentUI searchRecruitmentUI;
    searchRecruitmentUI.startInterface();
}

SearchRecruitment::SearchRecruitment(DataBase *dataBase) {
    this->dataBase = dataBase;
    SearchRecruitmentUI searchRecruitmentUI;
    searchRecruitmentUI.startInterface();
}

Recruitment* SearchRecruitment::showRecruitmentDetails(std::string companyMemberName) {
    for (auto companyMember: dataBase->getCompanyMemberList()) {
        for (auto recruitment : companyMember->getRecruitmentList()) {
            if (recruitment->getCompanyMemberName() == companyMemberName)
                return recruitment;
        }
    }
}