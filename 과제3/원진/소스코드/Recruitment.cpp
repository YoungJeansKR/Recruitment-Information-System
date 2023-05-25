#include "Recruitment.h"
#include <string>

Recruitment::Recruitment() {
    task = "";
    capacity = "";
    deadline = "";
    businessID = "";
}

Recruitment::Recruitment(std::string task, std::string capacity, std::string deadline) {
    this->task = task;
    this->capacity = capacity;
    this->deadline = deadline;
    this->businessID = "";
    this->applicantCount = 0;
}