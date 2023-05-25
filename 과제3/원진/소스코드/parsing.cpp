// ��� ����
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

#include "DataBase.h"
#include "File.h"

#include "SignUp.h"
#include "SignUpUI.h"
#include "Login.h"
#include "LoginUI.h"
#include "Logout.h"
#include "LogoutUI.h"
#include "Withdraw.h"
#include "WithdrawUI.h"

#include "CreateRecruitmentUI.h"
#include "CreateRecruitment.h"

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask();
void join(DataBase* dataBase, File* file);
void withdraw(DataBase* dataBase, File* file);
void login(DataBase* dataBase, File* file);
void logout(DataBase* dataBase, File* file);
void createRecruitment(DataBase* dataBase, File* file);
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
				withdraw(dataBase, file);
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
				logout(dataBase, file);
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
				createRecruitment(dataBase, file);
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

void withdraw(DataBase* dataBase, File* file) {

	Withdraw* withdraw = new Withdraw(dataBase);
	withdraw->GetWithdrawUI()->SelectWithdraw(withdraw, file);
}


// "2.1. �α��Ρ� �޴� �κ� 
void login(DataBase* dataBase, File* file) {
	Login* login = new Login(dataBase);
	login->getLoginUI()->login(login, file);
}

void logout(DataBase* dataBase, File* file) {
	Logout* logout = new Logout(dataBase);
	logout->getLogoutUI()->logout(logout, file);
}

// 3.1. 채용 정보 등록
void createRecruitment(DataBase* dataBase, File* file){
    CreateRecruitment* createRecruitment = new CreateRecruitment(dataBase);
    createRecruitment->GetCreateRecruitmentUI()->CreateNewRecruitment(createRecruitment, file);
}

// "4.1. ä�� ���� �˻��� �޴� �κ�
void searchRecruitment(DataBase* dataBase, File* file) {
}



// "6.1. ���ᡰ �޴� �κ�
void program_exit(File* file) {
	cout << "6.1 종료";
	file->ofs << "6.1 종료";
	file->ifs.close();
	file->ofs.close();
}
