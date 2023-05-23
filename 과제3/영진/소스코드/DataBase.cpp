#include "DataBase.h"
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"

DataBase::DataBase()
	: logincnt(-1)
{
	memberList.clear();
}

void DataBase::addNewCompanyMember(Member* companymember)
{
	memberList.push_back(companymember);
	logincnt++;
}

void DataBase::addNewGeneralMember(Member* generalmember)
{
	memberList.push_back(generalmember);
	logincnt++;
}
