/*
	솔루션 / 프로젝트 / 소스파일: Ch11 / Prj04 / getche.c
	함수 getchar(),_getche(),_getch()의 차이를 알아보는 예제
	V 1.0 2022.
*/

//교재 Perfect C p.502의 표 참고

#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch;

	printf("문자를 계속 입력하고 ENTER를 누르면 >>\n");
	while ((ch = getchar()) != 'q')
		putchar(ch);

	printf("\n문자를 누를 때마다 두 번 출력 >>\n");
	while ((ch = _getche()) != 'q')
		putchar(ch);

	printf("\n문자를 누르면 한 번 출력 >>\n");
	while ((ch = _getch()) != 'q')
		_putch(ch);
	printf("\n");

	return 0;
}