// Problem_2_Chapter_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char ch;
	int UILen = 0;
	int i = 0;
	int c = 0;

	while((ch = getchar()) != '#'){
	
		printf("(%c):[%d]", ch, ch);
		i = i + 1;

		if (i%8 == 0){
			printf("\n");
			i = 0;
		}// end of if 
	}//end of while

	system("pause");

	return 0;
}

