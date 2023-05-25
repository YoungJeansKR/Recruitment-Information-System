#pragma once
#include <iostream>

using namespace std;

class DataBase;
class Recruitment;

class ApplyRecruitment {
private:
    DataBase* dataBase;
public:
    ApplyRecruitment();
    ApplyRecruitment(DataBase* dataBase);

    Recruitment* sendApplyRequest(string companyMemberBusinessId);
};