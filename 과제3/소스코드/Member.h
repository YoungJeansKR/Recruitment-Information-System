#pragma once
#include <iostream>

class Member
{
public:
	Member();
	Member(std::string name, std::string num, std::string id, std::string password);

private:
	std::string name;
	std::string num;
	std::string id;
	std::string password;
};
