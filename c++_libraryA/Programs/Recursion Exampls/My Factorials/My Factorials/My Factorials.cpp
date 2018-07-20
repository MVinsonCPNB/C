// My Factorials.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

long myfact1(long n);
int fibo1(int n);
void reverse();
void up_and_down(int n);
int mymult(int a, int b);

int _tmain(int argc, _TCHAR* argv[])
{

	long factorial, number;
	int fibon, range;
	int result;
	reverse();

	result = mymult(5,4);
	printf("result = %d\n", result);

	printf("Enter a n for n! and for Fibonacci\'s series\n");
		scanf("%ld", &number);

		up_and_down(number);
	
	factorial = myfact1(number);
	printf("factorial = %ld\n", factorial);

	for (range = 1; range <= number; range++)
	{
		fibon = fibo1(range);
		printf("f(%d) = %d\n", number, fibon);
	
	
	}
	

	system("pause");
	return 0;
}


int mymult(int a, int b)
{
	if(b==1)
		return(a);
	else
		return(a+,(b-1));



}

void up_and_down(int n) 
{
	printf("Print #1 Level n = %d\n", n);
	if (n <= 4){
		up_and_down(n+1);
	printf("Printf #2 Level n = %d\n", n);
	}
	
	} // end of up+and_doen


void reverse()
{
	char c;
	if ((c = getchar()) != '\n')
	{
		reverse();
	}
	putchar(c);
}

int fibo1(int n) {
	if ((n == 0) || (n == 1))
		return(1);
	else
		return(fibo1(n-1) + fibo1(n-2));
} // of fibo1


long myfact1(long n){
	if(n==1)
		return(1);
	else 
		return(n * myfact1(n-1));
}
