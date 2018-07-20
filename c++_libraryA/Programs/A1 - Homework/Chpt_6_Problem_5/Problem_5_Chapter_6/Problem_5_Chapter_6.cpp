// Problem_5_Chapter_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int HighV, LowV, x , y;

	printf("Please enter a upper limit .. \n");
	scanf("%d", &HighV);

	printf("Please enter a lower limit .. \n");
	scanf("%d", &LowV);
	
	x = HighV;
	y = LowV;

	
	for(;x >= y; y++){
		printf("================%d\n",y);
		printf("%d^2 = %d\n", y, (y*y));
		printf("%d^3 = %d\n", y, (y*y*y));
		
	}

	system("pause");


	return 0;
}

