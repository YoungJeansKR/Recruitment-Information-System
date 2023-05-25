#pragma once
#include <iostream>

class Recruitment
{
public:
	Recruitment();
	Recruitment(std::string task, std::string capacity, std::string deadline);

    void SetCompanyMemberID(std::string companyMemberID) { this->companyMemberID = companyMemberID; }
    void SetBusinessID(std::string businessID) { this->businessID = businessID; }
private:
	std::string task;
	std::string capacity;
	std::string deadline;
    std::string companyMemberID;
    std::string businessID;
};