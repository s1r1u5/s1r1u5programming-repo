// main.c

#include <stdio.h>


int main ()
{
	int dim1, dim2, area;

	printf("Enter First Dimension: ");										// Get User Input
	fflush(stdout);
	scanf("%d\n", &dim1);

	printf("Enter Second Dimension: ");
	fflush(stdout);
	scanf("%d\n", &dim2);

	area = findArea(dim1, dim2);

	printf("Area = %d", &area);
	fflush(stdout);

	int findArea(int x, int y);
	return 0;
}

int findArea(int x, int y)
{
	return x*y;
}
