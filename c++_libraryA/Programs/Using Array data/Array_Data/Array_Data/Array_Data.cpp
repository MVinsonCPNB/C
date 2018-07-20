// Array_Data.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"



int _tmain(int argc, _TCHAR* argv[])
{
	int index;
	int grades[4] = {98,87,62,100};

	for(index = 0; index <= 3; index++){
		printf("grades[%d] = %3d\n", index, grades[index]);
	}

	system("pause");

	return 0;
}

