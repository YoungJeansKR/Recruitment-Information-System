#pragma once
#include <iostream>

using namespace std;

class Recruitment
{
public:
    Recruitment();
    Recruitment(std::string task, std::string capacity, std::string deadline);

    string getCompanyMemberName() { return companyMemberName; }
    string getBusinessID() { return businessID; }
    string getTask() { return task; }
    string getCapacity() { return capacity; }
    string getDeadline() { return deadline; }
    int getApplicantCount() { return applicantCount; }

    void setApplicantCount(int count) { this->applicantCount = count; }
    void setCompanyMemberName(string companyMemberName) { this->companyMemberName = companyMemberName; }
    void setBusinessID(string businessID) { this->businessID = businessID; }
private:
    string task;
    string capacity;
    string deadline;
    string companyMemberName;
    string businessID;
    int applicantCount;
};