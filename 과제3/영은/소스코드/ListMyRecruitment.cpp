#include "ListMyRecruitment.h"
#include "ListMyRecruitmentUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "CompanyMember.h"

/*
 * 함수 이름 : ListMyRecruitment
 * 기능 : ListMyRecruitment 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
ListMyRecruitment::ListMyRecruitment()
{
	this->dataBase = nullptr;
	ListMyRecruitmentUI* listMyRecruitmentUI = new ListMyRecruitmentUI();
	listMyRecruitmentUI->startInterface();
}


/*
 * 함수 이름 : ListMyRecruitment
 * 기능 : ListMyRecruitment 생성자
 * 전달 인자 : DataBase*
 * 반환값 : 없음
 */
ListMyRecruitment::ListMyRecruitment(DataBase* dataBase)
{
	this->dataBase = dataBase;
	ListMyRecruitmentUI* listMyRecruitmentUI = new ListMyRecruitmentUI();
	listMyRecruitmentUI->startInterface();
}


/*
 * 함수 이름 : showMyRecruitments
 * 기능 : 등록한 채용 정보 조회
 * 전달 인자 : 없음
 * 반환값 : 채용 리스트
 */
std::vector<Recruitment*> ListMyRecruitment::showMyRecruitments()
{
	int loginIndex = this->dataBase->getLoginIndex();
	Member* member = (this->dataBase)->getMemberList()[loginIndex];
	CompanyMember* companyMember = dynamic_cast<CompanyMember*>(member);
	return companyMember->getRecruitmentList();
}

