#pragma once
#include <iostream>

using namespace std;

class DataBase;
class Recruitment;

class CancelApply {
private:
    DataBase* dataBase;
public:
    CancelApply();
    CancelApply(DataBase* dataBase);

    Recruitment* sendCancelApplyRequest(string companyMemberBusinessId);
};