// Problem_4_Chapter_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

double Harmonic(double a, double b);

int _tmain(int argc, _TCHAR* argv[])
{
	double result, FN, SN;
	printf("Enter Two Numbers [XXX XXX]\n");
	scanf("%Lf %Lf", &FN,&SN);
	result = Harmonic(FN,SN);

	printf("The Harmonic Mean of the entered number is %5.2Lf\n", result);
	system("pause");
	return 0;
}

double Harmonic(double a, double b)
{
	double inverA, inverB, inverAvg;

	inverAvg = 2 / (1/a + 1/b);

	return(inverAvg);

}

