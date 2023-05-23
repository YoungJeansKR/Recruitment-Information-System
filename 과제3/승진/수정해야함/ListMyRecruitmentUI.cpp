#include "ListMyRecruitmentUI.h"
#include "ListMyRecruitment.h"
#include "File.h"
#include "Recruitment.h"
#include <vector>

ListSellingProductUI::ListMyRecruitmentUI()
{

}

void ListMyRecruitmentUI::StartInterface()
{

}

void ListMyRecruitmentUI::SelectShowList(ListMyRecruitment* listMyRecruitment, File* file)
{
	std::vector<Recruitment*> data = listMyRecruitment->ShowMyRecruitment();

	file->ofs << "3.2. ��ϵ� ä�� ���� ��ȸ" << '\n';
	for (Recruitment* recruitment : data)
	{
		if (recruitment->GetAmount() > 0)
		{
			file->ofs << "> " << recruitment->GetTask() << " " << recruitment->GetCapacity() << " " << recruitment->GetDeadline() <<" "<< '\n';
		}
	}
	file->ofs << '\n';
}