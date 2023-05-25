#pragma once

class CreateRecruitment;
class File;

class CreateRecruitmentUI
{
public:
    CreateRecruitmentUI();

    void StartInterface();
    void GetRecruitmentForm(CreateRecruitment* createRecruitment, File* file);
};