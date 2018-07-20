// Problem_4_Chapter_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

int _tmain(int argc, _TCHAR* argv[])
{
	char ch;
	int prdCount = 0;
	int	exlCount = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			printf("!");
			prdCount = prdCount + 1;
		}
		else if (ch == '!')
		{ 
			printf("!!");
			exlCount = exlCount + 1;
		}
		else
		{
			printf("%c", ch);
		} 
	}
	printf("Substitution made for the Period [%d] \n", prdCount);
	printf("Substitution made for the Exclimation Mark [%d] \n", exlCount);
	system("pause");
	return 0;
}

