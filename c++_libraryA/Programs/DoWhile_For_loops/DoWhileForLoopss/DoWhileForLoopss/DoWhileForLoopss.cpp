// DoWhileForLoopss.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"



int _tmain(int argc, _TCHAR* argv[])
{
	float bacteria = 0;
	int days;

	printf("Enter the number of bacteria on day one\n");
	scanf("%f", &bacteria);

	for(days = 2; days <= 10; days++){
		bacteria = bacteria + 0.15*bacteria; // bacteria increases 15% every day
		printf("day %2d bacteria %4d\n", days, (int) bacteria); //casted down "float" down to int
																// so the floating point decimal places are used 
		                                                        // in the calculations
	}

	system("pause");

	return 0;
}

