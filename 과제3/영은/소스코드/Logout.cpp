#include "Logout.h"
#include "LogoutUI.h"
#include "DataBase.h"
#include "Member.h"
#include <vector>

using namespace std;

/*
 * 함수 이름 : Logout
 * 기능 : Logout 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
Logout::Logout()
{
	this->dataBase = nullptr;
	logoutUI = new LogoutUI();
	logoutUI->startInterface();
}


/*
 * 함수 이름 : Logout
 * 기능 : Logout 생성자
 * 전달 인자 : DataBase*
 * 반환값 : 없음
 */
Logout::Logout(DataBase* dataBase)
{
	this->dataBase = dataBase;
	logoutUI = new LogoutUI();
	logoutUI->startInterface();
}


/*
 * 함수 이름 : logout
 * 기능 : 로그아웃
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
string Logout::logout()
{
	int loginIndex = this->dataBase->getLoginIndex();
	dataBase->setLoginIndex(-1);

	vector<Member*> memberList = (this->dataBase)->getMemberList();

	return memberList[loginIndex]->getId();
}