// Problem_2_Chapter_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"

void copy_arr(double *Dsource, double *Carray, int elements);
void copy_ptr(double *Dsource, double *Carray, int elements);

int _tmain(int argc, _TCHAR* argv[])
{
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];

	copy_arr(source, target1, 5);
	printf("\n\n");

	copy_ptr(source, target2, 5);
	system("pause");
	return 0;
}
void copy_arr(double *Dsource, double *Carray, int elements){

	int i;
	for (i = 0; i < elements; i++){
	
		Carray[i] = Dsource[i];
		printf("Array Notation element[%d] from Traget 1: %.1lf\n" , i , Carray[i]);
	}//end of for 
}// end of copy_arr

void copy_ptr(double *Dsource, double *Carray, int elements)
{
	int i; 
	for (i = 0; i < elements; i++)
	{
		*(Carray + i) = *(Dsource + i);
		printf("Pointer Notation element[%d] from Target 2: %.1lf\n", i, *(Carray + i));
	}
}

