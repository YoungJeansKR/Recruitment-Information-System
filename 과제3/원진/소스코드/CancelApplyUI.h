#pragma once
#include <iostream>

class Recruitment;
class CancelApply;
class File;

class CancelApplyUI {
public:
    CancelApplyUI();

    void startInterface();
    void selectCancelApply(CancelApply* cancelApply, File* file);
};