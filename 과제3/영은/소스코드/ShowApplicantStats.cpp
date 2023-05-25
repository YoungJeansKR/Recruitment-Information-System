#include <iostream>
#include <vector>
#include <map>
#include "ShowApplicantStats.h"
#include "ShowApplicantStatsUI.h"
#include "CompanyMember.h"

using namespace std;

/*
 * 함수 이름 : ShowApplicantStats
 * 기능 : ShowApplicantStats 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
ShowApplicantStats::ShowApplicantStats() {
    this->dataBase = nullptr;
    ShowApplicantStatsUI ShowApplicantStatsUI;
    ShowApplicantStatsUI.startInterface();
}


/*
 * 함수 이름 : ShowApplicantStats
 * 기능 : ShowApplicantStats 생성자
 * 전달 인자 : DataBase*
 * 반환값 : 없음
 */
ShowApplicantStats::ShowApplicantStats(DataBase *dataBase)
{
    this->dataBase = dataBase;
    ShowApplicantStatsUI ShowApplicantStatsUI;
    ShowApplicantStatsUI.startInterface();
}


/*
 * 함수 이름 : showApplicantStats
 * 기능 : 업무별 지원자 수 통계
 * 전달 인자 : 회사회원
 * 반환값 : 통계 데이터
 */
map<string, int> ShowApplicantStats::showApplicantStats(CompanyMember* companyMember)
{
	map<string, int> stats;

	vector<Recruitment*> recruitmentList = companyMember->getRecruitmentList();

	for (int i = 0; i < recruitmentList.size(); i++) {
             string task = recruitmentList[i]->getTask();
			 stats[task] += recruitmentList[i]->getApplicantCount();
        }
	return stats;
}