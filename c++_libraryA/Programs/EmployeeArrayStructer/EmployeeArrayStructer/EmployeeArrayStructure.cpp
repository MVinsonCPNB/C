// EmployeeArrayStructer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct employee{
	int employeeID;
	float payrate;
	int hours;
	char name[80];
};
float findTotalPay(struct employee theemps[]);
int _tmain(int argc, _TCHAR* argv[])
{
	float total;
	struct employee pbsc[5];
	int count =0;

	for(count = 0; count <=4; count++){
	
	printf("Enter the employee name\n");
	fflush(stdin);
	gets(pbsc[count].name);
	
	printf("Enter employee payrate\n");
	scanf("%f", &pbsc[count].payrate);
	printf("Enter employee hours\n");
	scanf("%d", &pbsc[count].hours);
	printf("Enter employee employeeID\n");
	scanf("%d", &pbsc[count].employeeID);
	}
	total = findTotalPay(pbsc);
	printf("Total Pay is $%7.2f\n", total);
	system("pause");
	
	return 0;
}
float findTotalPay(struct employee theemps[])
{
	float pay = 0.0f;
	int index;
	for(index = 0; index <= 4; index++)
	{
		pay = pay + theemps[index].hours * theemps[index].payrate;
	}
	return(pay);
}
