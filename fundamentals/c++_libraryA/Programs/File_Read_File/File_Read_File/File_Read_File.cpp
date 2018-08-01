// File_Read_File.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

FILE *notes;
int _tmain(int argc, _TCHAR* argv[])
{
	char path[30];
	char fileinfo[40];

	printf("Enter a file name\n");
	gets(path);

	notes = fopen(path, "r");
	if(notes == NULL){
		printf("Error! Cannot open file\n");
		return 0;
	}

	fgets(fileinfo, 80, notes);
	while(!feof(notes)){
		puts(fileinfo);
		fgets(fileinfo, 80, notes);
	}
	printf("Closing file\n");
	fclose(notes);
	system("pause");
	return 0;
}

