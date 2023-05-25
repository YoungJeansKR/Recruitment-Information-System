#include "CancelApplyUI.h"
#include "CancelApply.h"
#include "Recruitment.h"
#include "File.h"
#include <iostream>

using namespace std;

/*
 * 함수 이름 : CancelApplyUI
 * 기능 : CancelApplyUI 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
CancelApplyUI::CancelApplyUI() {}


/*
 * 함수 이름 :startInterface
 * 기능 : GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void CancelApplyUI::startInterface() {}


/*
 * 함수 이름 : selectCancelApply
 * 기능 : 결과 출력
 * 전달 인자 : CancelApply*, File*
 * 반환값 : 없음
 */
void CancelApplyUI::selectCancelApply(CancelApply *cancelApply, File *file)
{
    string companyMemberBusinessId;

    file->ifs.seekg(file->readed);
    file->ifs >> companyMemberBusinessId;
    file->readed = file->ifs.tellg();

    Recruitment* recruitment = cancelApply->sendCancelApplyRequest(companyMemberBusinessId);

    cout << "4.4. 지원 취소" << endl;
    cout << "> " << recruitment->getCompanyMemberName() << " " << recruitment->getBusinessID() << " " << recruitment->getTask() << endl << endl;
    file->ofs << "4.4. 지원 취소" << '\n';
    file->ofs << "> " << recruitment->getCompanyMemberName() << " " << recruitment->getBusinessID() << " " << recruitment->getTask() << '\n' << '\n';
}