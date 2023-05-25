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

	file->ofs << "3.2. ��ϵ� ä�� ���� ��ȸ" << '\n';
	for (Recruitment* recruitment : data)
	{
		if (recruitment->getNum() > 0)
		{
			file->ofs << "> " << recruitment->getTask() << " " << recruitment->getCapacity() << " " << recruitment->getDeadline() <<" "<< '\n';
		}
	}
	file->ofs << '\n';
}