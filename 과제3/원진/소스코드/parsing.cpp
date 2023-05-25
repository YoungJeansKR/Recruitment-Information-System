// 헤더 선언
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

#include "File.h"
#include "DataBase.h"
#include "Recruitment.h"

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
#include "ListMyRecruitmentUI.h"
#include "ListMyRecruitment.h"

#include "SearchRecruitmentUI.h"
#include "SearchRecruitment.h"
#include "ApplyRecruitmentUI.h"
#include "ApplyRecruitment.h"
#include "ListMyApplyUI.h"
#include "ListMyApply.h"
#include "CancelApply.h"
#include "CancelApplyUI.h"
#include "ShowApplyStats.h"
#include "ShowApplyStatsUI.h"
#include "ShowApplicantStats.h"
#include "ShowApplicantStatsUI.h"

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void join(DataBase* dataBase, File* file);
void withdraw(DataBase* dataBase, File* file);
void login(DataBase* dataBase, File* file);
void logout(DataBase* dataBase, File* file);
void createRecruitment(DataBase* dataBase, File* file);
void listMyRecruitment(DataBase* dataBase, File* file);
void searchRecruitment(DataBase* dataBase, File* file);
void apply(DataBase* dataBase, File* file);
void listMyApply(DataBase* dataBase, File* file);
void cancelApply(DataBase* dataBase, File* file);
void showStats(DataBase* dataBase, File* file);
void program_exit(File* file);

int main() {

	doTask();
	return 0;
}

