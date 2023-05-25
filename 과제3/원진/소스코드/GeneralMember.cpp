#include "GeneralMember.h"
#include "Recruitment.h"

GeneralMember::GeneralMember() {
    applyList.clear();
}

void GeneralMember::createApply(Recruitment* newRecruitment) {
    applyList.push_back(newRecruitment);
}
