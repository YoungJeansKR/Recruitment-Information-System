#include "ShowApplyStatsUI.h"
#include "ShowApplyStats.h"
#include "File.h"
#include "Recruitment.h"

using namespace std;

/*
 * 함수 이름 : ShowApplyStatsUI
 * 기능 : ShowApplyStatsUI 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
ShowApplyStatsUI::ShowApplyStatsUI() {}


/*
 * 함수 이름 :startInterface
 * 기능 : GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void ShowApplyStatsUI::startInterface() {}


/*
 * 함수 이름 : showApplyStats
 * 기능 : 결과 출력
 * 전달 인자 : showApplyStats*, GeneralMember*, File*
 * 반환값 : 없음
 */
 void ShowApplyStatsUI::showApplyStats(ShowApplyStats* showApplyStats, GeneralMember* generalMember, File* file) {


	map<string, int> stats = showApplyStats->showApplyStats(generalMember);

	file->ofs << "5.1. 지원 정보 통계" << '\n';
	for (map<string, int>::iterator iter = stats.begin(); iter != stats.end(); iter++) {
		file->ofs << "> " << iter->first << " " << iter->second << '\n';
	}
	file->ofs << '\n';
}