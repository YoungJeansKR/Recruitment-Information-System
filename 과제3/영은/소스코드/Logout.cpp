#include "Logout.h"
#include "LogoutUI.h"
#include "Database.h"
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
#include <vector>

using namespace std;

Logout::Logout() {
	this->dataBase = nullptr;
	logoutUI = new LogoutUI();
	logoutUI->startInterface();
}

Logout::Logout(DataBase* dataBase) {
	this->dataBase = dataBase;
	logoutUI = new LogoutUI();
	logoutUI->startInterface();
}

string Logout::logout()
{
	int loginIndex = this->dataBase->getLoginIndex();
	dataBase->setLoginIndex(-1);

	vector<Member*> memberList = (this->dataBase)->getMemberList();

	return memberList[loginIndex]->getId();
}