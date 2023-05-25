#include "CreateRecruitmentUI.h"
#include "CreateRecruitment.h"
#include "File.h"

CreateRecruitmentUI::createRecruitmentUI()
{

}

void CreateRecruitmentUI::startInterface()
{
	
}

void CreateRecruitmentUI::createNewRecruitment(CreateRecruitment* createRecruitment, File* file)
{
	// ���� �Է� �ޱ�
	std::string task = "";
	std::string capacity = "";
	std::string deadline = "";

	file->ifs.seekg(file->readed);
	file->ifs >> task >> capacity >> deadline;
	file->readed = file->ifs.tellg();

	createRecruitment->addNewRecruitment(task, capacity, deadline);

	file->ofs << "3.1. ä�� ���� ���" << '\n';
	file->ofs << "> " << task << " " << capacity << " " << deadline << " " << '\n' << '\n';
}