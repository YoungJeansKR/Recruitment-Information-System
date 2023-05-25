#include "CancelApply.h"
#include "CancelApplyUI.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
#include "Recruitment.h"
#include "DataBase.h"

/*
 * 함수 이름 : CancelApply
 * 기능 : CancelApply 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
CancelApply::CancelApply()
{
    this->dataBase = nullptr;
    CancelApplyUI cancelApplyUI;
    cancelApplyUI.startInterface();
}


/*
 * 함수 이름 : CancelApply
 * 기능 : CancelApply 생성자
 * 전달 인자 : DataBase*
 * 반환값 : 없음
 */
CancelApply::CancelApply(DataBase *dataBase)
{
    this->dataBase = dataBase;
    CancelApplyUI cancelApplyUI;
    cancelApplyUI.startInterface();
}

/*
 * 함수 이름 : sendCancelApplyRequest
 * 기능 : 지원 취소
 * 전달 인자 : 사업자번호
 * 반환값 : 채용정보
 */
Recruitment* CancelApply::sendCancelApplyRequest(string companyMemberBuisnessId)
{
    int loginIndex = this->dataBase->getLoginIndex();
    Member* member = (this->dataBase)->getMemberList()[loginIndex];
    GeneralMember* generalMember = dynamic_cast<GeneralMember*>(member);

	// 지원 정보 리스트 가져오기
	vector<Recruitment*> applyList = generalMember->getApplyList();

	Recruitment* foundRecruitment = nullptr;

	int index = -1; 

	// 지원 정보 중 사업자 번호 일치하는 인덱스 찾기
	for (vector<Recruitment*>::iterator iter2 = applyList.begin(); iter2 != applyList.end(); iter2++) {
		if ((*iter2)->getBusinessID() == companyMemberBuisnessId) {
			foundRecruitment = *iter2;
			index = iter2 - applyList.begin();
		}
	}
    generalMember->deleteApply(index);

    return foundRecruitment;
}