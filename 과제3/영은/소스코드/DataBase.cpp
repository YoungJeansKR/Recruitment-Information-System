#include "DataBase.h"
#include "Member.h"

/*
 * 함수 이름 : DataBase
 * 기능 : 데이터베이스 초기화
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
DataBase::DataBase()
{
	memberList.clear();
}


/*
 * 함수 이름 : addNewCompanyMember
 * 기능 : 회사회원 리스트에 추가
 * 전달 인자 : 회사회원
 * 반환값 : 없음
 */
void DataBase::addNewCompanyMember(Member* companyMember)
{
	memberList.push_back(companyMember);
}


/*
 * 함수 이름 : addNewGeneralMember
 * 기능 : 일반회원 리스트에 추가
 * 전달 인자 : 일반회원
 * 반환값 : 없음
 */
void DataBase::addNewGeneralMember(Member* generalMember)
{
	memberList.push_back(generalMember);
}
