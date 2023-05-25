#pragma once
#include <iostream>
using namespace std;

class DataBase;
class SignUpUI;

class SignUp
{
public:
	SignUp();
	SignUp(DataBase* dataBase);

	SignUpUI* getSignUpUI() { return signUpUI; }

	void addNewMember(int user_type, string name, string ssn, string id, string password);

private:
	DataBase* dataBase;
	SignUpUI* signUpUI;
};