/*
	솔루션 / 프로젝트 / 소스파일: Ch12 / Prj07 / gfunc.c
	정적 전역변수 선언과 사용
	V 1.0 2022.
*/

void testglobal()
{
	//정적 전역변수 svar는 선언 및 사용 불가능
	//전역변수는 선언 및 사용가능
	extern gvar;
	gvar = 10;
}