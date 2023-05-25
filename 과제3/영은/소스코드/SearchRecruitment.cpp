#include <iostream>
#include <vector>
#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"
#include "CompanyMember.h"

using namespace std;

/*
 * 함수 이름 : SearchRecruitment
 * 기능 : SearchRecruitment 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
SearchRecruitment::SearchRecruitment()
{
    this->dataBase = nullptr;
    SearchRecruitmentUI searchRecruitmentUI;
    searchRecruitmentUI.startInterface();
}


/*
 * 함수 이름 : SearchRecruitment
 * 기능 : SearchRecruitment 생성자
 * 전달 인자 : DataBase*
 * 반환값 : 없음
 */
SearchRecruitment::SearchRecruitment(DataBase *dataBase)
{
    this->dataBase = dataBase;
    SearchRecruitmentUI searchRecruitmentUI;
    searchRecruitmentUI.startInterface();
}


/*
 * 함수 이름 : showRecruitmentDetails
 * 기능 : 채용 검색
 * 전달 인자 : 회사회원이름
 * 반환값 : 없음
 */
Recruitment* SearchRecruitment::showRecruitmentDetails(std::string companyMemberName)
{
    vector<Member*> memberList = (this->dataBase)->getMemberList();
    Member* foundMember = nullptr;

    for (vector<Member*>::iterator iter = memberList.begin(); iter != memberList.end(); iter++) {

      if ((*iter)->getName() == companyMemberName && (*iter)->getUserType() == 1) {
          foundMember = *iter;
      }
    }

    vector<Recruitment*> recruitmentList = dynamic_cast<CompanyMember*>(foundMember)->getRecruitmentList();
    return recruitmentList[0];
}