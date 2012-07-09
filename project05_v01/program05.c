//
// program05.c
// project05 (v01)
//
// This program demonstrates = vs ==
// This version demonstrates what happens when a single = is used
//
// Created by Geoffrey Lambeth on 07/009/12
// Copyright (c) 2012 s1r1u5_programming. All rights reserved.
//

#include <stdio.h>

int main()
{
	int a = 12, b = 5, c;											/* Declare Integers A, B, & C */
	c = a;															/* Variable C is = to Variable A */

	if (c = b)														// If:
		printf("C is the same as B \n");							// Print C = B
	else															// Else:
		printf("C is not the same as B \n");						// Print C Doesn't = B

printf("C = %i", c);												/* Print the value of Variable C */
return 0;
}
