#include "ListMyRecruitmentUI.h"
#include "ListMyRecruitment.h"
#include "File.h"
#include "Recruitment.h"
#include <vector>

using namespace std;

ListMyRecruitmentUI::ListMyRecruitmentUI() {}

void ListMyRecruitmentUI::startInterface() {}

void ListMyRecruitmentUI::selectShowRecruitmentList(ListMyRecruitment* listMyRecruitment, File* file)
{
	std::vector<Recruitment*> data = listMyRecruitment->showMyRecruitments();

	file->ofs << "3.2. 등록된 채용 정보 조회" << '\n';
	cout << "3.2 등록된 채용 정보 조회" << '\n';
	
	for (Recruitment* recruitment : data)
	{
		file->ofs << "> " << recruitment->getTask() << " " << recruitment->getCapacity() << " " << recruitment->getDeadline() <<" "<< '\n';
		cout << "> " << recruitment->getTask() << " " << recruitment->getCapacity() << " " << recruitment->getDeadline() <<" "<< '\n';
	}
	file->ofs << '\n';
	cout << '\n';
}