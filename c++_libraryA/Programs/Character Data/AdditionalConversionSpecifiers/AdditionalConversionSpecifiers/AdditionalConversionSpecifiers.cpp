// AdditionalConversionSpecifiers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"



int _tmain(int argc, _TCHAR* argv[])
{
	int value;
	char letter;
	float temperature;

	printf("Enter a Temp. to show how rounding numbers work\n");
	scanf("%f", &temperature);
	printf("fixed notation %g\n", temperature);
	printf("Float notation %f\n", temperature);
	printf("Float notation predefined %10.2f\n", temperature);

	fflush(stdin);
	printf("Please enter a letter.");
	scanf("%c", &letter);
	printf("%c ASCII equivalent %d\n", letter, letter);

	printf("Enter an integer\n");
	scanf("%d", &value);
	printf("%d in octal %o\n", value, value);
	printf("%d in hexadecimal %x\n", value, value);

	system("pause");

	return 0;
}

