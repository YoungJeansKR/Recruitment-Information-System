#pragma once
#include <iostream>

class ShowApplicantStats;
class File;
class Recruitment;
class CompanyMember;

class ShowApplicantStatsUI {
public:
    ShowApplicantStatsUI();

    void startInterface();
    void showApplicantStats(ShowApplicantStats* showApplicantStats, CompanyMember* companyMember, File* file);
};