#pragma once
#include <iostream>

class DataBase;
class WithdrawUI;

class Withdraw
{
public:
	Withdraw();
	Withdraw(DataBase* dataBase);

	WithdrawUI* getWithdrawUI() { return withdrawUI; }

	std::string tryWithdraw();

private:
	DataBase* dataBase;
	WithdrawUI* withdrawUI;
};