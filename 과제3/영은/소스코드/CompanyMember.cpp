#include "CompanyMember.h"
#include "Recruitment.h"

CompanyMember::CompanyMember()
{
    recruitmentList.clear();
}

void CompanyMember::CreateNewRecruitment(Recruitment *newRecruitment) {
    recruitmentList.push_back(newRecruitment);
}
