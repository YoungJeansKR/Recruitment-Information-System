#include <iostream>
#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"
#include "GeneralMember.h"
#include "Database.h"

SearchRecruitment::SearchRecruitment() {
    SearchRecruitmentUI searchUI;
    searchUI.startInterface();
}

SearchRecruitment::SearchRecruitment(DataBase* database) {
    this->database = database;
    SearchRecruitmentUI searchUI;
    searchUI.startInterface();
}