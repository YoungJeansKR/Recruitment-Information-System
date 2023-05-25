#pragma once

class CreateRecruitment;
class File;

class CreateRecruitmentUI
{
public:
    CreateRecruitmentUI();

    void startInterface();
    void addNewRecruitment(CreateRecruitment* createRecruitment, File* file);
};