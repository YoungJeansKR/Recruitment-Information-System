#pragma once

class ListMyRecruitment;
class File;

class ListMyRecruitmentUI
{
public:
	ListMyRecruitmentUI();

	void startInterface();
	void selectShowRecruitmentList(ListMyRecruitment* listMyRecruitment, File* file);
};