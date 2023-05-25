#include "ApplyRecruitmentUI.h"
#include "ApplyRecruitment.h"
#include "Recruitment.h"
#include "File.h"
#include <iostream>

using namespace std;

ApplyRecruitmentUI::ApplyRecruitmentUI() {}

void ApplyRecruitmentUI::startInterface() {}

void ApplyRecruitmentUI::selectApply(ApplyRecruitment *applyRecruitment, File *file) {

    string companyMemberBusinessId;

    file->ifs.seekg(file->readed);
    file->ifs >> companyMemberBusinessId;
    file->readed = file->ifs.tellg();

    Recruitment* recruitment = applyRecruitment->sendApplyRequest(companyMemberBusinessId);

    cout << "4.2. 채용 지원" << endl;
    cout << "> " << recruitment->getCompanyMemberName() << " " << recruitment->getBusinessID() << " " << recruitment->getTask() << endl << endl;
    file->ofs << "4.2. 채용 지원" << '\n';
    file->ofs << "> " << recruitment->getCompanyMemberName() << " " << recruitment->getBusinessID() << " " << recruitment->getTask() << '\n' << '\n';
}