// Problem_12_Chapter_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#define COLS 5
 /*                 |
Functions - Below - V */
int Scan_DataIN(int *Scan_Apnt[][COLS], int rows);


int _tmain(int argc, _TCHAR* argv[])
{
	int Row_Counter = 0;
	int Row_Pass = 0;
	int StoreDataA[3][5] = { {0,0,0,0,0},
							 {0,0,0,0,0},
							 {0,0,0,0,0} };

	Row_Counter = 0;
	
	while (Row_Counter <=2){ 
	printf("Please enter the first Number\n");
	Row_Pass = Row_Counter;
	Row_Counter = Scan_DataIN(StoreDataA[][5], Row_Pass);
	printf("\n\n");
	printf("%d, %d, %d, %d, %d\n", StoreDataA[Row_Pass][0],StoreDataA[Row_Pass][1], StoreDataA[Row_Pass][2], StoreDataA[Row_Pass][3], StoreDataA[Row_Pass][4]);
	system("pause");
		};
	
	system("pause");
	return 0;
}

int Scan_DataIN(int (*Scan_Apnt)[5], int rows){
	int count = 0;

	
	while(count <= 4){
		printf("Enter Number %d ... of Row %d ...", count, rows);
		fflush(stdin);
		scanf("%d", Scan_Apnt[rows][count]);
		printf("%d", *(*Scan_Apnt + rows) + count);
		count = count + 1;
		printf("Next .. \n");
	};
	rows = rows++;
	return rows;
};