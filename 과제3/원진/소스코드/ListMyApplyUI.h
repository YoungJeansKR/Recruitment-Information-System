#pragma once

class ListMyApply;
class File;

class ListMyApplyUI
{
public:
    ListMyApplyUI();

    void startInterface();
    void selectShowApplyList(ListMyApply* listMyApply, File* file);
};