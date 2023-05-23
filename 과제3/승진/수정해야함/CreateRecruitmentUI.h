#pragma once

class CreateRecruitment;
class File;

class CreateRecruitmentUI
{
public:
	createRecruitmentUI();

	void startInterface();
	void createNewRecruitment(CreateRecruitment* createRecruitment, File* file);
};