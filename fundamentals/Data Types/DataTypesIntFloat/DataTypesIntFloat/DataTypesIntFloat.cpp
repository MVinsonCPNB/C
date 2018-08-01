// DataTypesIntFloat.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "limits.h"
#include "float.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int cartons,items,total;

	printf("Please enter cayrtons\n");
	scanf("%d", &cartons);
	printf("Please enter items \n");
	scanf("%d", &items);

	total = cartons * items;

	printf("Total is %d\n", total);

		/* Input: Number of cartons and items
		Algorithm: Compute total as carton times items
		Output: Total
		*/	
	
	printf("Range for float\n");
	printf("%f %f\n", FLT_MAX, FLT_MIN);
	printf("%e %e\n", FLT_MAX, FLT_MIN);
	printf("Bytes for float %d\n", sizeof(double));

	printf("\n\n");

	printf("Range for int\n");
	printf("%d %d\n", INT_MAX,INT_MIN);
	printf("Bytes %d\n", sizeof(int));


	printf("\n\n");

	printf(" Range for long\n");
	printf("%ld %ld\n", LONG_MAX, LONG_MIN);
	printf("Bytes %d\n", sizeof(long));

	printf("\n\n");

	printf("Range for double\n");
	printf("%lf %lf\n", DBL_MAX, DBL_MIN);
	printf("%e %e\n", DBL_MAX, DBL_MIN);
	printf("Bytes for float %d\n\n\n", sizeof(double));

	system("pause");

	float radius , area, pi;
	pi = 3.141519f;   /*[f] means floating point value */

	printf("Please enter the radius: ");
	scanf("%f", &radius);
	area = pi * radius * radius;
	printf("The area of the circle is %f when the radius is %f\n\n", area, radius);

	system("pause");





	return 0;
}

