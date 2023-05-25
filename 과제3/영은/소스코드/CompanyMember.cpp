#include "CompanyMember.h"
#include "Recruitment.h"

CompanyMember::CompanyMember()
{
    recruitmentList.clear();
}

void CompanyMember::createNewRecruitment(Recruitment *newRecruitment) {
    recruitmentList.push_back(newRecruitment);
}
