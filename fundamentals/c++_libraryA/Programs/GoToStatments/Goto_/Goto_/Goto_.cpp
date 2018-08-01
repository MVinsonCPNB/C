// Goto_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i, j;

	for(i = 0; i <=5; i++){
		for(j=1;j<=7;j++){
			if((i+j)%9==0){
				printf("%d is evenly divisible by 9\n", (i+j));
				continue; // skip any code in the loop agter this loop, start the next itteration of the loop 
			} // of if
			printf("i = %d j = %d\n", i,j);
		} // of inner loop
	} // of outer loop

	system("pause");

	printf("break example\n");
	for(i = 0; i <=5; i++){
		for(j=1;j<=7;j++){
			if((i+j)%9==0){
				printf("%d is evenly divisible by 9\n", (i+j));
				break; // exit out of the inner loop 
			} // of if
			printf("i = %d j = %d\n", i,j);
		} // of inner loop
	} // of outer loop

	system("pause");
	
	printf("GoTo Example\n");
	for(i = 0; i <=5; i++){
		for(j=1;j<=7;j++){
			if((i+j)%9==0){
				printf("%d is evenly divisible by 9\n", (i+j));
				goto label1; // exit out of the inner loop 
			} // of if
			printf("i = %d j = %d\n", i,j);
		} // of inner loop
	} // of outer loop
label1: printf("Exit...\n");
system("pause");
	return 0;
}

