// Loops1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"



int _tmain(int argc, _TCHAR* argv[])
{
	int i,limit;
	int miles, total;

	printf("Sentinel Control\n\n");
	total = 0;
	printf("Enter the number of miles");
	scanf("%d", &miles);

	while (miles > 0){
		total = total + miles;
		printf("total miles %d\n", total);
		printf("Enter the number of miles \
			   - enter a zero to exit\n");
		scanf("%d", &miles);
	}

	

	printf("Counter control\n");
	i=0;
	while(i<=17){
				printf("i=%2d\n", i);
				i = i + 1;
	}
	printf("Header record logic - user controls upper limit\n");
	system("pause");

	printf("Enter the upper limit\n");
	scanf("%d", &limit);

	i=0;
	while(i<=limit){
				printf("i=%2d\n", i);
				i = i + 1;
	}
	printf("Header record logic - user controls upper limit\n");
	system("pause");

	

	return 0;
}

