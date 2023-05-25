#include "ListMyRecruitmentUI.h"
#include "ListMyRecruitment.h"
#include "File.h"
#include "Recruitment.h"
#include <vector>

using namespace std;

/*
 * 함수 이름 : ListMyRecruitmentUI
 * 기능 : ListMyRecruitmentUI 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
ListMyRecruitmentUI::ListMyRecruitmentUI() {}


/*
 * 함수 이름 :startInterface
 * 기능 : GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void ListMyRecruitmentUI::startInterface() {}


/*
 * 함수 이름 : selectShowRecruitmentList
 * 기능 : 결과 출력
 * 전달 인자 : ListMyRecruitment*, File*
 * 반환값 : 없음
 */
void ListMyRecruitmentUI::selectShowRecruitmentList(ListMyRecruitment* listMyRecruitment, File* file)
{
	std::vector<Recruitment*> data = listMyRecruitment->showMyRecruitments();

	file->ofs << "3.2. 등록된 채용 정보 조회" << '\n';

	for (Recruitment* recruitment : data)
	{
		file->ofs << "> " << recruitment->getTask() << " " << recruitment->getCapacity() << " " << recruitment->getDeadline() <<" "<< '\n';
	}
	file->ofs << '\n';
}