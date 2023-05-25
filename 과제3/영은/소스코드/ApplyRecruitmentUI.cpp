#include "ApplyRecruitmentUI.h"
#include "ApplyRecruitment.h"
#include "Recruitment.h"
#include "File.h"
#include <iostream>

using namespace std;

ApplyRecruitmentUI::ApplyRecruitmentUI() {}

void ApplyRecruitmentUI::startInterface() {}

void ApplyRecruitmentUI::selectApply(ApplyRecruitment *applyRecruitment, Recruitment *curRecruitment, File *file) {
    applyRecruitment->SendApplyRequest(curRecruitment);

    cout << "4.2. 채용 지원" << endl;
    cout << "> " << curRecruitment->getCompanyMemberName() << " " << curRecruitment->getBusinessID() << " " << curRecruitment->getTask() << endl << endl;
    file->ofs << "4.2. 채용 지원" << '\n';
    file->ofs << "> " << curRecruitment->getCompanyMemberName() << " " << curRecruitment->getBusinessID() << " " << curRecruitment->getTask() << '\n' << '\n';
}