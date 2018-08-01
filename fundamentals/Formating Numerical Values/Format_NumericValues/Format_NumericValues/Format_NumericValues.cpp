// Format_NumericValues.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int k,width, precision;
	float radius, volume;

	printf("Enter the radius\n");
	scanf("%f", &radius);

	printf("Enter the precision\n");
	scanf("%d", &precision);

	printf("Enter the width\n");
	scanf("%d", &width);

	volume = (4.0/3.0)*3.141519*(radius*radius*radius);

	printf("Volume %f|%8.2f|%7.0f|%9.1f|%+10.3f\n", volume,volume,volume,volume,volume);
	printf("Volume %*.*f\n", width,precision,volume);

	// volume = 2e10

	printf("Volume %e|%4.1e\n", volume,volume);

	printf("Enter an integer value\n");
	scanf("%d", &k);

	
	printf("%d|%10d|%-7d|%05d|%#o|%o\n",k,k,k,k,k,k);
	
	printf("%x|%#x\n",k,k);

	printf("%*d\n", width,k);

	system("pause");

	return 0;
}

