#include "WithdrawUI.h"
#include "Withdraw.h"
#include "File.h"

/*
 * 함수 이름 : WithdrawUI
 * 기능 : WithdrawUI 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
WithdrawUI::WithdrawUI() {}


/*
 * 함수 이름 :startInterface
 * 기능 : GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void WithdrawUI::startInterface() {}


/*
 * 함수 이름 : selectWithdraw
 * 기능 : 결과 출력
 * 전달 인자 : Withdraw*, File*
 * 반환값 : 없음
 */
void WithdrawUI::selectWithdraw(Withdraw* withdraw, File* file)
{
    std::string result = withdraw->tryWithdraw();
	
	cout << "1.2 회원탈퇴" << endl;
	cout << "> " << result << endl << endl;
    file->ofs << "1.2. 회원탈퇴" << '\n';
    file->ofs << "> " << result << " " << "\n" << "\n";
}