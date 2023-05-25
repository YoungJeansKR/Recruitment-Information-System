#pragma once
#include <iostream>
using namespace std;

class DataBase;
class LoginUI;

class Login
{
public:
	Login();
	Login(DataBase* dataBase);

	LoginUI* getLoginUI() { return loginUI; }

	void login(string id, string password);
private:
	DataBase* dataBase;
	LoginUI* loginUI;
};


