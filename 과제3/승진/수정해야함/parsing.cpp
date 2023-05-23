// ��� ����
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

#include "DataBase.h"
#include "File.h"

#include "SignUp.h"
#include "SignUpUI.h"
#include "LogIn.h"
#include "LogInUI.h"
#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask();
void join(DataBase* dataBase, File* file);
void login(DataBase* dataBase, File* file);
void searchRecruitment(DataBase* dataBase, File* file);
void program_exit(File* file);


int main() {

	doTask();
	return 0;
}


void doTask() {

	File* file = new File();
	DataBase* dataBase = new DataBase();

	// �޴� �Ľ��� ���� level ������ ���� ���� 
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;


	while (!is_program_exit) {
		// �Է����Ͽ��� �޴� ���� 2���� �б�
		file->ifs >> menu_level_1 >> menu_level_2;
		file->readed = file->ifs.tellg();

		// �޴� ���� �� �ش� ���� ���� 
		switch (menu_level_1)
		{
		case 1: {
			switch (menu_level_2) {
			case 1: // "1.1. ȸ�����ԡ� �޴� �κ� 
			{
				join(dataBase, file);
				break;
			}
			case 2: // "1.2. ȸ��Ż��" �޴� �κ� 
			{
				break;
			}
			default:
				break;
			}	
		}break;
			  
		case 2: {
			switch (menu_level_2) {
			case 1: // "2.1. �α��Ρ� �޴� �κ�
			{
				login(dataBase, file);
				break;
			}
			case 2: // "2.2. �α׾ƿ�" �޴� �κ� 
			{
				break;
			}
			default:
				break;
			}
		}break;

		case 3: {
			switch (menu_level_2) {
			case 1: // "3.1. ä�� ���� ��ϡ� �޴� �κ� 
			{
				break;
			}
			case 2: // "3.2. ��ϵ� ä�� ���� ��ȸ" �޴� �κ� 
			{
				break;
			}
			default:
				break;
			}
		}break;

		case 4: {
			switch (menu_level_2) {
			case 1: // "4.1. ä�� ���� �˻��� �޴� �κ� 
			{
				searchRecruitment(dataBase, file);
				break;
			}
			case 2: // "4.2. ä�� ����" �޴� �κ� 
			{
				break;
			}
			case 3: // "4.3. ���� ���� ��ȸ" �޴� �κ� 
			{
				break;
			}
			case 4: // "4.4. ���� ���" �޴� �κ� 
			{
				break;
			}
			default:
				break;
			}
		}break;

		case 5: {
			switch (menu_level_2) {
			case 1: // "5.1. ���� ���� ��衰 �޴� �κ� 
			{
				break;
			}
			default:
				break;
			}
		}break;

		case 6: {
			switch (menu_level_2) {
			case 1: // "6.1. ���ᡰ �޴� �κ�
			{
				program_exit(file);
				is_program_exit = 1;
				break;
			}
			default:
				break;
			}
		}break;

		default: {
			break;
		}
		}
	}
	return;
}


// "1.1. ȸ�����ԡ� �޴� �κ�
void join(DataBase* dataBase, File* file) {

	SignUp* signUp = new SignUp(dataBase);
	signUp->getSignUpUI()->addNewMember(signUp, file);
}


// "2.1. �α��Ρ� �޴� �κ� 
void login(DataBase* dataBase, File* file) {
	LogIn* logIn = new LogIn(dataBase);
	logIn->getLogInUI()->login(logIn, file);
}


// "4.1. ä�� ���� �˻��� �޴� �κ�
void searchRecruitment(DataBase* dataBase, File* file) {
	SearchRecruitment* recruitment = new SearchRecruitment(dataBase);
	//recruitment->getSearchRecruitmentUI()->SearchRecruitment(recruitment, file);
}


// "6.1. ���ᡰ �޴� �κ�
void program_exit(File* file) {
	cout << "6.1 ����";
	file->ofs << "6.1 ����";
	file->ifs.close();
	file->ofs.close();
}
