#pragma once
#include <iostream>
using namespace std;

class DataBase;
class LogoutUI;

class Logout
{
public:
	Logout();
	Logout(DataBase* dataBase);

	LogoutUI* getLogoutUI() { return logoutUI; }

	string logout();
private:
	DataBase* dataBase;
	LogoutUI* logoutUI;
};


