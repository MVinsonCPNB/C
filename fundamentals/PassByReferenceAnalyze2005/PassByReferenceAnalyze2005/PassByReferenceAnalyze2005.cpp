// PassByReferenceAnalyze2005.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

void scan_line(char line[], int *pv, int *pc, int *pd, int *pw, int *po);
// every paramerter is pass by reference
// arrays are always passed by reference; only if const is an array passed by value


int _tmain(int argc, _TCHAR* argv[])
{
	char line[80];
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int whitespc = 0;
	int other = 0;

	printf("Enter a line of text\n");
	scanf("%[^\n]", line); // read until new line \n
	scan_line(line, &vowels, &consonants, &digits, &whitespc, &other); // &line[0]
	printf("vowels %d\n", vowels);
	printf("consonants %d\n", consonants);
	printf("digits %d\n", digits);
	printf("white space %d\n", whitespc);
	printf("other %d\n", other);

	system("pause");
	return 0;
}

void scan_line(char line[], int *pv, int *pc, int *pd, int *pw, int *po)
{
	char c; 
	int index; 

	index = 0;

	while ((c = toupper(line[index])) != '\0')
	{
		if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			++ *pv;
		else if (c >= 'A' && c <= 'Z')
			++ *pc;
		else if (c >= '0' && c <= '9')
			++ *pd;
		else if (c == ' ' || c == '\t')
			++ *pw;
		else 
			++ *po;
		index++;
	}// of while
}// end of scan_line