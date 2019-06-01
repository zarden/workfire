#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	char c;
	FILE *fpr = fopen("C:\\Users\\Lufer\\Desktop\\1.txt", "r");
	FILE *fpw = fopen("C:\\Users\\Lufer\\Desktop\\2.txt", "w");
	while ((c = fgetc(fpr)) != EOF)
	{
		fputc(c, fpw);
	}
	fclose(fpr);
	fclose(fpw);
	return 0;
}