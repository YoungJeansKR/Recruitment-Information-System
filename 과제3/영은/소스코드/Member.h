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
	int user_type;		// 회원유형
	string name;		// 이름
	string ssn;			// 사업자번호, 주민번호
	string id;			// 아이디
	string password;	// 비밀번호
};