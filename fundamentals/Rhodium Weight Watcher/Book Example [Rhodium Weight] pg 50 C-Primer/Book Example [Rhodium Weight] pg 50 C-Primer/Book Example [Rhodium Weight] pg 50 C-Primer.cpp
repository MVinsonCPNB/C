// Book Example [Rhodium Weight] pg 50 C-Primer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"		/* *io.h = Ref. Function to read and write out from the command line. */
#include "stdlib.h"		/* *lib.h = Ref. to the system pause function. */

/*
	Rhodium.c  -- your weight in rhodium  --
*/


int main(void)
{
	float weight;		/* user weight				*/
	float value;		/* rhodium equivalent		*/

	printf("Are you worth your weight in rhodium?\n");
	printf("Let's check it out. \n");
	printf("Please enter your weight in pounds:  ");

/*						Get input from the user		*/
	scanf("%f", &weight);
/*				Assume rhodium is $770 per ounce 	*/
/*	14.5833 converts pounds avd. to ounces troy		*/
	value = 770.0 * weight * 14.5833;
	printf("Your weight in rhodium is worth $%.2f. \n", value);
	printf("You are easily worth that! If rhodium prices drop, \n");
	printf("Eat more to maintain your value! =)\n");

	system("pause");

	return 0;
}

