/*
	솔루션 / 프로젝트 / 소스파일: Ch16 / Prj10 / preif.h
	전처리기 지시자 #if를 이용
	V 1.0 2022.
*/


#include <stdio.h>

//상수 정의
#define WINDOWS 1
#define MAC 2
#define UNIX 3

//#define SYSTEM WINDOWS
#define SYSTEM UNIX

//전처리 #if #elif #else #endif
#if (SYSTEM ==WINDOWS)	
typedef long my_int;
#elif SYSTEM==MAC
typedef int my_int;
#elif SYSTEM ==UNIX
typedef long long my_int;
#else 
typedef short my_int;
#endif

int main(void)
{
	my_int n = 17;
	printf("변수크기: %d, 저장값: %d\n", sizeof(n), n);

	return 0;
}