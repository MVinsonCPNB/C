// Depreciation_For_Loops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

void ddbd(float price, int years);

int _tmain(int argc, _TCHAR* argv[])
{
	float value, deprec, tag1;
	int n, year;

	printf("Enter the current value of the equipment\n");
	scanf("%f", &value);
	printf("Enter the number of years\n");
	scanf("%d", &year);

	printf("Straight-Line Depreciation\n");

		deprec = value/year;
	for(n=1; n <= year; n++){
	value -= deprec; // value = value - deprec
	printf("End of year %d value is $%7.2f\n", n, value);
	}// end of loop 

	printf("Double-Declining-Balance Depreciation\n");
	printf("Enter the current value of the equiipment\n");
	scanf("%f", &value);

	ddbd(value,year);
	system("pause");

	return 0;
}

void ddbd(float price, int years){
	int m; 
	float dep;
	float tag1 = price;

	for(m = 1; m <= years; m++){
		dep = (years - m+1) * tag1/(years*(years+1)/2); // sum of ytears-Digit Method
		price-=dep;
		printf("End of year %d value is $%7.2f\n", m, price);
	}//end of for loop
	
	}// end of function

