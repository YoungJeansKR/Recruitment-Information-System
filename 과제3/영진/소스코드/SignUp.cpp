#include "SignUp.h"
#include "SignUpUI.h"
#include "DataBase.h"
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"

SignUp::SignUp()
{
	this->dataBase = nullptr;
	signUpUI = new SignUpUI();
	signUpUI->startInterface();
}

SignUp::SignUp(DataBase* dataBase)
{
	this->dataBase = dataBase;
	signUpUI = new SignUpUI();
	signUpUI->startInterface();
}

void SignUp::addNewMember(int user_type, string name, string ssn, string id, string password)
{
	switch (user_type)
	{
	case 1:
	{
		CompanyMember* companymember = new CompanyMember(name, ssn, id, password);
		dataBase->addNewCompanyMember(companymember);
		break;
	}
	case 2:
	{
		GeneralMember* geeralmember = new GeneralMember(name, ssn, id, password);
		dataBase->addNewGeneralMember(geeralmember);
		break;
	}
	default:
		break;
	}
}
