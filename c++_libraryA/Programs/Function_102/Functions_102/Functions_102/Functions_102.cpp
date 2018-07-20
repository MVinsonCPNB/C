// Functions_102.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

float findMin(float a, float  b, float c);
char findGrade(int grade);
int sign(float z);

int _tmain(int argc, _TCHAR* argv[])
{
	float m;
	float v1,v2, v3;

	printf("Enter three floating point values\n");
	scanf("%f%f%f", &v1, &v2, &v3);
	m = findMin(v1,v2,v3);
	printf("min is %f\n", m);
	printf("findMin(3.4,-4.5,19.0) = %f\n", findMin(3.4,-4.5,19.0));
	
	system("pause");

	if(sign(v1) == 0)
		printf("v1 is negative\n");
	else 
		printf("grade 100 = %c\n", findGrade(100));
		printf("grade 75 = %c\n", findGrade(75));
	
		printf("v1 is positive\n");

		system("pause");

	return 0;
}

float findMin(float a, float b, float c)
{
	float min;

	min = a;
	if(b<min)
		min = b;
	if(c<min)
		min = c;
	return(min);
}// end of findMin

int sign(float z){

	if (z < 0.0f)
		return(0);
	else 
		return(1);
	}// end of sign

char findGrade(int grade)
{
	if(grade >= 90)
		return('A');
	else if (grade >= 80)
		return('B');
	else if (grade >= 70)
		return('S');
	else 
		return('U');
	

}// end of findGrade