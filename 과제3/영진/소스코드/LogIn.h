#pragma once
#include <iostream>
using namespace std;

class DataBase;
class LogInUI;

class LogIn
{
public:
	LogIn();
	LogIn(DataBase* dataBase);

	LogInUI* getLogInUI() { return logInUI; }

	void login(string id, string password);
private:
	DataBase* dataBase;
	LogInUI* logInUI;
};


