#pragma once

#include <iostream>
#include "DataBase.h"
#include "Recruitment.h"

class SearchRecruitment {
private:
    DataBase* dataBase;
public:
    SearchRecruitment();
    SearchRecruitment(DataBase* dataBase);

    Recruitment* showRecruitmentDetails(std::string companyMemberName);
};
