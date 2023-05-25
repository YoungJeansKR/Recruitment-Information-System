#pragma once
#include <iostream>

class Recruitment
{
public:
	Recruitment();
	Recruitment(std::string task, std::string capacity, std::string deadline);

    void setCompanyMemberBusinessId(std::string businessId) { this->businessId = businessId; }
private:
	std::string task;
	std::string capacity;
	std::string deadline;
    std::string businessId;
};