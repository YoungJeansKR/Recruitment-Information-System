#include "Database.h"
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"

DataBase::DataBase()
{
	memberList.clear();
}

void DataBase::addNewCompanyMember(Member* companymember)
{
	memberList.push_back(companymember);
}

void DataBase::addNewGeneralMember(Member* generalmember)
{
	memberList.push_back(generalmember);
}
