#pragma once
#include "Member.h"

class LogIn;
class File;

class LogInUI
{
public:
	LogInUI();

	void startInterface();
	void login(LogIn* logIn, File* file);
private:
	LogIn* logIn;
};
