#pragma once
#include <iostream>

class Member;
class WithdrawUI;

class Withdraw
{
public:
	Withdraw();
	Withdraw(Member* member);

	WithdrawUI* GetWithdrawUI() { return withdrawUI; }

	std::string TryWithdraw();

private:
	Member* member;
	WithdrawUI* withdrawUI;
};