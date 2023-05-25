#pragma once
#include "Member.h"

class Withdraw;
class File;

class WithdrawUI
{
public:
	WithdrawUI();

	void StartInterface();
	void SelectWithdraw(Withdraw* withdraw, File* file);
private:
	Withdraw* withdraw;
};