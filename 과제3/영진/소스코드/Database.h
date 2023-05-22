#pragma once
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class GeneralMember;
class CompanyMember;

class DataBase
{
public:
	DataBase();

	vector<CompanyMember*> GetCompanyMemberList() { return companyMemberList; }
	vector<GeneralMember*> GetGeneralMemberList() { return generalMemberList; }
	int GetLogInIndex() { return logInIndex; }
	void SetLogInIndex(int index) { logInIndex = index; }

	void DeleteSeller(int index) { companyMemberList.erase(companyMemberList.begin() + index); }
	void DeleteBuyer(int index) { generalMemberList.erase(generalMemberList.begin() + index); }

	void addNewCompanyMember(CompanyMember* companymember) {
		companyMemberList.push_back(companymember);
		logInIndex++;
	}
	void addNewGeneralMember(GeneralMember* generalmember) {
		generalMemberList.emplace_back(generalmember);
		logInIndex++;
	}

private:
	vector<CompanyMember*> companyMemberList;
	vector<GeneralMember*> generalMemberList;

	int logInIndex;
};