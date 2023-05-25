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
	string getName() { return name; }
	string getPassword() { return password; }
	string getSSN() { return ssn; }
	int getUserType() { return user_type; }
	virtual void casting() { return; }

private:
	int user_type;		// ȸ������
	string name;		// �̸�
	string ssn;			// ����ڹ�ȣ, �ֹι�ȣ
	string id;			// ���̵�
	string password;	// ��й�ȣ
};