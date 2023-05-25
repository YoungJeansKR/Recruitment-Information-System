#pragma once

#include <iostream>
#include <map>
#include "DataBase.h"
#include "Recruitment.h"

class ShowApplyStats {
private:
    DataBase* dataBase;
public:
    ShowApplyStats();
    ShowApplyStats(DataBase* dataBase);

	map<string, int> showApplyStats(GeneralMember* generalMember);
};
