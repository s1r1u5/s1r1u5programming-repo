// array-bound.c
#include <stdio.h>

char zsName[11] = "0123456789";
int theAnswer = 42;
char zsAddr[11] = "abcdefghij";
int cnt = 0;

int main()
{
	for (cnt = 0; cnt < 20; cnt++)
	{	printf("%c\n", zsName[cnt]);	}

	printf("theAnswer = %i before smashing through\n", theAnswer);

	for (cnt = 0; cnt < 20; cnt++)
	{	zsName[cnt] = 'V';	}

	printf("theAnswer = %i after smashing through\n", theAnswer);
	printf("zsName = %s", zsName);

return 0;
}
