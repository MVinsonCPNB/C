// FindAreaArrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i, noPoints;
	float data[301], x, step, Area;

	printf("Enter the number of data points\n");
	scanf("%d", &noPoints);

	if(noPoints > 300)
		noPoints = 300;

	step = 4.0/noPoints;
	for(x = 0.0, i = 1; i <= noPoints; x = x + step, i++){
		data[i] = x * x * x; //generate data points
	}// end loop 

	Area = 0.0f;
	for (i = 1; i <= noPoints-1; i++){
		Area = Area + ((data[i] + data[i+1])*step/2.0);
	}

	printf("The area under the function is %3.10f\n", Area);

	system("pause");

	return 0;
}

