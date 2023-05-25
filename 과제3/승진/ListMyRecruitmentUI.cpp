#include "ListMyRecruitmentUI.h"
#include "ListMyRecruitment.h"
#include "File.h"
#include "Recruitment.h"
#include <vector>

ListMyRecruitmentUI::ListMyRecruitmentUI()
{

}

void ListMyRecruitmentUI::startInterface()
{

}

void ListMyRecruitmentUI::selectShowRecruitmentList(ListMyRecruitment* listMyRecruitment, File* file)
{
	std::vector<Recruitment*> data = listMyRecruitment->ShowMyRecruitments();

	file->ofs << "3.2. 등록된 채용 정보 조회" << '\n';
	for (Recruitment* recruitment : data)
	{
		if (recruitment->getNum() > 0)
		{
			file->ofs << "> " << recruitment->getTask() << " " << recruitment->getCapacity() << " " << recruitment->getDeadline() <<" "<< '\n';
		}
	}
	file->ofs << '\n';
}