//
// main.c
// CarMilage (v01)
//
// Go to store and purchase cartons of milk
// You have to purchase each carton, one at a time
//
// Created by Geoffrey Lambeth on 07/009/12
// Copyright (c) 2012 s1r1u5_programming. All rights reserved.
//

#include <stdio.h>

int main()
{
	float lifeTimeMiles = 0;														/* Defining Variables */
	float lifeTimeGallons = 0;
	float lastTankMiles = 0;
	float lastTankGallons = 0;
	int lifeTimeFillups = 0;
	float lifeTimeMPG = 0;
	float lastTankMPG = 0;

while (1 == 1)																		/* Starting While Loop */

{	printf("Type the number of miles driven on this tank gas: ");					/* Setting lastTankMiles */
	fflush(stdout);
	scanf("%f", &lastTankMiles);

	printf("Type the number of gallons in this tank: ");
	fflush(stdout);
	scanf("%f", &lastTankGallons);													/* Setting lastTankGallons */

	lifeTimeMiles = lifeTimeMiles + lastTankMiles;									/* Calculations for lifeTimeMiles */
	lifeTimeGallons = lifeTimeGallons + lastTankGallons;							/* Calculations for lifeTimeGallons */
	lifeTimeFillups = lifeTimeFillups + 1;
	lastTankMPG = lastTankMiles / lastTankGallons;
	lifeTimeMPG = lifeTimeMiles / lifeTimeGallons;

	printf("\nCurrent MPG is: %f \n", lastTankMPG);
	fflush(stdout);
	printf("Life Time MPG is: %f \n", lifeTimeMPG);
	fflush(stdout);
	printf("Total fill ups is: %i \n\n\n\n\n", lifeTimeFillups);
	fflush(stdout);
}

return 0;
}
