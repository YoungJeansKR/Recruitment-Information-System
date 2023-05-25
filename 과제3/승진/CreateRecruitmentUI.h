#pragma once

class CreateRecruitment;
class File;

class CreateRecruitmentUI
{
public:
    CreateRecruitmentUI();

    void startInterface();
    void getRecruitmentForm(CreateRecruitment* createRecruitment, File* file);
};