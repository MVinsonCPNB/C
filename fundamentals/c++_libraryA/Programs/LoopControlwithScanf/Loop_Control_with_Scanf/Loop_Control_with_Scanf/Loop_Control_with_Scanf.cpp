// Loop_Control_with_Scanf.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int quantity;
	float price,total = 0.0f;

	printf("Please enter the price and quantity\n");
	
	while(scanf("%f %d", &price, &quantity) == 2){
		total = total + quantity*price;
		printf("\tRunning total = %8.2f\n", total);
		printf("Please enter the price and quantity\n");
	}

	printf("total = $%8.2f\n", total);
	
	fflush(stdin);
	total = 0.0f;

	do{
		printf("Enter a price and a quantity\n");
		scanf("%f %d", &price, &quantity);

		if(quantity >0){
			total = total + quantity*price;
			}//end if
	}while(quantity >0);

		printf("\tRunning total = %8.2f\n", total);

		system("pause");
	

	return 0;
}

