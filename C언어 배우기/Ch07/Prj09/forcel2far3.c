/*
	¼Ö·ç¼Ç / ÇÁ·ÎÁ§Æ® / ¼Ò½ºÆÄÀÏ: Ch07 / Prj09 / forcel2far3.c
	for ¹® ¼·¾¾ => È­¾¾
	V 1.0 2022.
*/

#include <stdio.h>
#define MAX 3
#define INCREMENT 10

int main(void)
{
	double celcius = 12.46;

	printf("  ¼·¾¾(C)  È­¾¾(F) \n");
	printf("-----------------------\n");

	for (int i = 1; i <= MAX; i++, celcius += INCREMENT)
	{
		printf("%8.2lf %8.2lf\n", celcius, 9.0 / 5 * celcius + 32);
	}
	return 0;
}