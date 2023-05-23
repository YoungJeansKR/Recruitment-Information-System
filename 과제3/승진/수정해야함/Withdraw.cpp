#include "Withdraw.h"
#include "WithdrawUI.h"
#include "Member.h"

Withdraw::Withdraw()
{
    this->member = nullptr;
    withdrawUI = new WithdrawUI();
    withdrawUI->StartInterface();
}

Withdraw::Withdraw(Member* member)
{
    this->member = member;
    withdrawUI = new WithdrawUI();
    withdrawUI->StartInterface();
}

std::string Withdraw::TryWithdraw()
{
    int index = this->member->GetLogInIndex();//?
    std::vector<Member*> memberList = (this->dataBase)->GetMemberList();//?

    std::string returnId = memberList[index]->GetID();
    (this->member)->deleteMember(index);
    return returnId;
}