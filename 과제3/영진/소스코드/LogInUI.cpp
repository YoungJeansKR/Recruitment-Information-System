#include "LogInUI.h"
#include "LogIn.h"
#include "Member.h"
#include "File.h"
using namespace std;

LogInUI::LogInUI()
{

}

void LogInUI::startInterface()
{
	// GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void LogInUI::login(LogIn* logIn, File* file)
{
	// ���� �Է� �ޱ�
	string id = "";
	string password = "";

	file->ifs.seekg(file->readed);
	file->ifs >> id >> password;
	file->readed = file->ifs.tellg();

	logIn->login(id, password);

	cout << "2.1. �α���" << endl;
	cout << "> " << id << " " << password << endl << endl;
	file->ofs << "2.1. �α���" << '\n';
	file->ofs << "> " << id << " " << password << " " << '\n' << '\n';
}