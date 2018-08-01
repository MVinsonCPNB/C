// Problem_7_Chpt_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	float Hcenti = 0;
	float Hin = 0;

		printf("Please enter you estimated height in Inches . .. \n");
		scanf("%f", &Hin);
		printf("=========\n\n");
	
		Hcenti = Hin * 2.54;

		printf("Your height of %.2f in equals %.2f cm.\n\n", Hin, Hcenti);

		system("pause");
	return 0;
}

