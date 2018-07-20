// Problem_6_Chapter_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "float.h"				// Includes:FLT_DIG and DBL_DIG functions.

int _tmain(int argc, _TCHAR* argv[])
{
	double Dblnumb = 1.0/3.0; 
	int DblCount;
	DblCount = DBL_DIG;			// setting DblCount to the integer value of the decimal 
	float Fltnumb = 1.0/3.0;	// places that are used, when storing double numbers
	int FltCount;
	FltCount = FLT_DIG;			// Same as method above just grabbing the float decimal value places

	printf("This is Float : %.*f\n", FltCount, Fltnumb);
	printf("                 [123456]\n\n");
	printf("This computer uses %.1d decimal places for a float #. . \n\n\n", FltCount);
	
	printf("This is the Double : %.*f\n", DblCount, Dblnumb);
	printf("                      [123456789012345]\n\n");
	printf("This computer uses %.1d decimal places for a double #. . \n\n\n", DblCount);

	system("pause\n");

	printf("This is an Example of Over-Reaching a variable's defined limit:\n\n");
	printf("FLOAT:\n %.4f\t:\t%.12f,\t:\t%.16f\n", Fltnumb, Fltnumb, Fltnumb);
	printf("                        |<-[No longer correct]  |<-[No longer correct]\n\n");

	printf("DOUBLE:\n %.4f\t:\t%.12f,\t:\t%.16f\n", Dblnumb, Dblnumb, Dblnumb);
	printf("                                          123456789012345|<-[No longer correct]\n\n");
	system("pause");
	return 0;
}

