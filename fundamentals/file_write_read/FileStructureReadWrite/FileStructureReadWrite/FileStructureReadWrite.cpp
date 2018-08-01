// FileStructureReadWrite.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

struct employee{
	char name[40];
	int hours;
	float wage;
	
};

FILE *employeeFile;

int _tmain(int argc, _TCHAR* argv[])
{
	char filename[40];
	char lastname[40];
	int h;
	float w;
	struct employee fulltime;
	int employeenumber;
	printf("Enter the filename\n");
	gets(filename);

	employeeFile = fopen(filename, "a+");  //append and read

	if(employeeFile == NULL)
		employeeFile = fopen(filename, "w+");

	printf("Please enter the employee name\n");
	fflush(stdin);
	gets(fulltime.name);
	while(fulltime.name[0] != '\0'){
		fseek(employeeFile,0L, SEEK_END);
		printf("Please enter the hours\n");
		scanf("%d", &fulltime.hours);
		printf("Please enter the hourly wage\n");
		scanf("%f", &fulltime.wage);
		fwrite(&fulltime,(sizeof (struct employee)), 1, employeeFile);
		printf("Please enter the employee name\n");
		fflush(stdin);
		gets(fulltime.name);
	}// end of while loop

	rewind(employeeFile);
	fseek(employeeFile, 0l, SEEK_SET); // go to the start of the file
	while (!feof(employeeFile)){
		fread(&fulltime,(sizeof (struct employee)), 1, employeeFile);
		puts(fulltime.name);
		printf("hours %d\n", fulltime.hours);
		printf("wage %f\n", fulltime.wage);
	}// end of loop

	printf("Enter an employee record number\n");
	scanf("%d", &employeenumber);
	while (employeenumber >0){
		fseek(employeeFile, employeenumber*sizeof(struct employee), SEEK_SET);
		fread(&fulltime, (sizeof (struct employee)),1,employeeFile);
		puts(fulltime.name);
		printf("hours %d\n", fulltime.hours);
		printf("wage %f\n", fulltime.wage);
		printf("Enter an employee record number\n");
		scanf("%d", &employeenumber);
	}// end of loop

	fclose(employeeFile);
	system("pause");
	return 0;
}

