// Nested_Loops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int i,j;
	char ch;

	for(i=0; i<=7; i++){
		for(j = 1; j<4; j++){
			printf("i= %d j = %d\n", i, j);
		}
	}

	for (i=0;i<=7;i++){
		for(j=1 ;j <= 4;j++){
			printf("@");
		}
		printf("\n");
	}

	for(i=0; i <= 7; i++){
		for(j=7-i; j>=0; j--){
			printf("@");
		}
		printf("\n");
	}

	system("pause");

	return 0;
}

