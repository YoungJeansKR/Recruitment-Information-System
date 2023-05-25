#include "CreateRecruitment.h"
#include "CreateRecruitmentUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "CompanyMember.h"

/*
 * 함수 이름 : CreateRecruitment
 * 기능 : CreateRecruitment 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
CreateRecruitment::CreateRecruitment()
{
    this->dataBase = nullptr;
    createRecruitmentUI = new CreateRecruitmentUI;
    createRecruitmentUI->startInterface();
}


/*
 * 함수 이름 : CreateRecruitment
 * 기능 : CreateRecruitment 생성자
 * 전달 인자 : DataBase*
 * 반환값 : 없음
 */
CreateRecruitment::CreateRecruitment(DataBase *dataBase)
{
    this->dataBase = dataBase;
    createRecruitmentUI = new CreateRecruitmentUI();
    createRecruitmentUI->startInterface();
}


/*
 * 함수 이름 : addNewRecruitment
 * 기능 : 채용 정보 등록
 * 전달 인자 : 업무, 인원 수, 마감일
 * 반환값 : 없음
 */
void CreateRecruitment::addNewRecruitment(std::string task, std::string capacity, std::string deadline)
{
    int loginIndex = this->dataBase->getLoginIndex();
    Member* member = (this->dataBase)->getMemberList()[loginIndex];
    CompanyMember* companyMember = dynamic_cast<CompanyMember*>(member);

    Recruitment* newRecruitment = new Recruitment(task, capacity, deadline);
    newRecruitment->setCompanyMemberName(dataBase->getMemberList()[dataBase->getLoginIndex()]->getName());
    newRecruitment->setBusinessID(dataBase->getMemberList()[dataBase->getLoginIndex()]->getSSN());
    companyMember->createNewRecruitment(newRecruitment);
}


