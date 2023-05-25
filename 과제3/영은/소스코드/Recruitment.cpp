#include "Recruitment.h"
#include <string>

/*
 * 함수 이름 : Recruitment
 * 기능 : Recruitment 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
Recruitment::Recruitment() {
    task = "";
    capacity = "";
    deadline = "";
    businessID = "";
}

/*
 * 함수 이름 : Recruitment
 * 기능 : Recruitment
 * 전달 인자 : 업무, 인원 수, 마감일
 * 반환값 : 없음
 */
Recruitment::Recruitment(std::string task, std::string capacity, std::string deadline) {
    this->task = task;
    this->capacity = capacity;
    this->deadline = deadline;
    this->businessID = "";
}