// Nested_Structure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

struct Artist{

	char name[40];
	int yearformed;
};

struct CDS{

	struct Artist band;
	char title[40];
	float price;
	int released; char rank;
};

struct date{

	int month;
	int day;
	int year;
};

struct employee{
	char name[40];
	float pay;
	struct date hiredate;
};

int _tmain(int argc, _TCHAR* argv[])
{
	struct CDS Chieftans = {"The Chieftans", 1977, "The Best of the Chieftans",
		19.95, 1982, 'A'};
	struct CDS Rak;

	struct employee bill = {"BIll", 500.00, 1,5,2010};
	struct employee *billemp;

	printf("Correct hiredate day");
	scanf("%d", &bill.hiredate.day);
	billemp = &bill;
	puts(billemp->name);
	printf("New hire date day %d\n", (*billemp).hiredate.day);
	fflush(stdin);
	printf("For employee %s", (*billemp).name);
	printf("  \n\n\n");
	system("pause");

	printf("Enter artist name\n");
	fflush(stdin);
	gets(Rak.band.name);
	printf("Enter title of CD\n");
	fflush(stdin);
	gets(Rak.title);
	printf("Enter price\n");
	fflush(stdin);
	scanf("%f", &Rak.price);

	puts(Rak.band.name);
	puts(Rak.title);
	printf("Year fromed %d price %.2f\n", Rak.band.yearformed, Rak.price);
	puts(Chieftans.band.name);
	printf("price = %.2f\n", Chieftans.price); 

	system("pause");
	return 0;
}

