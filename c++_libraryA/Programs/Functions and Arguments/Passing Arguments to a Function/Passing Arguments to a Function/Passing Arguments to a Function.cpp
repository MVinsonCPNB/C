// Passing Arguments to a Function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

void showChars(int number, char letter); /*function prototype*/
/**/



int _tmain(int argc, _TCHAR* argv[])
{
	

	showChars(5,'#');
	showChars(0,'*');
	showChars(2,'Z');
	showChars(10,'$');
	system("pause");
	return 0;
}

void showChars(int number, char letter) 
{
	int count;

	for(count = 1; count <= number; count++){
		printf("%c", letter);
	} // end loop 

	printf("\n");

}

