// Problem_6_Chapter_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int _tmain(int argc, _TCHAR* argv[])
{
	char StrWord[200];
	int wordlen = 0; int x = 0;

	printf("Please enter a word. . \n");
	scanf("%s", &StrWord);

	wordlen = strlen(StrWord);

	for(x  = --wordlen; x >=0 ; x--){
		printf("%c", StrWord[x]);
	}

	printf("\n%d\n", wordlen);

	system("pause");

	return 0;
}