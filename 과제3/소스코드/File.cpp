#include "File.h"
#include <iostream>

/*
 * 함수 이름 : File
 * 기능 : 파일 입출력을 위한 초기화
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
File::File()
{
	// 파일 입출력을 위한 초기화
	ifs.open("input.txt", std::ios::in);
	if (ifs.fail())
	{
		std::cerr << "ifs Error!" << std::endl;
	}
	ofs.open("output.txt", std::ios::out);
	if (ofs.fail())
	{
		std::cerr << "ofs Error!" << std::endl;
	}
}