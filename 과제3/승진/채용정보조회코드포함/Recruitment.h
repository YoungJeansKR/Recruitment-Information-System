#pragma once
#include <iostream>

class Recruitment
{
public:
	Recruitment();
	Recruitment(std::string task, std::string capacity, std::string deadline);

    void setCompanyMemberName(std::string companyMemberName) { this->companyMemberName = companyMemberName; }
    void setBusinessID(std::string businessID) { this->businessID = businessID; }

	std::string getTask() { return task; }
	std::string getCapacity() { return capacity; }
	std::string getDeadline() { return deadline; }

private:
	std::string task;
	std::string capacity;
	std::string deadline;
    std::string companyMemberName;
    std::string businessID;
};