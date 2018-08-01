// Nested_Pass_by_Reference.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "String.h"

struct date{

	int month;
	int day;
	int year;
};

typedef struct employee{
	char name[40];
	float pay;
	struct date hiredate;
}EMPLOYEE;

void InitializeEmployee(EMPLOYEE *emp, char n[], float p, int m, int d, int y);
void PrintEmployee(EMPLOYEE emp);

int _tmain(int argc, _TCHAR* argv[])
{
	EMPLOYEE Shirley;

	InitializeEmployee(&Shirley, "Shirley Mcintosh", 500.00, 3,25,2010);
    PrintEmployee(Shirley);
	system("pause");
	return 0;
}

void InitializeEmployee(EMPLOYEE *emp, char n[], float p, int m, int d, int y)
{
	strcpy(emp->name,n);
	emp->pay = p;
	emp->hiredate.month = m;
	emp->hiredate.day = d;
	emp->hiredate.year=y;

}// end of initializeEmployee
void PrintEmployee(EMPLOYEE emp)
{
	puts(emp.name);
	printf("Hired in %d\,", emp.hiredate.day);
}
