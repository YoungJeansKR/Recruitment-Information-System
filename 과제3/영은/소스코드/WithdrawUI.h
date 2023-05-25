#pragma once
#include "Member.h"

class Withdraw;
class File;

class WithdrawUI
{
public:
	WithdrawUI();

	void startInterface();
	void selectWithdraw(Withdraw* withdraw, File* file);
private:
	Withdraw* withdraw;
};