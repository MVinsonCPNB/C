// Problem_10_Chapter_10.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
void dbl_array(int rows, int columns, int (*Source) [5]);
void print_array(int row, int columns, int (*Source) [5]);
int _tmain(int argc, _TCHAR* argv[])
{	int DataArray[3][5] = { {5,  25,  3, 45, 18},
							{4,  16, 45,  8,  9},
							{12, 13, 14, 15, 16}};
	dbl_array(3,5,DataArray);
	print_array(3,5,DataArray);
	system("pause");
	return 0;
}//end of main

void dbl_array(int rows, int columns, int (*Source) [5])
{
	int i, c;
	int count;
	for (i = 0; i < rows; i++)
	{
		for (c = 0; c < columns; c++)
		{	count = *(*(Source + i) + c);
			count = count * 2;
			*(*(Source + i) + c) = count;
		}  
	}//end of for
}// end of dbl_array
void print_array(int row, int columns, int (*Source) [5])
{	int i, c;
	for (i = 0; i < row; i++)
	{	for (c = 0; c < columns; c++)
		{printf("DataArray[%d][%d] = %d\n", i, c, *(*(Source + i) + c));   
		}
	}//end of for
}//end of function
