#pragma once
#include <vector>

class DataBase;
class ListMyApplyUI;
class Recruitment;

class ListMyApply
{
public:
    ListMyApply();
    ListMyApply(DataBase* dataBase);

    ListMyApplyUI* getListMyApplyUI() { return listMyApplyUI; }

    std::vector<Recruitment*> showMyApplies();

private:
    DataBase* dataBase;
    ListMyApplyUI* listMyApplyUI;
};