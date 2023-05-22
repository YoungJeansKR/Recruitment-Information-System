#include <iostream>
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
#include "SignUpUI.h"
using namespace std;

void doTask();
void join();
void program_exit();


int main()
{
	doTask();
	return 0;
}


void doTask()
{	// 메뉴 파싱을 위한 level 구분을 위한 변수
	
	int menu_level_1 = 0, menu_level_2 = 0, is_program_exit = 0;

	while (!is_program_exit)
	{	// 입력파일에서 메뉴 숫자 2개를 읽기
		cin >> menu_level_1 >> menu_level_2;

		// 메뉴 구분 및 해당 연산 수행
		switch (menu_level_1)
		{
		case 1:
			switch (menu_level_2)
			{
			case 1: // "1.1. 회원가입“ 메뉴 부분
				join();
				break;
			case 2:
				break;
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			switch (menu_level_2)
			{
			case 1: // "6.1. 종료“ 메뉴 부분
				program_exit();
				is_program_exit = 1;
				break;
			}
			break;
		default:
			break;
		}		
	}

	return;	
}

void join()
{
	SignUpUI signupui;
	signupui.startInterface();
}

void program_exit()
{
	cout << "6.1. 종료" << endl;
}