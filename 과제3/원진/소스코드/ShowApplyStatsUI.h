#pragma once
#include <iostream>

class ShowApplyStats;
class File;
class Recruitment;
class GeneralMember;

class ShowApplyStatsUI {
public:
    ShowApplyStatsUI();

    void startInterface();
    void showApplyStats(ShowApplyStats* showApplyStats, GeneralMember* generalMember, File* file);
};