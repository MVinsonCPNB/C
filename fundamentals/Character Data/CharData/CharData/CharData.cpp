// CharData.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char letter;
	char name[20] = "Example";
	
	printf("Please enter a letter\n");
	fflush(stdin);  //flush input buffer
	scanf("%c", &letter);
	printf("You entered %c\n", letter);

	printf("\"don\'t fire at Will\", \t\t\tsaid the captain\a\a\n");


	fflush(stdin);  //flush input buffer
	printf("Initial value in name %s\n", name);
	printf("\n\nPlease enter you name");
	scanf("%s", name);
	printf("Welcome %s!\a\a", name);

	

	system("pause");



	return 0;
}

