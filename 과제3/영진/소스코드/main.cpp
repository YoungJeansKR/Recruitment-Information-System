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
{	// �޴� �Ľ��� ���� level ������ ���� ����
	
	int menu_level_1 = 0, menu_level_2 = 0, is_program_exit = 0;

	while (!is_program_exit)
	{	// �Է����Ͽ��� �޴� ���� 2���� �б�
		cin >> menu_level_1 >> menu_level_2;

		// �޴� ���� �� �ش� ���� ����
		switch (menu_level_1)
		{
		case 1:
			switch (menu_level_2)
			{
			case 1: // "1.1. ȸ�����ԡ� �޴� �κ�
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
			case 1: // "6.1. ���ᡰ �޴� �κ�
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
	cout << "6.1. ����" << endl;
}