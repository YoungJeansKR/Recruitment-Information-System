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
    int index = this->dataBase->GetLogInIndex();
    std::vector<Member*> memberList = (this->dataBase)->GetMemberList();

    std::string returnId = memberList[index]->GetID();
    (this->dataBase)->DeleteMember(index);
    (this->dataBase)->SetLogInIndex(-1);
    return returnId;
}