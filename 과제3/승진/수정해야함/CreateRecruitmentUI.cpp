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
	// 파일 입력 받기
	std::string task = "";
	std::string capacity = "";
	std::string deadline = "";

	file->ifs.seekg(file->readed);
	file->ifs >> task >> capacity >> deadline;
	file->readed = file->ifs.tellg();

	createRecruitment->addNewRecruitment(task, capacity, deadline);

	file->ofs << "3.1. 채용 정보 등록" << '\n';
	file->ofs << "> " << task << " " << capacity << " " << deadline << " " << '\n' << '\n';
}