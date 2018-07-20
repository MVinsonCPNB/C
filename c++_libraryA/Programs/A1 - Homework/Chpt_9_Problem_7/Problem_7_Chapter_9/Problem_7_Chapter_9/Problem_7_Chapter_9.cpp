// Problem_7_Chapter_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
double power(double n, int p);

int _tmain(int argc, _TCHAR* argv[])
{
	double x, xpow;
	int exp;
	printf("Enter a number and an integer power to which \n");
	scanf("%lf%d", &x, &exp);
	do{	
	xpow = power(x,exp);  //function call
	
	printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
	printf("Enter next pair of numbers or qq to quit.\n");
	
	}while(scanf("%lf%d", &x, &exp) == 2);
	printf("Hope you enjoyed this power trip -- bye!\n");
	system("pause");
	return 0;
}

double power(double n, int p) // function definition
{
	double pow = 1;
	int i; 

	if (n == 1)
	{
		return 1;
	}
	else if (p < 0)
	{	
		p = p * -1;
		n = 1/n;
	}
	else if (n == 0)
	{	
		return 0;
	}
	else if (p == 0)
	{	
		return 1; 
	}
	
	for (i = 1; i <= p; i++)
	{
		pow *= (n);
		
		if (i == p)
		{
		return pow; // return the value of pow
		}
	}	

}
