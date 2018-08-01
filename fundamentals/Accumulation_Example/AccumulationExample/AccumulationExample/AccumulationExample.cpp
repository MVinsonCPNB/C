// AccumulationExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	double current = 1.0;
	double total = 1.0;
	int square = 1;

	while (square<64){
		square += 1;
		current = current * 2;
		total = total + current;
		printf("Square:%-10d Current Amount:%-13.2e Total:%-13.2e\n", square, current, total);
	} // End Loop

	system("pause");


	
	return 0;
}

