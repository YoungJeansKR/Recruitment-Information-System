#include "ApplyRecruitmentUI.h"
#include "ApplyRecruitment.h"
#include "Recruitment.h"
#include "File.h"
#include <iostream>

using namespace std;

/*
 * 함수 이름 : ApplyRecruitmentUI
 * 기능 : ApplyRecruitmentUI 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
ApplyRecruitmentUI::ApplyRecruitmentUI() {}


/*
 * 함수 이름 :startInterface
 * 기능 : GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void ApplyRecruitmentUI::startInterface() {}


/*
 * 함수 이름 : selectApply
 * 기능 : 결과 출력
 * 전달 인자 : ApplyRecruitment*, File*
 * 반환값 : 없음
 */
void ApplyRecruitmentUI::selectApply(ApplyRecruitment *applyRecruitment, File *file)
{
    string companyMemberBusinessId;

    file->ifs.seekg(file->readed);
    file->ifs >> companyMemberBusinessId;
    file->readed = file->ifs.tellg();

    Recruitment* recruitment = applyRecruitment->sendApplyRequest(companyMemberBusinessId);

    file->ofs << "4.2. 채용 지원" << '\n';
    file->ofs << "> " << recruitment->getCompanyMemberName() << " " << recruitment->getBusinessID() << " " << recruitment->getTask() << '\n' << '\n';
}