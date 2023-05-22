#pragma onces
#include <iostream>

class DataBase;
class SearchRecruitmentUI;

class SearchRecruitment {
private:
    DataBase* database;
    SearchRecruitmentUI* searchRecruitmentUI;
public:
    SearchRecruitment();
    SearchRecruitment(DataBase* database);

    SearchRecruitmentUI* getSearchRecruitmentUI() { return searchRecruitmentUI; }
};