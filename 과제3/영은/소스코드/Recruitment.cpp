#include "Recruitment.h"
#include <string>

Recruitment::Recruitment() {
    task = "";
    capacity = "";
    deadline = "";
    companyMemberID = "";
    businessID = "";
}

Recruitment::Recruitment(std::string task, std::string capacity, std::string deadline) {
    this->task = task;
    this->capacity = capacity;
    this->deadline = deadline;
    this->companyMemberID = "";
    this->businessID = "";
}