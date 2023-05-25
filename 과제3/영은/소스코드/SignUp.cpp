#include "SignUp.h"
#include "SignUpUI.h"
#include "Database.h"
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
		Member* companymember = new CompanyMember(1, name, ssn, id, password);
		dataBase->addNewCompanyMember(companymember);
		break;
	}
	case 2:
	{
		Member* generalmember = new GeneralMember(2, name, ssn, id, password);
		dataBase->addNewGeneralMember(generalmember);
		break;
	}
	default:
		break;
	}
}
