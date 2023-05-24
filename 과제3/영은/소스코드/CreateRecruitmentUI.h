#pragma once

class CreateRecruitment;
class File;

class CreateRecruitmentUI
{
public:
    CreateRecruitmentUI();

    void StartInterface();
    void CreateNewRecruitment(CreateRecruitment* createRecruitment, File* file);
};