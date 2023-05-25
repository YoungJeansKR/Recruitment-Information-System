#include "GeneralMember.h"
#include "Recruitment.h"

GeneralMember::GeneralMember() {
    recruitmentList.clear();
}

void GeneralMember::createApply(Recruitment* newRecruitment) {
    recruitmentList.push_back(newRecruitment);
}
