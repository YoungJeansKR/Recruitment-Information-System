// 헤더 선언
 #include <stdio.h>
 #include <string.h>

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void join();
void program_exit();

// 파일 입출력을 위한 초기화
FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

// 변수 선언

int main() {

	doTask();
	return 0;
}


void doTask() {

	// 메뉴 파싱을 위한 level 구분을 위한 변수
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while(!is_program_exit) {
		// 입력파일에서 메뉴 숫자 2개를 읽기
		fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

		// 메뉴 구분 및 해당 연산 수행
		switch(menu_level_1)
		{
			case 1: {
				switch(menu_level_2) {
					case 1: // "1.1. 회원가입“ 메뉴 부분
					{
						break;
					}
					case 2: // "1.2. 회원탈퇴" 메뉴 부분
					{
						break;
					}
				}
			}

			case 2: {
				switch(menu_level_2) {
					case 1: // "2.1. 로그인“ 메뉴 부분
					{
						break;
					}
					case 2: // "2.2. 로그아웃" 메뉴 부분
					{
						break;
					}
				}
			}

			case 3: {
				switch(menu_level_2) {
					case 1: // "3.1. 채용 정보 등록“ 메뉴 부분
					{
						break;
					}
					case 2: // "3.2. 등록된 채용 정보 조회" 메뉴 부분
					{
						break;
					}
				}
			}

			case 4: {
				switch(menu_level_2) {
					case 1: // "4.1. 채용 정보 검색“ 메뉴 부분
					{
						break;
					}
					case 2: // "4.2. 채용 지원" 메뉴 부분
					{
						break;
					}
					case 3: // "4.3. 지원 정보 조회" 메뉴 부분
					{
						ListMyApply* listMyApply = new ListMyApply(dataBase);
                        ListMyApplyUI* listMyApplyUI = new ListMyApplyUI();
                        listMyApplyUI->SelectShowApplyList(listMyApply, file);
                        break;
					}
					case 4: // "4.4. 지원 취소" 메뉴 부분
					{
						break;
					}
				}
			}

			case 5: {
				switch(menu_level_2) {
					case 1: // "5.1. 지원 정보 통계“ 메뉴 부분
					{
						break;
					}
				}
			}

			case 6: {
				switch(menu_level_2) {
					case 1: // "6.1. 종료“ 메뉴 부분
					{
						program_exit();
						is_program_exit = 1;
						break;
					}
				}
			}
			default : {
				fprintf(out_fp, "미완성\n");
				break;
			}
		}
	}
	return;
}

void program_exit() {
}