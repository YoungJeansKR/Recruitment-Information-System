#pragma once
#include <iostream>

class DataBase;
class Recruitment;

class ApplyRecruitment {
private:
    DataBase* dataBase;
public:
    ApplyRecruitment();
    ApplyRecruitment(DataBase* dataBase);

    void SendApplyRequest(Recruitment* curRecruitment);
};