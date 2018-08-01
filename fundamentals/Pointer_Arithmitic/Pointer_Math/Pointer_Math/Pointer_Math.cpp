// Pointer_Math.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	float value1, value2;
	float *val1, *val2, *val3;

	printf("Enter two floating point values\n");
	scanf("%f%f", &value1, &value2);

	val1 = &value1;
	val2 = &value2;
	val3 = val2;
	printf("Addresses\n");
	printf("&value1 = %p &value = %p\n", &value1, &value2);
	printf("&val1 = %p &val2 = %p &val3 = %p\n", val1, val2, val3);

	printf("Values\n");
	printf("&value1 = %f &value2 = %f\n", value1, value2);
	printf("val1 = %f &val2 = %f &val3 = %f\n", *val1, *val2, *val3);

	*val3 = *val1 + value1; //Must do a Value to a Value and not Address to a Value
	printf("Values\n");
	printf("&value1 = %f &value2 = %f\n", value1, value2);
	printf("val1 = %f &val2 = %f &val3 = %f\n", *val1, *val2, *val3);

	system("pause");

	return 0;
}

