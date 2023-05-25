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

void ApplyRecruitment::SendApplyRequest(Recruitment *curRecruitment) {
    for (auto companyMember : dataBase->getCompanyMemberList()) {
        for (auto recruitment : companyMember->getRecruitmentList()) {
            if (curRecruitment->getCompanyMemberName() == recruitment->getCompanyMemberName()) {
                dataBase->getGeneralMemberList()[dataBase->getLoginIndex()]->createApply(recruitment);
                return;
            }
        }
    }


}