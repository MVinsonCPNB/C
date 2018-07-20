// CompaedUnionStructures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

union data1{
	int x;
	char y;
	float z;
};

struct data2{
	int a;
	char b;
	float c;
};


int _tmain(int argc, _TCHAR* argv[])
{
	struct data2 sd2;
	union data1 ud1;

	printf("sizeof data1 %d sizeof data2 %d/n", sizeof(ud1), sizeof(sd2));

	ud1.x = 10;
	printf("ud1.x = %d\n", ud1.x);
	ud1.y = 'A';
	printf("ud1.y = %c\n", ud1.y);
	printf("error ud1.z = %f\n", ud1.z);
	printf("error ud1.x = %c\n", ud1.x);
	system("pause");



	return 0;
}

