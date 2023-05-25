#include "ListMyApply.h"
#include "ListMyApplyUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "CompanyMember.h"
#include "GeneralMember.h"

ListMyApply::ListMyApply()
{
    this->dataBase = nullptr;
    ListMyApplyUI* listMyApplyUI = new ListMyApplyUI();
    listMyApplyUI->startInterface();
}

ListMyApply::ListMyApply(DataBase* dataBase)
{
    this->dataBase = dataBase;
    ListMyApplyUI* listMyApplyUI = new ListMyApplyUI();
    listMyApplyUI->startInterface();
}

std::vector<Recruitment*> ListMyApply::showMyApplies()
{
    int loginIndex = this->dataBase->getLoginIndex();
    Member* member = (this->dataBase)->getMemberList()[loginIndex];
    GeneralMember* generalMember = dynamic_cast<GeneralMember*>(member);
    return generalMember->getApplyList();
}

