// Problem_4_Chapter_3.cpp : Defines the entry point for the console application.
//

/* Constructed By: Michael Vinson */
/* Date: January 21, 2010 */
/* Professor: Kr. Horvath */
/* COP1220 */



#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{

	float CCount;

	CCount = 21.123456789;
	
	printf("Original number ----------\' 21.123456789 \'\n\n\
Decimal point form:       [ %.1f ]\n\
and\n\
Scientific Notation form: [ %.1e ]\n\n", CCount, CCount);

	print("Original number ----------\' 21.123456789 \'\n\n\
		  Decimal point form:	[ %.3f ]\n\
		  and\n\
		  Scientific Notation form: [ %.3e ]\n\n", CCount, CCount);

	system("pause");

	return 0;
}

