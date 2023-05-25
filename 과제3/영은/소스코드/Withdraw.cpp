#include "Withdraw.h"
#include "WithdrawUI.h"
#include "DataBase.h"
#include "Member.h"

/*
 * 함수 이름 : Withdraw
 * 기능 : Withdraw 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
Withdraw::Withdraw()
{
    this->dataBase = nullptr;
    withdrawUI = new WithdrawUI();
    withdrawUI->startInterface();
}


/*
 * 함수 이름 : Withdraw
 * 기능 : Withdraw 생성자
 * 전달 인자 : DataBase*
 * 반환값 : 없음
 */
Withdraw::Withdraw(DataBase* dataBase)
{
    this->dataBase = dataBase;
    withdrawUI = new WithdrawUI();
    withdrawUI->startInterface();
}


/*
 * 함수 이름 : tryWithdraw
 * 기능 : 회원탈퇴
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
std::string Withdraw::tryWithdraw()
{
    int index = this->dataBase->getLoginIndex();
    std::vector<Member*> memberList = (this->dataBase)->getMemberList();

    std::string returnId = memberList[index]->getId();
    (this->dataBase)->deleteMember(index);
    (this->dataBase)->setLoginIndex(-1);
    return returnId;
}