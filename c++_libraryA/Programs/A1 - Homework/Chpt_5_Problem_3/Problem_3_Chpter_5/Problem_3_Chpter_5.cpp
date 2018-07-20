// Problem_3_Chpter_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	long weeks;
	long days, dayMax;

	do {
		printf("Please enter an amount of days. .. \n");
		scanf("%ld", &dayMax);

		weeks = dayMax / 7.0;
		days = dayMax%7;

		printf("%ld days are %ld weeks, %ld days.\n\n", dayMax,weeks, days);
		system("pause");
	} while(dayMax > 0);



	return 0;
}

