//
// program04.c
// project04 (v01)
//
// This program is working with basic if statements
//
// Created by Geoffrey Lambeth on 07/06/12
// Copyright (c) 2012 s1r1u5_programming. All rights reserved.
//

#include <stdio.h>

int main()
{
	int s2state = 9;											/* Declare Integer with default value of Zero */

	printf("Enter value for Switch 2: ");					/* Request value to give declared integer */
	scanf("%i", &s2state);									/* Read value for declared integer */
	printf("\n"); 											/* New Line */
	printf("Switch 2 Value: %i", s2state);					/* Print value for declared integer */

	return 0;
}
