// Problem_2_Chapter_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char c = '$';
	int i,j;

	for(i=1; i<=5; i++){
		

		for(j=i ; j>0; j--){
							printf("%c", c);
		}//End For Loop

		printf("\n");

	}//End For Loop


	system("pause");
	return 0;
}

