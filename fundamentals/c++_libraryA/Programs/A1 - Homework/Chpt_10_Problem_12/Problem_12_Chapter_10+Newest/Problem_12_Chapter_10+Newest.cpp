// Problem_12_Chapter_10+Newest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

void AddData(int (*Source)[5], int ROW);
void ShowMatrix(int (*Source)[5]);
int CompAverageRow(int (*Source)[5],int R);
int FindLargest(int (*Source)[5]);
int _tmain(int argc, _TCHAR* argv[])
{
	int data[3][5] = {  {0,0,0,0,0},
						{0,0,0,0,0},
						{0,0,0,0,0} };
	int Row1Avg, Row2Avg, Row3Avg, TotAvg, LarVal;
	int Row, Cols;
	Row = 0;
	AddData(data, Row);
	ShowMatrix(data);
	Row1Avg = CompAverageRow(data, 0);
	Row2Avg = CompAverageRow(data, 1);
	Row3Avg = CompAverageRow(data, 2);
	TotAvg = CompAverageRow(data, 999);
	LarVal = FindLargest(data);
	printf("Averages\nRow 1 = %d\nRow 2 = %d\nRow 3 = %d\nTotal Average = %d\n", Row1Avg, Row2Avg, Row3Avg, TotAvg);
	printf("The Largest Value in the Matrix is .. %d\n", LarVal);
	system("pause");
	return 0;
}
void AddData(int (*Source)[5], int ROW){
	for (int R = ROW; R <= 2; R++){
		for(int i = 0; i <=4; i++){
		printf("Enter row %d coloum %d\n", R + 1, i + 1);
		scanf("%d", &Source[R][i]); // Ugg, Could not get to work with pointer notation. ex. (&Source + ROW) + i. I dont understand.
		};
	};
	return ;
}

void ShowMatrix(int (*Source)[5]){
	printf("Your Matrix""     --------------------\n");
		for(int i = 0; i <=2 ; i++){
			printf("\t\t|%d, %d, %d, %d, %d|\n", Source[i][0], Source[i][1], Source[i][2], Source[i][3], Source[i][4]);
		};
	printf("           ""     --------------------\n");
return ;
};

int CompAverageRow(int (*Source)[5],int R){
int Pocket = 0; 
int Average = 0;
			if(R == 999){
				for(int i = 0; i <= 2; i++){
					Pocket += Source[i][0] + Source[i][1] + Source[i][2] + Source[i][3] + Source[i][4];
				};
			Average = Pocket/15;
			return Average;
			};
Pocket = Source[R][0] + Source[R][1] + Source[R][2] + Source[R][3] + Source[R][4];
Average = Pocket/5;
return Average;
};

int FindLargest(int (*Source)[5]){

int tracker = 0;
for(int i = 0; i <=2; i++){
	for(int x=0; x<=4; x++){
	
		if(Source[i][x] > tracker){
		
			tracker = Source[i][x];
		};//end if 
	};// end for 
};// end for
return tracker;
};//end of Find
