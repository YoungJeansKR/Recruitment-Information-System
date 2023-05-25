#include "ApplyRecruitment.h"
#include "ApplyRecruitmentUI.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
#include "Recruitment.h"
#include "DataBase.h"

/*
 * 함수 이름 : ApplyRecruitment
 * 기능 : ApplyRecruitment 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
ApplyRecruitment::ApplyRecruitment()
{
    this->dataBase = nullptr;
    ApplyRecruitmentUI applyRecruitmentUI;
    applyRecruitmentUI.startInterface();
}


/*
 * 함수 이름 : ApplyRecruitment
 * 기능 : ApplyRecruitment 생성자
 * 전달 인자 : DataBase*
 * 반환값 : 없음
 */
ApplyRecruitment::ApplyRecruitment(DataBase *dataBase)
{
    this->dataBase = dataBase;
    ApplyRecruitmentUI applyRecruitmentUI;
    applyRecruitmentUI.startInterface();
}


/*
 * 함수 이름 : sendApplyRequest
 * 기능 : 채용 지원
 * 전달 인자 : 사업자번호
 * 반환값 : 채용정보
 */
Recruitment* ApplyRecruitment::sendApplyRequest(string companyMemberBuisnessId)
{
    int loginIndex = this->dataBase->getLoginIndex();
    Member* member = (this->dataBase)->getMemberList()[loginIndex];
    GeneralMember* generalMember = dynamic_cast<GeneralMember*>(member);

    vector<Member*> memberList = (this->dataBase)->getMemberList();
    Member* foundMember = nullptr;

    for (vector<Member*>::iterator iter = memberList.begin(); iter != memberList.end(); iter++) {

      if ((*iter)->getSSN() == companyMemberBuisnessId && (*iter)->getUserType() == 1) {
          foundMember = *iter;
      }
    }

    vector<Recruitment*> recruitmentList = dynamic_cast<CompanyMember*>(foundMember)->getRecruitmentList();
    Recruitment* recruitment = recruitmentList[0];

    generalMember->createApply(recruitment);

    return recruitment;
}