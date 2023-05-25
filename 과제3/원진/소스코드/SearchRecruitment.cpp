#include <iostream>
#include <vector>
#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"
#include "CompanyMember.h"

using namespace std;

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

    vector<Member*> memberList = (this->dataBase)->getMemberList();
    Member* foundMember = nullptr;

    for (vector<Member*>::iterator iter = memberList.begin(); iter != memberList.end(); iter++) {

      if ((*iter)->getName() == companyMemberName && (*iter)->getUserType() == 1) {
          foundMember = *iter;
      }
    }

    vector<Recruitment*> recruitmentList = dynamic_cast<CompanyMember*>(foundMember)->getRecruitmentList();
    return recruitmentList[0];

}