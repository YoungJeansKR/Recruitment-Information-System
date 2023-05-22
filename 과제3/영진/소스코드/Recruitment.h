#pragma once
#include <iostream>

class Recruitment
{
public:
	Recruitment();
	Recruitment(std::string task, std::string capacity, std::string deadline);

private:
	std::string task;
	std::string capacity;
	std::string deadline;
};
