// Arrays_Count_Range.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"



int _tmain(int argc, _TCHAR* argv[])
{
	float data[10] = {0,0,0,0,0,0,0,0,0,0};
	int index;
	int countp = 0;
	int countn = 0;

	for (index = 0; index < 10; index++){ //or index <+9
		printf("Enter element value at index %d\n", index);
		scanf("%f", &data[index]);
	}

	for (index = 0; index < 10; index++){
		printf("data[%d] = %f\n", index,data[index]);
		if (data[index] > 0.0f)
			countp++;
		else if (data[index] < 0.0f)
		countn++;
	}

	printf("positive %d negative %d\n", countp, countn);
	system("pause");
	return 0;
}

