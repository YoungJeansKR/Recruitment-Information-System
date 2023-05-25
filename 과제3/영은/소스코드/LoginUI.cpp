#include "LoginUI.h"
#include "Login.h"
#include "Member.h"
#include "File.h"
using namespace std;

/*
 * 함수 이름 : LoginUI
 * 기능 : LoginUI 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
LoginUI::LoginUI() {}


/*
 * 함수 이름 :startInterface
 * 기능 : GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void LoginUI::startInterface() {}


/*
 * 함수 이름 : login
 * 기능 : 결과 출력
 * 전달 인자 : Login*, File*
 * 반환값 : 없음
 */
void LoginUI::login(Login* logIn, File* file)
{
	string id = "";
	string password = "";

	file->ifs.seekg(file->readed);
	file->ifs >> id >> password;
	file->readed = file->ifs.tellg();

	logIn->login(id, password);

	cout << "2.1. 로그인" << endl;
	cout << "> " << id << " " << password << endl << endl;
	file->ofs << "2.1. 로그인" << '\n';
	file->ofs << "> " << id << " " << password << " " << '\n' << '\n';
}