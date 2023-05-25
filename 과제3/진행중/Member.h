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

private:
	int user_type;		// 회원유형
	string name;		// 이름
	string ssn;			// 사업자번호, 주민번호
	string id;			// 아이디
	string password;	// 비밀번호
};
