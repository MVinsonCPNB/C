// File_Usage_001.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
FILE *notes;


int _tmain(int argc, _TCHAR* argv[])
{
	char path[30]; // path to location of the file
	char notedata[40];

	printf("Enter a file name\n");
	gets(path);

	notes = fopen(path,"a"); //append mode lets you write over and over to the same file

	if(notes ==	NULL){
		printf("File cannot be opened\n");
		return 0;
	}
	printf("Enter the information for the notepad file\n");
	fflush(stdin);
	do{
		gets(notedata);
		fputs(notedata, notes);
		putc('\n', notes);
	} while ((notedata != NULL) && (notedata[0] != '\0'));

	printf("Closing file\n");
	system("pause");
	fclose(notes);

	return 0;
}

