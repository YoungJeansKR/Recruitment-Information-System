#pragma once
#include "Member.h"

class SignUp;
class File;

class SignUpUI
{
public:
	SignUpUI();

	void startInterface();
	void addNewMember(SignUp* signUp, File* file);

private:
	SignUp* signUp;
};