// Contational_Example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"



int _tmain(int argc, _TCHAR* argv[])
{
	int a,b,max;

	printf("Enter two integers\n");
	scanf("%d %d", &a,&b);
	max = (a<b)? a : b ;
	printf("Max is %d\n", max);

	b = (a < 0)? a : -a;
	printf("Absolute value of a is %d\n", b);

	system("pause");

	return 0;
}

