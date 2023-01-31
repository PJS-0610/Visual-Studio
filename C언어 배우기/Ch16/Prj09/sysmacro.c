/*
	솔루션 / 프로젝트 / 소스파일: Ch16 / Prj09 / sysmacro.h
	이미 정의된 매크로 이용
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	printf("__DATE__ -> %s\n", __DATE__);
	printf("__FILE__ -> %s\n", __FILE__);
	printf("__LINE__ -> %d\n", __LINE__);
	printf("__TIME__ -> %s\n", __TIME__);
	printf("__TIMESTAMP__ -> %s\n", __TIMESTAMP__);

	return 0;
}