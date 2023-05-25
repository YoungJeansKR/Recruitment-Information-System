#include "LogoutUI.h"
#include "Logout.h"
#include "Member.h"
#include "File.h"
using namespace std;

LogoutUI::LogoutUI()
{

}

void LogoutUI::startInterface()
{
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

void LogoutUI::logout(Logout* logOut, File* file)
{
	string id = logOut->logout();

	cout << "2.2. 로그아웃" << endl;
	cout << "> " << id << endl << endl;
	file->ofs << "2.2. 로그아웃" << '\n';
	file->ofs << "> " << id << '\n' << '\n';
}