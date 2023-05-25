#include "SignUp.h"
#include "SignUpUI.h"
#include "DataBase.h"
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"

/*
 * 함수 이름 : SignUp
 * 기능 : SignUp 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
SignUp::SignUp()
{
	this->dataBase = nullptr;
	signUpUI = new SignUpUI();
	signUpUI->startInterface();
}


/*
 * 함수 이름 : SignUp
 * 기능 : SignUp 생성자
 * 전달 인자 : DataBase*
 * 반환값 : 없음
 */
SignUp::SignUp(DataBase* dataBase)
{
	this->dataBase = dataBase;
	signUpUI = new SignUpUI();
	signUpUI->startInterface();
}


/*
 * 함수 이름 : addNewMember
 * 기능 : 회원가입
 * 전달 인자 : 유저타입, 이름, 주민번호 또는 사업자번호, 아이디, 비밀번호
 * 반환값 : 없음
 */
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
