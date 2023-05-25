#pragma once

class ListMyRecruitment;
class File;

class ListMyRecruitmentUI
{
public:
	ListMyRecruitmentUI();

	void StartInterface();
	void SelectShowRecruitmentList(ListMyRecruitment* listMyRecruitment, File* file);
};