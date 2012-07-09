//
// milkrun.c
// MilkRun (v01)
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
	int purchcartons;										/* Track the number of milk cartons purchased */
	float cartonprice;										/* Price of one milk carton during this run */
	float money;											/* Amount of money left to purchase milk cartons */

	printf("Enter milk allowance: ");						/* Get money */
	fflush(stdout);
	scanf("%f", money);

	printf("Enter carton price: ");							/* Check carton price */
	fflush(stdout);
	scanf("%f", cartonprice);

	purchcartons = 0;										/* Keep track of purchased cartons */

	while (money >= cartonprice)							/* If there's enough money, purchase another milk carton */
	{
		purchcartons = ++1;									/* Buy a carton */
		money = --cartonprice;								/* Subtract price from money */
	}

	printf("Cartons purchased: %i\n", purchcartons);		/* Let mom know results */
	fflush(stdout);

	printf("Change left: %f\n", money);
	fflush(stdout);

	printf("Chores are done, I'm free!\n");					/* Done with task */
	fflush(stdout);

return 0;
}
