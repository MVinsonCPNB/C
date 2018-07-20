// Arrays with Pointer Notations.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "string"

int findSum(int  b[], int length);
int findSumPtr(int *b, int length);
int stringLength(char *s);

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a[5];
	int index; 
	int total;
	char line[20];

	printf("Enter some text\n");
	getline.(cin, line);
	printf("string length is %d\n", stringLength(line));

	for(index = 0; index < 5; index++)
	{
		printf("Please enter the value of a[%d]", index);
		scanf("%d", &a[index]);
		printf("\n");
	}

	total = findSum(a,5);
	printf("sum using array notation %d\n", total);

	total = findSumPtr(a,5);
	printf("sum using pointer notation %d\n", total);

	system("pause");
	
	
	return 0;
}

int stringLength(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len ++;
		s++; // moves the pointer
	}
return (len);
}

int findSum(int b[], int length)
{
	int i;
	int sum = 0;
	for (i =0; i < length; i++){
	sum = sum + b[i];
	printf("*(b(%d)) = %d\n", i, *(b+i));
	}
return (sum);
}
int findSumPtr(int *b, int length){
	int i;
	int sum = 0;

	for (i =0; i< length; i++)
	{
		int i; 
		int sum =0;
		for (i =0; i < length; i++){
		
			sum = sum + *(b+i);
			printf("*b(b+%d) = %d\n", i, *(b+i));
		}

	return (sum);
	}


}
