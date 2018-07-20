// Problem_1_Chapter_4.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"		/* Constructed By: Michael Vinson */
#include "stdio.h"		/* Date: January 21, 2010 */
#include "stdlib.h"		/* Course:COP1220 Instructor: Dr. Horvath*/


int _tmain(int argc, _TCHAR* argv[])
{

	char FirstName[15], LastName[15];

	printf("Enter your First name\n");
	scanf("%s", &FirstName);

	printf("Enter your last name\n");
	scanf("%s", &LastName);

	printf("%s, %s\n\n", LastName, FirstName);

	system("pause");

	
	return 0;
}

