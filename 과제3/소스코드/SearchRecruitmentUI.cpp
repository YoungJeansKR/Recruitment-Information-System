#include "SearchRecruitmentUI.h"
#include "SearchRecruitment.h"
#include "File.h"
#include "Recruitment.h"

using namespace std;

/*
 * 함수 이름 : SearchRecruitmentUI
 * 기능 : SearchRecruitmentUI 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
SearchRecruitmentUI::SearchRecruitmentUI() {}


/*
 * 함수 이름 :startInterface
 * 기능 : GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void SearchRecruitmentUI::startInterface() {}


/*
 * 함수 이름 : searchRecruitment
 * 기능 : 결과 출력
 * 전달 인자 : SearchRecruitment*, File*
 * 반환값 : 없음
 */
void SearchRecruitmentUI::searchRecruitment(SearchRecruitment *searchRecruitment, File *file)
{
    std::string companyMemberName;

    file->ifs.seekg(file->readed);
    file->ifs >> companyMemberName;
    file->readed = file->ifs.tellg();

    Recruitment* recruitment = searchRecruitment->showRecruitmentDetails(companyMemberName);

    file->ofs << "4.1. 채용 정보 검색" << '\n';
    file->ofs << "> " << recruitment->getCompanyMemberName() << " " << recruitment->getBusinessID() << " " << recruitment->getTask() << " " << recruitment->getCapacity() << " " <<  recruitment->getDeadline() << '\n' << '\n';
}