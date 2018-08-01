// Problem_2_Chapter_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"



int _tmain(int argc, _TCHAR* argv[])
{

	int LowValue = 0;
	int count = 0;

	printf("Enter a number [1-100]\n");
	scanf("%d", &LowValue);
	printf("--\n\n");
	 
	
	for(count = LowValue + 10 ; LowValue<= count; LowValue++)
	{
		printf("%d\n", LowValue);
	}

	system("pause");


	return 0;
}

