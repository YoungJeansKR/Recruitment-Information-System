#include <iostream>
#include <vector>
#include <map>
#include "ShowApplicantStats.h"
#include "ShowApplicantStatsUI.h"
#include "CompanyMember.h"

using namespace std;

ShowApplicantStats::ShowApplicantStats() {
    ShowApplicantStatsUI ShowApplicantStatsUI;
    ShowApplicantStatsUI.startInterface();
}

ShowApplicantStats::ShowApplicantStats(DataBase *dataBase) {
    this->dataBase = dataBase;
    ShowApplicantStatsUI ShowApplicantStatsUI;
    ShowApplicantStatsUI.startInterface();
}

map<string, int> ShowApplicantStats::showApplicantStats(CompanyMember* companyMember) {

	map<string, int> stats;

	vector<Recruitment*> recruitmentList = companyMember->getRecruitmentList();

	for (int i = 0; i < recruitmentList.size(); i++) {
             string task = recruitmentList[i]->getTask();
			 stats[task] += recruitmentList[i]->getApplicantCount();
        }
	return stats;

}