#include "LoginUI.h"
#include "Login.h"
#include "Member.h"
#include "File.h"
using namespace std;

LoginUI::LoginUI() {}

void LoginUI::startInterface()
{
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

void LoginUI::login(Login* logIn, File* file)
{
	string id = "";
	string password = "";

	file->ifs.seekg(file->readed);
	file->ifs >> id >> password;
	file->readed = file->ifs.tellg();

	logIn->login(id, password);

	file->ofs << "2.1. 로그인" << '\n';
	file->ofs << "> " << id << " " << password << " " << '\n' << '\n';
}