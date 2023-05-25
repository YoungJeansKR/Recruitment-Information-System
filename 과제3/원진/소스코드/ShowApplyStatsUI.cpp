#include "ShowApplyStatsUI.h"
#include "ShowApplyStats.h"
#include "File.h"
#include "Recruitment.h"

using namespace std;

ShowApplyStatsUI::ShowApplyStatsUI() {}

void ShowApplyStatsUI::startInterface() {}

 void ShowApplyStatsUI::showApplyStats(ShowApplyStats* showApplyStats, GeneralMember* generalMember, File* file) {


	map<string, int> stats = showApplyStats->showApplyStats(generalMember);

    cout << "5.1. 지원 정보 통계" << endl;
	for (map<string, int>::iterator iter = stats.begin(); iter != stats.end(); iter++) {
		cout << "> " << iter->first << " " << iter->second << '\n';
	}
	cout << '\n';
	file->ofs << "5.1. 지원 정보 통계" << '\n';
	for (map<string, int>::iterator iter = stats.begin(); iter != stats.end(); iter++) {
		file->ofs << "> " << iter->first << " " << iter->second << '\n';
	}
	file->ofs << '\n';
}