void doTask() {

    File* file = new File();
    DataBase* dataBase = new DataBase();

	// 메뉴 파싱을 위한 level 구분을 위한 변수
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while(!is_program_exit) {

		// 입력파일에서 메뉴 숫자 2개를 읽기
        file->ifs >> menu_level_1 >> menu_level_2;
        file->readed = file->ifs.tellg();
		// 메뉴 구분 및 해당 연산 수행
		switch(menu_level_1)
		{
			case 1: {
				switch(menu_level_2) {
					case 1: // "1.1. 회원가입“ 메뉴 부분
					{
                        join(dataBase, file);
                        break;
					}
					case 2: // "1.2. 회원탈퇴" 메뉴 부분
					{
                        withdraw(dataBase, file);
                        break;
					}
                    default:
                        break;
                }
			}break;

			case 2: {
				switch(menu_level_2) {
					case 1: // "2.1. 로그인“ 메뉴 부분
					{
                        login(dataBase, file);
                        break;
					}
					case 2: // "2.2. 로그아웃" 메뉴 부분
					{
                        logout(dataBase, file);
                        break;
					}
                    default:
                        break;
                }
			}break;

			case 3: {
				switch(menu_level_2) {
					case 1: // "3.1. 채용 정보 등록“ 메뉴 부분
					{
                        createRecruitment(dataBase, file);
                        break;
					}
					case 2: // "3.2. 등록된 채용 정보 조회" 메뉴 부분
					{
                        listMyRecruitment(dataBase, file);
						break;
					}
                    default:
                        break;
                }
			}break;

			case 4: {
				switch(menu_level_2) {
					case 1: // "4.1. 채용 정보 검색“ 메뉴 부분
					{
                        searchRecruitment(dataBase, file);
                        break;
					}
					case 2: // "4.2. 채용 지원" 메뉴 부분
					{
						apply(dataBase, file);
                        break;
					}
					case 3: // "4.3. 지원 정보 조회" 메뉴 부분
					{
                        listMyApply(dataBase, file);
                        break;
					}
					case 4: // "4.4. 지원 취소" 메뉴 부분
					{
                        cancelApply(dataBase, file);
						break;
					}
                    default:
                        break;
                }
			}break;

			case 5: {
				switch(menu_level_2) {
					case 1: // "5.1. 지원 정보 통계“ 메뉴 부분
					{
                        showStats(dataBase, file);
						break;
					}
                    default:
                        break;
				}
			}break;

            case 6: {
                switch (menu_level_2) {
                    case 1: // "6.1. 종료" 메뉴 부분
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

// 1.1. 회원가입
void join(DataBase* dataBase, File* file) {

    SignUp* signUp = new SignUp(dataBase);
    signUp->getSignUpUI()->addNewMember(signUp, file);
}

// 1.2. 회원탈퇴
void withdraw(DataBase* dataBase, File* file) {

    Withdraw* withdraw = new Withdraw(dataBase);
    withdraw->GetWithdrawUI()->SelectWithdraw(withdraw, file);
}

// 2.1. 로그인
void login(DataBase* dataBase, File* file) {
    Login* login = new Login(dataBase);
    login->getLoginUI()->login(login, file);
}

// 2.2. 로그아웃
void logout(DataBase* dataBase, File* file) {
    Logout* logout = new Logout(dataBase);
    logout->getLogoutUI()->logout(logout, file);
}

// 3.1. 채용 정보 등록
void createRecruitment(DataBase* dataBase, File* file){
    CreateRecruitment* createRecruitment = new CreateRecruitment(dataBase);
    createRecruitment->getCreateRecruitmentUI()->addNewRecruitment(createRecruitment, file);
}

// 3.2. 등록된 채용 정보 조회
void listMyRecruitment(DataBase* dataBase, File* file) {
	ListMyRecruitment* listMyRecruitment = new ListMyRecruitment(dataBase);
	listMyRecruitment->getListMyRecruitmentUI()->selectShowRecruitmentList(listMyRecruitment, file);
}

// 4.1. 채용 정보 검색
void searchRecruitment(DataBase* dataBase, File* file) {
   SearchRecruitment* searchRecruitment = new SearchRecruitment(dataBase);
   SearchRecruitmentUI* searchRecruitmentUI = new SearchRecruitmentUI();
   searchRecruitmentUI->searchRecruitment(searchRecruitment, file);
}
// 4.2. 채용 지원
void apply(DataBase* dataBase, File* file) {
   ApplyRecruitment* applyRecruitment = new ApplyRecruitment(dataBase);
   ApplyRecruitmentUI* applyRecruitmentUI = new ApplyRecruitmentUI();
   applyRecruitmentUI->selectApply(applyRecruitment, file);
}

// 4.3. 지원 정보 조회
void listMyApply(DataBase* dataBase, File* file) {
    ListMyApply* listMyApply = new ListMyApply(dataBase);
    listMyApply->getListMyApplyUI()->selectShowApplyList(listMyApply, file);
}

// 4.4. 지원 취소
void cancelApply(DataBase* dataBase, File* file) {
   CancelApply* cancelApply = new CancelApply(dataBase);
   CancelApplyUI* cancelApplyUI = new CancelApplyUI();
   cancelApplyUI->selectCancelApply(cancelApply, file);
}

// 5.1 지원 정보 통계
void showStats(DataBase* dataBase, File* file) {

    int loginIndex = dataBase->getLoginIndex();
    Member* member = (dataBase)->getMemberList()[loginIndex];

    if (member->getUserType() == 1) {

        CompanyMember* companyMember = dynamic_cast<CompanyMember*>(member);
        ShowApplicantStats* showApplicantStats = new ShowApplicantStats(dataBase);
        ShowApplicantStatsUI* showApplicantStatsUI = new ShowApplicantStatsUI();
        showApplicantStatsUI->showApplicantStats(showApplicantStats, companyMember, file);

    } else {

        GeneralMember* generalMember = dynamic_cast<GeneralMember*>(member);
        ShowApplyStats* showApplyStats = new ShowApplyStats(dataBase);
        ShowApplyStatsUI* showApplyStatsUI = new ShowApplyStatsUI();
        showApplyStatsUI->showApplyStats(showApplyStats, generalMember, file);

    }
    
}

// 6.1. 종료
void program_exit(File* file) {
    cout << "6.1 종료";
    file->ofs << "6.1 종료";
    file->ifs.close();
    file->ofs.close();
}