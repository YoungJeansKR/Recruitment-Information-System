#include "ListMyApplyUI.h"
#include "ListMyApply.h"
#include "File.h"
#include "Recruitment.h"
#include <vector>

using namespace std;

ListMyApplyUI::ListMyApplyUI() {}

void ListMyApplyUI::startInterface() {}

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