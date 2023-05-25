#pragma once
#include <iostream>

class SearchRecruitment;
class File;
class Recruitment;

class SearchRecruitmentUI {
public:
    SearchRecruitmentUI();

    void startInterface();
    Recruitment* searchRecruitment(SearchRecruitment* searchRecruitment, File* file);
};