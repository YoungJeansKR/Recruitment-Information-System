#pragma once
#include <iostream>

class Member
{
public:
	Member();
	Member(std::string id, std::string password);

private:
	std::string id;
	std::string password;
};
