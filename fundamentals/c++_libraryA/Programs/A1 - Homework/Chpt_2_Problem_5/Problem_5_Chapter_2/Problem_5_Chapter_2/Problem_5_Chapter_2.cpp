// Problem_5_Chapter_2.cpp : Defines the entry point for the console application.
//

/* 
	Constructed By: Michael Vinson
	Date: Thursday, January 14, 2010
	Course: COP1220
	Instructor: Dr. Horvath
*/
#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int toes = 10;
	int toessquared,toetotal;

	printf("You have %d toes.\n\n", toes);
		
	toetotal = toes + toes;
	toessquared = toes * toes; 

	printf("You have %d phalanges.\n\n", toetotal);
	printf("Ten toes squared = %d.\n\n", toessquared);

	system("pause");

	return 0;
}

