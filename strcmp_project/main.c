// strcmp and input string example
// BUT THIS IS BAD CODE FOR PASSWORD SECURITY!!!
#include <stdio.h>
#include <string.h>

int main()
{	char szPassword[] = "kronos1205";
	char szInput[11];
	int compareResults;
	int myInteger;
	do {
		printf("Enter Password: ");
		fflush(stdout);
		myInteger = 42;
		scanf("%s",szInput);
		printf("szInput = %s \n", szInput);
		compareResults = strcmp(szPassword, szInput);
		printf("compareResults = %i\n", myInteger);
		fflush(stdout);
	}
	while( compareResults != 0);
	puts("Login Successful!");

	return 0;
}
