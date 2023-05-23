#include "Login.h"
#include "LoginUI.h"
#include "Database.h"
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
#include <vector>
using namespace std;

Login::Login() {
	this->dataBase = nullptr;
	loginUI = new LoginUI();
	loginUI->startInterface();
}

Login::Login(DataBase* dataBase) {
	this->dataBase = dataBase;
	loginUI = new LoginUI();
	loginUI->startInterface();
}

void Login::login(string id, string password)
{
	int i = 0;

	vector<Member*> memberList = (this->dataBase)->getMemberList();
	for (i = 0; i < memberList.size(); i++) {
		if ((memberList[i]->getId() == id) && (memberList[i]->getPassword() == password)) {
			memberList[i]->setLoginIndex(i);
		}
	}
}