#include "ApplyRecruitment.h"
#include "ApplyRecruitmentUI.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
#include "Recruitment.h"
#include "DataBase.h"

ApplyRecruitment::ApplyRecruitment() {
    this->dataBase = nullptr;
    ApplyRecruitmentUI applyRecruitmentUI;
    applyRecruitmentUI.startInterface();
}

ApplyRecruitment::ApplyRecruitment(DataBase *dataBase) {
    this->dataBase = dataBase;
    ApplyRecruitmentUI applyRecruitmentUI;
    applyRecruitmentUI.startInterface();
}

Recruitment* ApplyRecruitment::sendApplyRequest(string companyMemberBuisnessId) {

    int loginIndex = this->dataBase->getLoginIndex();
    Member* member = (this->dataBase)->getMemberList()[loginIndex];
    GeneralMember* generalMember = dynamic_cast<GeneralMember*>(member);

    vector<Member*> memberList = (this->dataBase)->getMemberList();
    Member* foundMember = nullptr;

    for (vector<Member*>::iterator iter = memberList.begin(); iter != memberList.end(); iter++) {

      if ((*iter)->getSSN() == companyMemberBuisnessId && (*iter)->getUserType() == 1) {
          foundMember = *iter;
      }
    }

    vector<Recruitment*> recruitmentList = dynamic_cast<CompanyMember*>(foundMember)->getRecruitmentList();
    Recruitment* recruitment = recruitmentList[0];

    generalMember->createApply(recruitment);

    return recruitment;
}