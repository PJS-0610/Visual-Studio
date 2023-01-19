/*
	¼Ö·ç¼Ç / ÇÁ·ÎÁ§Æ® / ¼Ò½ºÆÄÀÏ: Ch07 / Prj02 / cel2far3.c
	¹Ýº¹¹® °³¿ä ¼·¾¾ -> È­¾¾
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	double celcius = 12.46;

	printf("  ¼·¾¾(C)   È­¾¾(F)\n");
	printf("----------------------=\n");
	printf("%8.2lf %8.2lf\n", celcius, 9.0 / 5 * celcius + 32);
	celcius += 10;
	printf("%8.2lf %8.2lf\n", celcius, 9.0 / 5 * celcius + 32);
	celcius += 10;
	printf("%8.2lf %8.2lf\n", celcius, 9.0 / 5 * celcius + 32);
	celcius += 10;

	return 0;
}
