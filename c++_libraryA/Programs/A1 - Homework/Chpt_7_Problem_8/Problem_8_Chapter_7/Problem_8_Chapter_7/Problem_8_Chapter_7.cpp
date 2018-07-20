// Problem_8_Chapter_7.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

int _tmain(int argc, _TCHAR* argv[])
{
	float Count1 = 0.00, Count2 = 0.00;
	float HWorked = 0.00;
	float PayRate = 10.00;
	float OTime = 0.00;
	float HTake = 0.00;
	float Tax15 = .15;
	float Tax20 = .20;
	float Tax25 = .25;
	int Choice;

	printf("Please Select Pay Grade:  \n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("1) $8.75/hr \t\t 2)$9.33/hr\n");
	printf("3) $10.00/hr \t\t 4)$11.20/hr\n");
	printf("5) quit\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	while (scanf("%d", &Choice) == 0 || Choice > 5 || Choice < 0)
	{ 
		printf("Please enter a Valid Value for Your Choice\n");
		system("pause");
		fflush (stdin);
	}
		do
		{
			while(Choice != 5)
			{

					switch(Choice)
					{
						case 1 : PayRate = 8.75;
								break;
						case 2 : PayRate = 9.33;
								break;
						case 3 : PayRate = 10.00;
								break;
						case 4 : PayRate = 11.20;
								break;
						case 5 : break;


		
					} // end of switch

			printf("Enter Number of Hours Worked:");
			scanf("%f" , &HWorked);

			if(HWorked > 40)
			{
			OTime = HWorked - 40;
			HTake = ((OTime) * (PayRate * 1.5)) + (40 * PayRate);
			Count1 = HTake;
			}
			else
			{
			HTake = (HWorked * PayRate);
			Count1 = HTake;
			}// end of if Use in the calc of Overtime.

			if (Count1 >= 450)
			{
			Count2 = (300 * Tax15)+(150 * Tax20)+(Tax25 * (Count1 - 450));  
			HTake = HTake - Count2;

			} 
			else if(Count1 >= 300)
			{
			Count2 = (300 * Tax15) + (Tax25 * (Count1 - 300));
			HTake = HTake - Count2;
			}
			else if(Count1 < 300)
			{
				Count2 = (Count1 * Tax15);
				HTake = HTake - Count2;
			}// end of if used to apply tax percent per amounts

		printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf("Total Hours: [%.2f]\n\n", HWorked);

			if (HWorked>40)
			{
			 printf("__Base Pay at <= 40 hrs----  [%.2f]\n", (40 * PayRate));
			}
			else 
			{
			printf("__Base Pay <= 40 hrs ----  [%.2f]\n", (PayRate * HWorked));
			}

		printf("__OverTime Payed:----------  %.2f/hrs at $%.2f/hr\n", OTime, (PayRate * 1.5));
		printf("__OverTime Amount:---------  %-05.2f\n", ((PayRate * 1.5) * OTime));
		printf("__Total Amount:------------  %-05.2f\n" , (HTake + Count2));
		printf("__Taxes Withheld:---------- [-%-05.2f]\n", Count2);
		printf("__Net Take Home:-----------  %05.2f\n", HTake);
		printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

		system("pause");

	Count1 = 0.00; /* reset all variables */
	Count2 = 0.00;
	HTake = 0.00;
	HWorked = 0.00;
	OTime = 0.00;

	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n"); // get new PayRate
	printf("1) $8.75/hr \t\t 2)$9.33/hr\n");
	printf("3) $10.00/hr \t\t 4)$11.20/hr\n");
	printf("5) quit\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

	while (scanf("%d", &Choice) == 0 || Choice > 5 || Choice < 0)
	{ 
		printf("Please enter a Valid Value for Your Choice\n");
		system("pause");
		fflush (stdin);
	}// Check for input integrety

	}// end of while

	} while (Choice > 0 && Choice <=4);  // end of do while
	return 0;
}




