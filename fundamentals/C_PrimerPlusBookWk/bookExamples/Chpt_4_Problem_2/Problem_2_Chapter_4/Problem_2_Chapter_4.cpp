// Problem_2_Chapter_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"




int _tmain(int argc, _TCHAR* argv[])
{

	char Fname[20];
	int NameCount;

	printf("Please enter your first name.\n");	//Get name
	scanf("%s", Fname);

	printf("\" %s \"\n\n", Fname);				//middle align
	printf("\"%20s\"\n\n", Fname);				//right align
	printf("\"%-20s\"\n\n", Fname);				//left align

	NameCount = strlen(Fname);					//get string length
	
	printf("\nThis is your name with an area of three extra spaces\n\n");
	printf("Length of name = %d\n", NameCount); 

	printf("\t\t\t=======================\n");
	NameCount = NameCount + 3;					//Add three spaces to the name and print
	printf("\t\t\t[%-*s]\n", NameCount, Fname);
	printf("\t\t\t 01234567890123456789\n");
	printf("\t\t\t=======================\n");

	system("pause");

	return 0;
}

