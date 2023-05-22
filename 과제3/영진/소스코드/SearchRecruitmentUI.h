#pragma once
#include <iostream>

class SearchRecruitment;
class File;

class SearchRecruitmentUI
{
public:
    SearchRecruitmentUI();
    void startInterface();
    //void SearchRecruitment(SearchRecruitment* recruitment, File* file);
private:
    SearchRecruitment* searchRecruitment;
};