#include "CancelApplyUI.h"
#include "CancelApply.h"
#include "Recruitment.h"
#include "File.h"
#include <iostream>

using namespace std;

CancelApplyUI::CancelApplyUI() {}

void CancelApplyUI::startInterface() {}

void CancelApplyUI::selectCancelApply(CancelApply *cancelApply, File *file) {

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