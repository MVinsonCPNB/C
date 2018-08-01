// Problem_2_Chapter_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"



int _tmain(int argc, _TCHAR* argv[])
{
	int Nasscipass = 0;
	
	
	
	/*User input of value*/ 
	
	
	printf("Please enter a numerical value between 0 and 127.\n");
	scanf("%d", &Nasscipass); /* scan user input to variable as integer value */
	printf(". ..\n\n");
	printf("The ASCII reprenstation of the number %d is [ %c ] \n\n", Nasscipass, Nasscipass); 
	
	/* above data held is still a numerical value [integer]= Nasscipass */

	system("pause");				

	return 0;
}

