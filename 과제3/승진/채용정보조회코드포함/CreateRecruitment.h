#pragma once
#include <iostream>

class DataBase;
class CreateRecruitmentUI;

class CreateRecruitment {
public:
    CreateRecruitment();
    CreateRecruitment(DataBase* dataBase);

    CreateRecruitmentUI* getCreateRecruitmentUI() { return createRecruitmentUI; }

    void addNewRecruitment(std::string task, std::string capacity, std::string deadline);

private:
    DataBase* dataBase;
    CreateRecruitmentUI* createRecruitmentUI;
};