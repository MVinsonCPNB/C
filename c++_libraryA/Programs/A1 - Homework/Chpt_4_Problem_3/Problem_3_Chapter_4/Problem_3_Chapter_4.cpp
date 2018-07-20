// Problem_3_Chapter_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

int _tmain(int argc, _TCHAR* argv[])
{
	float Number = 0;
	printf("please enter a number that has at least 3 decimal places\n");
	printf("Example: 2145.123\n");
	scanf("%f", &Number);
	printf("\n%-10.2f \n\n%-e\n", Number, Number);

	system("pause");

	return 0;
}

