#include "CreateRecruitmentUI.h"
#include "CreateRecruitment.h"
#include "File.h"
using namespace std;

/*
 * 함수 이름 : CreateRecruitmentUI
 * 기능 : CreateRecruitmentUI 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
CreateRecruitmentUI::CreateRecruitmentUI() {}


/*
 * 함수 이름 :startInterface
 * 기능 : GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void CreateRecruitmentUI::startInterface() {}


/*
 * 함수 이름 : addNewRecruitment
 * 기능 : 결과 출력
 * 전달 인자 : CreateRecruitment*, File*
 * 반환값 : 없음
 */
void CreateRecruitmentUI::addNewRecruitment(CreateRecruitment *createRecruitment, File *file)
{
    // 파일 입력 받기
    std::string task = "";
    std::string capacity = "";
    std::string deadline = "";

    file->ifs.seekg(file->readed);
    file->ifs >> task >> capacity >> deadline;
    file->readed = file->ifs.tellg();

    createRecruitment->addNewRecruitment(task, capacity, deadline);

    cout << "3.1. 채용 정보 등록" << endl;
    cout << "> " << task << " " << capacity << " " << deadline << endl << endl;
    file->ofs << "3.1. 채용 정보 등록" << '\n';
    file->ofs << "> " << task << " " << capacity << " " << deadline << '\n' << '\n';
}