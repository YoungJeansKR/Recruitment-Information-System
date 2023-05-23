#pragma once
#include <iostream>
#include <string>
using namespace std;



class Member
{
public:
	Member();
	Member(int user_type, string name, string ssn, string id, string password);

	string getId() { return id; }
	string getPassword() { return password; }
	int getUserType() { return user_type; }
	void setLoginIndex(int i) { index = i + 1; }
	int getLoginIndex() { return index; }

private:
	int user_type;		// ȸ������
	string name;		// �̸�
	string ssn;			// ����ڹ�ȣ, �ֹι�ȣ
	string id;			// ���̵�
	string password;	// ��й�ȣ
	int index;			// ȸ����ȣ
};
