// File Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

FILE *notefile;
FILE *results;

typedef struct Stock {
	char name[20];
	int item;
	float sell;
	float price;
}STOCK;

STOCK list[20];

int _tmain(int argc, _TCHAR* argv[])
{
	notefile = fopen("L:\\Stock.txt", "r");
	results = fopen("L:\\Store_Results.txt", "w");
	char message[80];
	int items = 0;
	float sell = 0;
	float price = 0; 
	float TotalS = 0, TotalP = 0;
	float TempS = 0, TempP = 0;
	float TNetPro = 0;
	int C_Token_C = 0;
	int MenuItems = 0;

	
	if(notefile == NULL)
	{
		printf("\nError - Cannot open designated file\m");
		return 0;
	}
//while (!feof(notefile)){
		
		for(int i = 0; (i < 19) && (!feof(notefile)); i++){
			
		
				fscanf(notefile, "%s ", &message);
				strcpy(list[i].name, message);
				printf("%s\n", list[i].name);
				
				fscanf(notefile, "%d", &items);
				list[i].item = items;
				printf("%d\n", list[i].item);
				
				fscanf(notefile, "%f", &sell);
				list[i].sell = sell;
				printf("%.2f\n", list[i].sell);
				
				fscanf(notefile, "%f", &price);
				list[i].price = price; 
				printf("%.2f\n", list[i].price);

				C_Token_C = i;
									}// end of while
	
		
	MenuItems = C_Token_C; 

	for (int x = 0; x <= MenuItems; x++){
		TempP = list[x].price * list[x].item;
		TempS = list[x].sell * list[x].item;
		
		TotalS = TotalS + (list[x].sell * list[x].item);  //total sale price of everything
		TotalP = TotalP + (list[x].price * list[x].item); //total price to buy everything

		printf("Total Sale for %s\t%11.2f+\n",  list[x].name ,TempS); 
		printf("Total Price for %s\t%11.2f-\n\n",  list[x].name ,TempP);
		printf("                                  ------------\n");
		printf("Total Profit for %s\t%11.2f+\n\n", list[x].name, (TempS-TempP));
		fprintf(results, "The Total Sale Value of %s in Stock is: %.2f\n", list[x].name, TempS);
	}
	TNetPro = TotalS - TotalP;

	printf("Total Net Profit of Store:______________\n%40.2f+\n", TNetPro);
	fprintf(results, "Total Net Profit of Store:______________\n%40.2f+\n", TNetPro);
	fprintf(results, "Constructed by: Michael Vinson");
		fclose(notefile);
		fclose(results);
		system("pause");



	return 0;
}

