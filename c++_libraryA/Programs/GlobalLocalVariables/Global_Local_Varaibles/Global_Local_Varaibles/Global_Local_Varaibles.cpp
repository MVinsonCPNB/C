// Global_Local_Varaibles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#define PI 3.14159

int avar = 10; // flobal variable

void passAlong(int a);
void printOut(int b);


int _tmain(int argc, _TCHAR* argv[])
{
	int datain; // local variavble

	printf("avar inside main %d\n", avar);
	printf("Enter an integer\n");
	scanf("%d", &datain);
	passAlong(datain);
	printf("avar at the end of main %d\n", avar);
	system("pause");
	return 0;
}

void passAlong(int a){
	printf("a inside passAlong %d\n", a);
	avar = 25;
	printf("avar inside passAlong %d\n", avar);
	printf("PI inside passAlong %f\n", PI);
	a = 3 * a;
	printf("a inside passAlong at end%d\n",a);
	printOut(a);

}// end of passalong

void printOut(int b){
	int avar = -11; // local variables
	printf("avar inside printOut %d\n", avar);
	printf("b inside printOut %d\n", b);

}// end of printOut