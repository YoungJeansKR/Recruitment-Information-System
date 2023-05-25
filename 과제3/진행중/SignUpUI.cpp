#include "SignUpUI.h"
#include "SignUp.h"
#include "Member.h"
#include "File.h"
using namespace std;

SignUpUI::SignUpUI()
{

}

void SignUpUI::startInterface()
{
	// GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void SignUpUI::addNewMember(SignUp* signUp, File* file)
{
	// ���� �Է� �ޱ�
	int user_type = 0;
	string name = "";
	string ssn = "";
	string id = "";
	string password = "";

	file->ifs.seekg(file->readed);
	file->ifs >> user_type >> name >> ssn >> id >> password;
	file->readed = file->ifs.tellg();

	signUp->addNewMember(user_type, name, ssn, id, password);

	cout << "1.1. 회원가입" << endl;
	cout << "> " << user_type << " " << name << " " << ssn << " " << id << " " << password << " " << endl << endl;
	file->ofs << "1.1. 회원가입" << '\n';
	file->ofs << "> " << user_type << " " << name << " " << ssn << " " << id << " " << password << " " << '\n' << '\n';
}