#pragma once
#include <iostream>

class Recruitment;
class ApplyRecruitment;
class File;

class ApplyRecruitmentUI {
public:
    ApplyRecruitmentUI();

    void startInterface();
    void selectApply(ApplyRecruitment* applyRecruitment, File* file);
};