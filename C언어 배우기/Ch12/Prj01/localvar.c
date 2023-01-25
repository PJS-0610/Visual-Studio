/*
	솔루션 / 프로젝트 / 소스파일: Ch12 / Prj01 / localvar.c
	지역변수 선언과 사용
	V 1.0 2022.
*/

#include <stdio.h>

void sub(int param);	//함수 원형

int main(void)
{
	//지역변수 선언
	auto int n = 10;
	printf("%d\n", n);

	//m, sum은 for 문 내부의 블록 지역변수
	for (int m = 0, sum = 0; m < 3; m++)
	{
		sum += m;
		printf("\t%d %d\n", m, sum);
	}
	printf("%d\n", n);		//n은 지역변수이므로 참조가능	//m과 sum은 for 문안에서 선언된 변수이므로 여기서 사용 불가능

	//함수 호출
	sub(20);

	return 0;
}

//매개변수인 param도 지역변수와 같이 사용
void sub(int param)
{
	//지역변수 local
	auto int local = 100;
	printf("\t%d %d\n", param, local);		//param 과 local 참조 가능	//n은 위의 int main(void)안에서 선언된 지역변수기 때문에 참조 불가능

}