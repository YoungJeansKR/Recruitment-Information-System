#include "CompanyMember.h"

void CompanyMember::createNewCompanyMember()
{
	string name, businessId, id, password;

	cout << "1.1. ȸ������" << endl;

	cin >> name >> businessId >> id >> password;

	CompanyMember companymember(name, businessId, id, password);
}
