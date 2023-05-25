#include "ListMyApply.h"
#include "ListMyApplyUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "CompanyMember.h"
#include "GeneralMember.h"

/*
 * 함수 이름 : ListMyApply
 * 기능 : ListMyApply 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
ListMyApply::ListMyApply()
{
    this->dataBase = nullptr;
    ListMyApplyUI* listMyApplyUI = new ListMyApplyUI();
    listMyApplyUI->startInterface();
}


/*
 * 함수 이름 : ListMyApply
 * 기능 : ListMyApply 생성자
 * 전달 인자 : DataBase*
 * 반환값 : 없음
 */
ListMyApply::ListMyApply(DataBase* dataBase)
{
    this->dataBase = dataBase;
    ListMyApplyUI* listMyApplyUI = new ListMyApplyUI();
    listMyApplyUI->startInterface();
}


/*
 * 함수 이름 : showMyApplies
 * 기능 : 지원한 채용 정보 조회
 * 전달 인자 : 없음
 * 반환값 : 채용 리스트
 */
std::vector<Recruitment*> ListMyApply::showMyApplies()
{
    int loginIndex = this->dataBase->getLoginIndex();
    Member* member = (this->dataBase)->getMemberList()[loginIndex];
    GeneralMember* generalMember = dynamic_cast<GeneralMember*>(member);
    return generalMember->getApplyList();
}

