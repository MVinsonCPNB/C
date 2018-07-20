// Problem_12_Chapter_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int Elementsof2[9];
	int x;
	int PowerCount = 2;
	
	for (x = 1 ; x <=8 ; x++){
		Elementsof2[x] = PowerCount;
		PowerCount = PowerCount * 2;
		
	}// End of for statment that assigns the squares of 2 to the Array Elemtsof2,,
		x = 1;
	do {
		printf("2 to the power of %d is %d\n\n", x, Elementsof2[x]);
		x = x++;
	}while(x<=8);//End of do Statment
	system("pause");
	return 0;
}

