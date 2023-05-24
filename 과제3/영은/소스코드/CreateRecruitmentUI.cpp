#include "CreateRecruitmentUI.h"
#include "CreateRecruitment.h"
#include "File.h"
using namespace std;

CreateRecruitmentUI::CreateRecruitmentUI() {}

void CreateRecruitmentUI::StartInterface() {}

void CreateRecruitmentUI::CreateNewRecruitment(CreateRecruitment *createRecruitment, File *file)
{
    // 파일 입력
    std::string task = "";
    std::string capacity = "";
    std::string deadline = "";

    file->ifs.seekg(file->readed);
    file->ifs >> task >> capacity >> deadline;
    file->readed = file->ifs.tellg();

    createRecruitment->AddNewRecruitment(task, capacity, deadline);

    cout << "3.1. 채용 정보 등록" << endl;
    cout << "> " << task << " " << capacity << " " << deadline << '\n' << '\n';
    file->ofs << "3.1. 채용 정보 등록" << '\n';
    file->ofs << "> " << task << " " << capacity << " " << deadline << '\n' << '\n';


}