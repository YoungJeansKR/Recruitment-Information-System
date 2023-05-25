#pragma once
#include "Member.h"

class Logout;
class File;

class LogoutUI
{
public:
	LogoutUI();

	void startInterface();
	void logout(Logout* logOut, File* file);
private:
	Logout* logOut;
};
