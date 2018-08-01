// OverflowUnderflow.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "limits.h"
#include "float.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int value;
	double value2;
	value = INT_MAX;

	printf("%e \n %f\n", FLT_MAX, FLT_MAX);

	value2 = 3e37;
	
	value2 = value2 + 1; //This screws up the value because it dose not have that type
						// of accuracy you must use double and not float for this large 
						// of a number

	printf("value2: %e \n value2: %d\n\n\n", value2, value2);


	printf("value = %d\n", value);
	
	value = value + 1;

	printf("overflow of value = %d\n\n\n", value);

	printf("PRINTING ERRORS!!\n\n");

	printf("%d\n",value, value2);
	printf("%d %d\n", value2);

	system("pause");

	return 0;
}

