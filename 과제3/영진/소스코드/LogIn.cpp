#include "LogIn.h"
#include "LogInUI.h"
#include "DataBase.h"
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
#include <vector>
using namespace std;

LogIn::LogIn() {
	this->dataBase = nullptr;
	logInUI = new LogInUI();
	logInUI->startInterface();
}

LogIn::LogIn(DataBase* dataBase) {
	this->dataBase = dataBase;
	logInUI = new LogInUI();
	logInUI->startInterface();
}

void LogIn::login(string id, string password)
{
	int i = 0;

	vector<CompanyMember*> companymemberList = (this->dataBase)->GetCompanyMemberList();

	for (i = 0; i < companymemberList.size(); i++) {
		if ((companymemberList[i]->GetID() == id) && (companymemberList[i]->GetPassword() == password)) {
			dataBase->SetLogInIndex(i);
		}
	}
}