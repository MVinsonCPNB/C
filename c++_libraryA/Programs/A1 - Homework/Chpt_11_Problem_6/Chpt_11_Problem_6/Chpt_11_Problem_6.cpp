// Chpt_11_Problem_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
void StrTrunk(char *a, char *b, int Limit);
int _tmain(int argc, _TCHAR* argv[])
{
	char DataString1[80];
	char DataString2[80];
    char *DataPnt1;
	char *DataPnt2;
	int LIM = 0; 
	int M = 0;
	puts("Please enter sentence # one.");
	DataPnt1 = gets(DataString1);
	puts("Please enter sentence # two.");
	DataPnt2 = gets(DataString2);
	printf("Pick a number one through %d\n", (strlen(DataString2)));
	scanf("%d", &LIM);
	StrTrunk(DataString1, DataString2, LIM);
	puts(DataString1);
	printf("This is the length of the string . . . %d\n", strlen(DataString1));
	system("pause");
	return 0;
}
void StrTrunk(char *a, char *b, int Limit){
	int i = 0;
	int p = 0;
	int x = 0;
		while(*(a + p) != '\0')
						{
							p++;
						};
	*(a + p) = ' ';
	p++;
		while(*(b + i) != '\0' && (i <= Limit))
						{
							*(a + (p + i)) = *(b + i);
							i++;
						};
	*(a + (p + i)) = '\0';
};

