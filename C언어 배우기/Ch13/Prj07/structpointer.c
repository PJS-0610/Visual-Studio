/*
	솔루션 / 프로젝트 / 소스파일: Ch13 / Prj07 / structpointer.c
	구조체 포인터의 선언과 사용
	V 1.0 2022.
*/

#include <stdio.h>

struct lecture
{
	char name[20];
	int type;
	int credit;
	int hours;
};
typedef struct lecture lecture;

//제목을 위한 문자열
char* head[] = { "강좌명","강좌구분","학점","시수" };
//강좌 종류를 위한 문자열	
char* lectype[] = { "교양","일반선택","전공필수","전공선택" };

int main(void)
{
	lecture os = { "운영체제",2,3,3, };
	lecture c = { "C프로그래밍",3,3,4 };
	lecture* p = &os;

	printf("구조체크기: %d, 포인터크기: %d\n\n", sizeof(os), sizeof(p));
	printf("%10s %12s %6s %6s\n",head[0],head[1],head[2],head[3]);
	printf("%10s %12s %5d %5d\n",p->name,lectype[p->type],p->credit,p->hours);

	//포인터 변경
	p = &c;
	printf("%12s %10s %5d %5d\n", (*p).name, lectype[(*p).type], (*p).credit, (*p).hours);
	printf("%12c %10s %5d %5d\n", *c.name, lectype[c.type], c.credit, c.hours);

	return 0;
}