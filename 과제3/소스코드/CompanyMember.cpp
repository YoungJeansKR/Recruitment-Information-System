#include "CompanyMember.h"
#include "Recruitment.h"

/*
 * 함수 이름 : CompanyMember
 * 기능 : 채용 리스트 초기화
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
CompanyMember::CompanyMember()
{
    recruitmentList.clear();
}


/*
 * 함수 이름 : createNewRecruitment
 * 기능 : 채용 리스트에 추가
 * 전달 인자 : 채용정보
 * 반환값 : 없음
 */
void CompanyMember::createNewRecruitment(Recruitment *newRecruitment)
{
    recruitmentList.push_back(newRecruitment);
}
