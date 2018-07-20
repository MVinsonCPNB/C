// Problem_7_Chapter_7.cpp : Defines the entry point for the console application.
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

	printf("Enter Number of Hours Worked:");
	
	while(scanf("%f" , &HWorked) == 1){

	
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
        printf("__Base Pay at >= 40 hrs----  [%.2f]\n", (40 * PayRate));
		}
		else 
		{
		printf("__Base Pay < 40 hrs ----  [%.2f]\n", (PayRate * HWorked));
		}
		printf("__OverTime Payed:----------  %.2f/hrs at $%.2f/hr\n", OTime, (PayRate * 1.5));
		printf("__OverTime Amount:---------  %-05.2f\n", ((PayRate * 1.5) * OTime));
		printf("__Total Amount:------------  %-05.2f\n" , (HTake + Count2));
		printf("__Taxes Withheld:---------  [-%-05.2f]\n", Count2);
		printf("__Net Take Home:-----------  %05.2f\n", HTake);
		printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

	Count1 = 0.00;
	Count2 = 0.00;
	HTake = 0.00;
	HWorked = 0.00;
	OTime = 0.00;

	printf("Enter Number of Hours Worked Or Type Q to quit.\n\n");

	}// end of while


	

	return 0;
}

