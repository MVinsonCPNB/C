// File_Read_Write.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

FILE *datafile;
int _tmain(int argc, _TCHAR* argv[])
{
	int count = 0;
	float value;
	int test;
	char ch;
	char path[40];

	value = 10.4;
	test = 6;
	ch = 'A';

	printf("Enter path to file\n");
	gets(path);
	datafile = fopen(path, "a");
	if (datafile == NULL){
		printf("Error cannot open file\n");
		system("pause");
		return 0;
		}

	fprintf(datafile, "%f\n", value);
	fprintf(datafile, "%d\n", test);
	fprintf(datafile, "%c\n", ch);
	fprintf(datafile, "%f\n", 100.93);
	fprintf(datafile, "%d\n", 23);
	fprintf(datafile, "%c\n", 'B');
	fputs("This is a string", datafile);
	fprintf(datafile, "\n");
	fclose(datafile);

	datafile = fopen(path, "r");
	fscanf(datafile, "%f", &value);
	while(!feof(datafile)){
		printf("%f\n", value);
		fscanf(datafile, "%d", &test);
		fscanf(datafile, "%c", &ch);
		printf("%d", test);
		printf("%c", ch);
		fscanf(datafile, "%f", &value);
		printf("%f", value);
		fflush(stdin);
		fgets(path,80,datafile); // do not use this!
		puts(path);
		puts("\n");

	} // end of while
	fclose(datafile);

	system("pause");
	return 0;
}

