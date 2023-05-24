#pragma once
#include <iostream>

class DataBase;
class WithdrawUI;

class Withdraw
{
public:
	Withdraw();
	Withdraw(DataBase* database);

	WithdrawUI* GetWithdrawUI() { return withdrawUI; }

	std::string TryWithdraw();

private:
	DataBase* database;
	WithdrawUI* withdrawUI;
};