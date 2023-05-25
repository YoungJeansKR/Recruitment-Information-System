#include "LoginUI.h"
#include "Login.h"
#include "Member.h"
#include "File.h"
using namespace std;

LoginUI::LoginUI() {}

void LoginUI::startInterface()
{
	// GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void LoginUI::login(Login* logIn, File* file)
{
	string id = "";
	string password = "";

	file->ifs.seekg(file->readed);
	file->ifs >> id >> password;
	file->readed = file->ifs.tellg();

	logIn->login(id, password);

	file->ofs << "2.1. �α���" << '\n';
	file->ofs << "> " << id << " " << password << " " << '\n' << '\n';
}