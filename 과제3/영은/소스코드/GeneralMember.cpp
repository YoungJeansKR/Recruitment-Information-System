#include "GeneralMember.h"
#include "Recruitment.h"

/*
 * 함수 이름 : GeneralMember
 * 기능 : 일반회원 리스트 초기화
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
GeneralMember::GeneralMember()
{
    applyList.clear();
}


/*
 * 함수 이름 : createApply
 * 기능 : 지원 리스트에 추가
 * 전달 인자 : 채용정보
 * 반환값 : 없음
 */
void GeneralMember::createApply(Recruitment* newRecruitment)
{
    applyList.push_back(newRecruitment);
}
