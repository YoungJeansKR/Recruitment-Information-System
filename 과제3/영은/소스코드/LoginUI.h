#pragma once
#include "Member.h"

class Login;
class File;

class LoginUI
{
public:
	LoginUI();

	void startInterface();
	void login(Login* logIn, File* file);
private:
	Login* logIn;
};
