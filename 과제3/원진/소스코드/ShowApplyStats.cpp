#include <iostream>
#include <vector>
#include <map>
#include "ShowApplyStats.h"
#include "ShowApplyStatsUI.h"
#include "GeneralMember.h"

using namespace std;

ShowApplyStats::ShowApplyStats() {
    ShowApplyStatsUI ShowApplyStatsUI;
    ShowApplyStatsUI.startInterface();
}

ShowApplyStats::ShowApplyStats(DataBase *dataBase) {
    this->dataBase = dataBase;
    ShowApplyStatsUI ShowApplyStatsUI;
    ShowApplyStatsUI.startInterface();
}

map<string, int> ShowApplyStats::showApplyStats(GeneralMember* generalMember) {

	map<string, int> stats;
	vector<Recruitment*> applyList = generalMember->getApplyList();

        // 업무 별 지원 횟수 통계 
        for (int i = 0; i < applyList.size(); i++) {
             string task = applyList[i]->getTask();
			 stats[task]++;
        }
		return stats;

}