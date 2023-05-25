#pragma once
#include <iostream>

class DataBase;
class CreateRecruitmentUI;

class CreateRecruitment {
public:
    CreateRecruitment();
    CreateRecruitment(DataBase* dataBase);

    CreateRecruitmentUI* GetCreateRecruitmentUI() { return createRecruitmentUI; }

    void AddNewRecruitment(std::string task, std::string capacity, std::string deadline);

private:
    DataBase* dataBase;
    CreateRecruitmentUI* createRecruitmentUI;
};