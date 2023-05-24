#include "Withdraw.h"
#include "WithdrawUI.h"
#include "DataBase.h"

Withdraw::Withdraw()
{
    this->database = nullptr;
    withdrawUI = new WithdrawUI();
    withdrawUI->StartInterface();
}

Withdraw::Withdraw(DataBase* database)
{
    this->database = database;
    withdrawUI = new WithdrawUI();
    withdrawUI->StartInterface();
}

std::string Withdraw::TryWithdraw()
{
    int index = this->database->GetLogInIndex();//?
    std::vector<Database*> memberList = (this->database)->GetMemberList();//?

    std::string returnId = memberList[index]->GetID();
    (this->database)->deleteMember(index);
    return returnId;
}