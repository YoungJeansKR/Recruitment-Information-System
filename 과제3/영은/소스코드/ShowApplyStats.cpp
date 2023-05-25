#include <iostream>
#include <vector>
#include <map>
#include "ShowApplyStats.h"
#include "ShowApplyStatsUI.h"
#include "GeneralMember.h"

using namespace std;

/*
 * 함수 이름 : ShowApplyStats
 * 기능 : ShowApplyStats 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
ShowApplyStats::ShowApplyStats()
{
    this->dataBase = nullptr;
    ShowApplyStatsUI ShowApplyStatsUI;
    ShowApplyStatsUI.startInterface();
}


/*
 * 함수 이름 : ShowApplyStats
 * 기능 : ShowApplyStats 생성자
 * 전달 인자 : DataBase*
 * 반환값 : 없음
 */
ShowApplyStats::ShowApplyStats(DataBase *dataBase)
{
    this->dataBase = dataBase;
    ShowApplyStatsUI ShowApplyStatsUI;
    ShowApplyStatsUI.startInterface();
}


/*
 * 함수 이름 : showApplyStats
 * 기능 : 업무별 지원횟수 통계
 * 전달 인자 : 일반회원
 * 반환값 : 통계 데이터
 */
map<string, int> ShowApplyStats::showApplyStats(GeneralMember* generalMember)
{
	map<string, int> stats;
	vector<Recruitment*> applyList = generalMember->getApplyList();

        // 업무 별 지원 횟수 통계 
        for (int i = 0; i < applyList.size(); i++) {
             string task = applyList[i]->getTask();
			 stats[task]++;
        }
		return stats;
}