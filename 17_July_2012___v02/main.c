// main.c

#include <stdio.h>

int main ()
{
	float dim1, dim2, area;

	float findArea(float x, float y);

	printf("Enter First Dimension: ");										// Get User Input
	fflush(stdout);
	scanf("%f", &dim1);

	printf("Enter Second Dimension: ");
	fflush(stdout);
	scanf("%f", &dim2);

	area = findArea(dim1, dim2);

	printf("Area = %f", area);
	fflush(stdout);

	return 0;
}

float findArea(float x, float y)
{
	return x*y;
}
