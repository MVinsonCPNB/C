// Loops_and_Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

float computePower(float x, int n); // function prototype
int rangePrint(int lower, int upper);

int _tmain(int argc, _TCHAR* argv[])
{
	float y,pow;
	int p,low,up;

	printf("Print a lower and upper value\n");
	scanf("%d %d", &low, &up);
	printf("Returned from rangePrint %d\n", rangePrint(low,up));

	printf("Enter y in y^p\n");
	scanf("%f", &y);
	printf("Enter p the power, in y^p\n");
	scanf("%d", &p);
	pow = computePower(y,p);
	printf("Power is %12.4f\n", pow);
	system("pause");



	return 0;
}

float computePower(float x, int n){
	float power = 1.0;
	int j;

	if (n < 0){
		n = -n;
		x = 1.0/x;
	}

	for (j = 1; j <= n; j++){
		power = x* power;
	}// end of for loop 
	return(power);
} // end of computePower

int rangePrint(int lower, int upper){
	int total = 0;
	int count;

	for(count = lower; count <= upper; count++){
	printf("%10d\n", count);
	total = total + count*count;
	}// end of for loop 
	return(total);
}  // end of rangePrint
