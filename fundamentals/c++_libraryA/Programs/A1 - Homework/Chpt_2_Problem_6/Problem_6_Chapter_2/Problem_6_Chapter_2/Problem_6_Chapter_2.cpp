// Problem_6_Chapter_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"		/* Constructed By: Michael Vinson */                     
#include "stdio.h"		/* Date: January 14, 2010 */
#include "stdlib.h"		/* Professor: Dr. Horvath*/
						/* COP1220 */
void SFSmile(void);

int _tmain(int argc, _TCHAR* argv[])
{
	SFSmile();
	printf("\n");

	SFSmile(),SFSmile();
	printf("\n");

	SFSmile(),SFSmile(),SFSmile();
	printf("\n");

	system("pause");
	return 0;
}

void SFSmile(void)
	{
		char StrSmile[20] = "Smile!!"; 

		printf(StrSmile);
	}

