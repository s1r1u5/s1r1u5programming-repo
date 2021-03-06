//
// Wheel_Rotation_Function_v02
// degree.c
//
// This function will determine the # of degrees that a wheel must rotate to move a given distance
//
// Written by Geoffrey Lambeth on 17 July 2012
// copyright (c) 2012. All rights reserved
//

#include <stdio.h>

int main()
{
	float wheelDiameterInCM, deg, distanceToTravelinCM;
	float degreesForDistance(float x, float y);

	printf("Enter the diameter of the wheel in CM: ");												// Get user input for wheelDiameterInCM
	fflush(stdout);
	scanf("%f", &wheelDiameterInCM);

	printf("\nEnter the distance that the robot needs to travel in CM: ");							// Get user input for distanceToTravelinCM
	fflush(stdout);
	scanf("%f", &distanceToTravelinCM);

	deg = degreesForDistance(wheelDiameterInCM, distanceToTravelinCM);

	printf("Number of degrees to rotate wheel: %f", deg);
	fflush(stdout);

	return 0;
}

float degreesForDistance(float x, float y)
{
	double pi;
	pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428810975665933446128475648233786783165271201909145648566923460348610454326648213393607260249141273724587006;
	return (360 * y) / (pi * x);
}
