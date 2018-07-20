// Problem_4_Chapter_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "cmath"
#include "string.h"

int _tmain(int argc, _TCHAR* argv[])
{
	float inches, feet, CentH, inchCount;
	int intPass = 0;

	inches = 0;
	feet = 0;
	CentH = 0;
		
	printf("Please enter your height in centimeters: \n");
	scanf("%f", &CentH);
	inches = CentH / 2.54;
	inchCount = inches;
	inches = fmod(inches, 12);
	feet = (inchCount - inches) / 12;
	printf("%2.1f cm = %2.f feet, %2.1f inches\n\n", CentH, feet, inches);
		
	do{
	inches = 0;
	feet = 0;
	CentH = 0;
		
	printf("Please enter your height in centimeters: (<=0 to quit)\n");
	scanf("%f", &CentH);

	inches = CentH / 2.54;
	inchCount = inches;
	inches = fmod(inches, 12);
	feet = (inchCount - inches) / 12;

	printf("%2.1f cm = %2.f feet, %2.1f inches\n\n", CentH, feet, inches);
	} while(CentH > 0);
	printf("bye\n");
	system("pause");
	return 0;
}

