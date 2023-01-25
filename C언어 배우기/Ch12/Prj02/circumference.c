/*
	솔루션 / 프로젝트 / 소스파일: Ch12 / Prj03 / circumference.c
	외부 전역변수 PI를 참조
	V 1.0 2022.
*/

//이미 외부에서 선언된 전역변수임을 알리는 선언
extern double PI;

double getCircum(double r)
{
	//extern double PI;
	return 2 * r * PI;
}