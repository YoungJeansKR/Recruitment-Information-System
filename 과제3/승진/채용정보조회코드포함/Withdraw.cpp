#include "Withdraw.h"
#include "WithdrawUI.h"
#include "DataBase.h"
#include "Member.h"

Withdraw::Withdraw()
{
    this->dataBase = nullptr;
    withdrawUI = new WithdrawUI();
    withdrawUI->StartInterface();
}

Withdraw::Withdraw(DataBase* dataBase)
{
    this->dataBase = dataBase;
    withdrawUI = new WithdrawUI();
    withdrawUI->StartInterface();
}

std::string Withdraw::TryWithdraw()
{
    int index = this->dataBase->getLoginIndex();
    std::vector<Member*> memberList = (this->dataBase)->getMemberList();

    std::string returnId = memberList[index]->getId();
    (this->dataBase)->deleteMember(index);
    (this->dataBase)->setLoginIndex(-1);
    return returnId;
}