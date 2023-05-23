#include "CompanyMember.h"

void CompanyMember::createNewCompanyMember()
{
	string name, businessId, id, password;

	cout << "1.1. 회원가입" << endl;

	cin >> name >> businessId >> id >> password;

	CompanyMember companymember(name, businessId, id, password);
}
