// StringData.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"



int _tmain(int argc, _TCHAR* argv[])
{
	char name[20];

	printf("Enter your name\n");

	scanf("%s", name);

	printf("sizeof(name) = %d\n", sizeof(name));
	printf("strlen(name) = %d\n", strlen(name));

	printf("name[0] = %c\n", name[0]);

	printf("%s\n", name);

	printf("\"%10s\"\n", name);
	printf("\"%-10s\"\n", name);
	printf("\"%10.4s\"\n", name);
	printf("\"%*s\"\n", (strlen(name)+5), name);

	system("pause");
	return 0;
}

