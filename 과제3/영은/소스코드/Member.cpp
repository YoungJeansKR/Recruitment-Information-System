#include "Member.h"

/*
 * 함수 이름 : Member
 * 기능 : Member 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
Member::Member()
{
	this->user_type = 0;
	this->name = "";
	this->ssn = "";
	this->id = "";
	this->password = "";
}


/*
 * 함수 이름 : Member
 * 기능 : Member 생성자
 * 전달 인자 : 유저타입, 이름, 주민번호 또는 사업자번호, 아이디, 비밀번호
 * 반환값 : 없음
 */
Member::Member(int user_type, string name, string ssn, string id, string password)
{
	this->user_type = user_type;
	this->name = name;
	this->ssn = ssn;
	this->id = id;
	this->password = password;
}