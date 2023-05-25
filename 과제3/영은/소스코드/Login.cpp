#include "Login.h"
#include "LoginUI.h"
#include "DataBase.h"
#include "Member.h"
#include <vector>
using namespace std;

/*
 * 함수 이름 : Login
 * 기능 : Login 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
Login::Login()
{
	this->dataBase = nullptr;
	loginUI = new LoginUI();
	loginUI->startInterface();
}


/*
 * 함수 이름 : Login
 * 기능 : Login 생성자
 * 전달 인자 : DataBase*
 * 반환값 : 없음
 */
Login::Login(DataBase* dataBase)
{
	this->dataBase = dataBase;
	loginUI = new LoginUI();
	loginUI->startInterface();
}


/*
 * 함수 이름 : login
 * 기능 : 로그인
 * 전달 인자 : 아이디, 비밀번호
 * 반환값 : 없음
 */
void Login::login(string id, string password)
{
	int i = 0;

	vector<Member*> memberList = (this->dataBase)->getMemberList();
	for (i = 0; i < memberList.size(); i++) {
		if ((memberList[i]->getId() == id) && (memberList[i]->getPassword() == password)) {
			dataBase->setLoginIndex(i);
		}
	}
}