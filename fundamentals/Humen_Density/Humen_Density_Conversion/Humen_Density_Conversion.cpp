// Humen_Density_Conversion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"			// for strlen() prototype
#define DENSITY 62.4      //human density in lbs per cu ft

int _tmain(int argc, _TCHAR* argv[])
{
	float weight, volume;
	int size, letters;
	char name[40];		// name is an array of 40 chars

	printf("Hi! What's your first name?\n");
	scanf("%s", name);
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %010ef cubic feet. \n",
			name, volume);
	printf("Also, your fist name has %d letters, \n", 
			letters);
	printf("and we have %d bytes to store it in. \n", size);

	system("pause");

		return 0;
}

