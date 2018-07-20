// Chpt_4_Formatting_Homework.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char name[15];
	int var1, var2;
	float varx = 22.2257;;

	printf("1.)Please enter you first name.\n");
	scanf("%s", &name);

	printf("2.)%18s\n", name);
	printf("3.)%-15s\n", name);
	printf("4.)%20.3s\n", name);

	printf("5.)Please enter a number [1-999].. .)\n");
	scanf("%d", &var1);
	printf("5a.)%10d\n", var1);
	printf("5b.)%2d\n", var1);

	printf("6.)Please enter a number [1-59].. .)\n");
	scanf("%d", &var2);

	printf("6a.)%-5d\n", var2);
	printf("6b.)%*d\n", 14, var2);

	printf("7a.)%12.2f \n", varx);
	printf("7b.)%1.0f \n", varx);

	printf("8a.)%10.1f \n", varx);
	printf("8b.)%*.*f \n", 10,3,var2);  //Dose not conver the var2int to a float point 

	system("pause");
	return 0;
}

