// Problem_11_Chapter_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int _tmain(int argc, _TCHAR* argv[])
{
	float artichokes = 1.25;
	float beets = .65;
	float carrots = .89;
	float PurchPounds = 0.0;
	float CostPerLB[4] = {0.0 , 0.0 , 0.0};
	float total = 0.0;
	float GrandTotal = 0.0;
	float Discount = 0.0;
	float DiscountTotal = 0.0;
	float ShipHandle = 0.0;
	float OrderQue[4] = {0.0, 0.0, 0.0};
	float OrderLB[4] = {0.0, 0.0, 0.0};
	char TypeOfVeg[15];
	char UserSelection ;
	
	printf("-Welcome to ABC Mail Order Grocery-\n");	
	do
	{
	fflush(stdin);
	printf("------------------------------------\n");
	printf("   [a]     |  [b]  |   [c] \n");
	printf("Artichokes | Beets | Carrots \n");
	printf(" $1.25/lb  |$.65/lb| $.89/lb \n");
	printf("------------------------------------\n");
	printf("Please select an item [a,b, or c] || To Quit enter [q]\n");
	scanf("%c", &UserSelection);
		if(UserSelection != 'q'){
		printf("Enter amount in pounds of selected item\n");
		scanf("%f", &PurchPounds);
		}

	switch (UserSelection){

		case 'a':
			CostPerLB[1] = 1.25;
			OrderQue[1] = (CostPerLB[1] * PurchPounds);
			OrderLB[1] = PurchPounds;
			break;

		case 'b':
			CostPerLB[2] = .65;
			OrderQue[2] = (CostPerLB[2] * PurchPounds);
			OrderLB[2] = PurchPounds;
			break;

		case 'c':
			CostPerLB[3] = .89;
			OrderQue[3] = (CostPerLB[3] * PurchPounds);
			OrderLB[3] = PurchPounds;
			break;
		case 'q':
			break;
	
		default: 
			printf("Please enter a valid selection. . .\n");
			PurchPounds = 0.0;
			break;

	}
	}while (UserSelection != 'q');
	
		total = OrderQue[1] + OrderQue[2] + OrderQue[3];
		PurchPounds = OrderLB[1] + OrderLB[2] + OrderLB[3];

		if (total > 100)
		{
			Discount = .05;
			DiscountTotal = total * Discount; 
		}

		if (PurchPounds > 20)
		{	
			ShipHandle = 8.00 + (PurchPounds * .10);
		}
		else if (PurchPounds > 5 && PurchPounds < 20)
		{	
			ShipHandle = 10.00;
		}

		else
		{	
			ShipHandle = 3.50;
		}
	
		for (int i = 1; i <= 3; i++)
		{
			if (OrderQue[i] != 0)
				{
					if ( i == 1)
					{
						strcpy(TypeOfVeg, "Artichokes");
					}
					if ( i == 2)
					{
						strcpy(TypeOfVeg, "Beets");
					}
					if ( i == 3)
					{
						strcpy(TypeOfVeg, "Carrots");
					}
				printf("================================\n");
				printf("%10.2f --Cost Per Pound\n", CostPerLB[i]);
				printf("%10.2f --Pounds ordered of %s\n", OrderLB[i], TypeOfVeg);
				printf("%10.2f --Cost of order\n", (CostPerLB[i] * OrderLB[i]));
				}
		}// end of for statment

	if (DiscountTotal > 0){
		printf("================================\n");
		printf("-%9.2f --Discount Total\n", DiscountTotal);
	}
	printf("================================\n");
	printf("%10.2f --Total Cost of order\n", (total - DiscountTotal));
	printf("%10.2f --Shiping Charge\n", ShipHandle);
	printf("   --------------\n");
	printf("  |$%.2f|--Grand Total\n" , ((total - DiscountTotal) + ShipHandle));
	printf("   --------------\n");
	system("pause");
		return 0;
}

 