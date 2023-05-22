#include "GeneralMember.h"

void GeneralMember::createNewGeneralMember()
{
	string name, residentId, id, password;

	cin >> name >> residentId >> id >> password;

	GeneralMember generalmember(name, residentId, id, password);
}
