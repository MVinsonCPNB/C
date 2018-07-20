// Problem_9_Chapter_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
void sum_arrays(int *source1,int ele1, int *source2,int ele2, int *source3, int ele3);

int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0;
	int array1[4] = {2,4,5,8};
	int array2[4] = {3,4,9,14};
	int array3[4] = {0,0,0,0};
	
	sum_arrays(array1,4, array2,4, array3, 4);
	
	printf("The sum of arrays 1 and 2 are\n");
	for ( i = 0; i < 4; i++)
	{
		printf("Index [%d] = %d \n", i, *(array3 + i));
	}//end of for
	system("pause");
	return 0;
}//end of main
void sum_arrays(int *source1,int ele1, int *source2,int ele2, int *source3, int ele3)
{
	int i; 
	for (i = 0; i < ele1 ; i++)
	{
	*(source3 + i) = *(source1 + i) + *(source2 + i); 
	}//end for
}// end sum_arrays