#include "ListMyApplyUI.h"
#include "ListMyApply.h"
#include "File.h"
#include "Recruitment.h"
#include <vector>

using namespace std;

/*
 * 함수 이름 : ListMyApplyUI
 * 기능 : ListMyApplyUI 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
ListMyApplyUI::ListMyApplyUI() {}


/*
 * 함수 이름 :startInterface
 * 기능 : GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void ListMyApplyUI::startInterface() {}


/*
 * 함수 이름 : selectShowApplyList
 * 기능 : 결과 출력
 * 전달 인자 : ListMyApply*, File*
 * 반환값 : 없음
 */
void ListMyApplyUI::selectShowApplyList(ListMyApply* listMyApply, File* file)
{
    std::vector<Recruitment*> data = listMyApply->showMyApplies();

    cout << "4.3. 지원 정보 조회" << endl;
    file->ofs << "4.3. 지원 정보 조회" << '\n';

    for (Recruitment* recruitment : data) {
        cout << "> " << recruitment->getCompanyMemberName() << " " << recruitment->getBusinessID() << " " << recruitment->getTask() << " " << recruitment->getCapacity() << " " << recruitment->getDeadline() <<" " << endl;
        file->ofs << "> " << recruitment->getCompanyMemberName() << " " << recruitment->getBusinessID() << " " << recruitment->getTask() << " " << recruitment->getCapacity() << " " << recruitment->getDeadline() <<" " << '\n';
    }
    cout << endl;
    file->ofs << '\n';
}