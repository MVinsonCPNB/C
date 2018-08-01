// Problem_7_Chapter_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{

	float Numb1, Numb2, NumDif, NumMax;

	printf("Please Enter two decimal point numbers with the Highest first and Lowest second. .\n");

	while(scanf("%f %f", &Numb1, &Numb2) == 2){
		NumDif = (Numb1 - Numb2);
		NumMax = (Numb1*Numb2)/NumDif;
		printf("%8.2f\n", NumMax);
		printf("Please Enter two numbers with the Highest first and Lowest second. .\n");
	}

	system("pause");

	return 0;
}

