#include "DataBase.h"
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"

DataBase::DataBase()
	: logInIndex(-1)
{
	companyMemberList.clear();
	generalMemberList.clear();
}