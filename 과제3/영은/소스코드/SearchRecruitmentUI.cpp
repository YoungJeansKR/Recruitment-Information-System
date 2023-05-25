#include "SearchRecruitmentUI.h"
#include "SearchRecruitment.h"
#include "File.h"
#include "Recruitment.h"

using namespace std;

SearchRecruitmentUI::SearchRecruitmentUI() {}

void SearchRecruitmentUI::startInterface() {}

void SearchRecruitmentUI::searchRecruitment(SearchRecruitment *searchRecruitment, File *file) {

    std::string companyMemberName;

    file->ifs.seekg(file->readed);
    file->ifs >> companyMemberName;
    file->readed = file->ifs.tellg();

    Recruitment* recruitment = searchRecruitment->showRecruitmentDetails(companyMemberName);

    cout << "4.1. 채용 정보 검색" << endl;
    cout << "> " << recruitment->getCompanyMemberName() << " " << recruitment->getBusinessID() << " " << recruitment->getTask() << " " << recruitment->getCapacity() << " " <<  recruitment->getDeadline() << endl << endl;
    file->ofs << "4.1. 채용 정보 검색" << '\n';
    file->ofs << "> " << recruitment->getCompanyMemberName() << " " << recruitment->getBusinessID() << " " << recruitment->getTask() << " " << recruitment->getCapacity() << " " <<  recruitment->getDeadline() << '\n' << '\n';

}