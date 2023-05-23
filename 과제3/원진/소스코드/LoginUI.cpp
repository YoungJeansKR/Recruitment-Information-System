#include "LoginUI.h"
#include "Login.h"
#include "Member.h"
#include "File.h"
using namespace std;

LoginUI::LoginUI()
{

}

void LoginUI::startInterface()
{
	// GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void LoginUI::login(Login* logIn, File* file)
{
	// ���� �Է� �ޱ�
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