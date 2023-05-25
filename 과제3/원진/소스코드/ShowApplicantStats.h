#pragma once

#include <iostream>
#include <map>
#include "DataBase.h"
#include "Recruitment.h"

class ShowApplicantStats {
private:
    DataBase* dataBase;
public:
    ShowApplicantStats();
    ShowApplicantStats(DataBase* dataBase);

	map<string, int> showApplicantStats(CompanyMember* companyMember);
};
