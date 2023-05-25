#include "ListMyRecruitmentUI.h"
#include "ListMyRecruitment.h"
#include "File.h"
#include "Recruitment.h"
#include <vector>

ListMyRecruitmentUI::ListMyRecruitmentUI()
{

}

void ListMyRecruitmentUI::StartInterface()
{

}

void ListMyRecruitmentUI::SelectShowRecruitmentList(ListMyRecruitment* listMyRecruitment, File* file)
{
	std::vector<Recruitment*> data = listMyRecruitment->ShowMyRecruitments();

	file->ofs << "3.2. 등록된 채용 정보 조회" << '\n';
	for (Recruitment* recruitment : data)
	{
		if (recruitment->GetAmount() > 0)
		{
			file->ofs << "> " << recruitment->GetTask() << " " << recruitment->GetCapacity() << " " << recruitment->GetDeadline() <<" "<< '\n';
		}
	}
	file->ofs << '\n';
}