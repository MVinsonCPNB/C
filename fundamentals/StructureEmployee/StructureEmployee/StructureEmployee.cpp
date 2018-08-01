// StructureEmployee.cpp : Defines the entry point for the console application.
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

void printEmployeeData(struct employee emp);
void UpdateHours(struct employee *emp, int h);
int _tmain(int argc, _TCHAR* argv[])
{
	struct employee Tanya;
	struct employee Mike = {3, 18.50f, 50,"Mike Thompson"};
	char temp[80];

	printf("Enter Tanya\'s name\n");
	gets(Tanya.name);
	printf("Enter employeeID, paytate, and hours\n");
	scanf("%d", &Tanya.employeeID);
	scanf("%f", &Tanya.payrate);
	scanf("%d", &Tanya.hours);
	printEmployeeData(Tanya);
	UpdateHours(&Mike, 45);
	printEmployeeData(Mike);
	system("pause");
	return 0;
}

void UpdateHours(struct employee *emp, int h){

	(*emp).hours = h;
	emp-> hours = h; // equivalent to (*e,[).hours = h
}

void printEmployeeData(struct employee emp){

	puts(emp.name);
	printf("emp.employeeID %d\n", emp.employeeID);
	printf("emp.payrate %.2f\n", emp.payrate);
	printf("emp.hours %d\n", emp.hours);

}// end of printEmployeeData
