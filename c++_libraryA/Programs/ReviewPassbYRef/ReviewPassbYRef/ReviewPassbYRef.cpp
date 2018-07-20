// ReviewPassbYRef.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"

void calcResult(int a[], int b[], int c, int *d);


int _tmain(int argc, _TCHAR* argv[])
{
	int data1[4] = {12,34,45,34};
	int data2[4];
	int total = 0;
	int i;

	calcResult(data1,data2,4, &total);
	for(i=0; i<4; i++){
	printf("data2[%d] = %d\n", i, data2[i]);
	}
	printf("total = %d\n", total);
	

	system("pause");
	return 0;
}

void calcResult(int a[], int b[], int c, int *d){
	int index;

	for(index = 0; index < c; index++){
		b[index] = a[index] * a[index] + 10;
		*d = *d + b[index];
	}
}// end of calc Result