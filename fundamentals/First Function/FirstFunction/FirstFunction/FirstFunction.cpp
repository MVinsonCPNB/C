// FirstFunction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

void sayhello(void); // function prototype , you could also replace the function with 
                     // the actual functions instead of the prototypes in order to let the
					// the compilier know what the function dose before it is called upon.
void saybye(void);

int _tmain(int argc, _TCHAR* argv[])
{

	sayhello(); // call function
	sayhello();
	printf("\n");
	saybye();
	system("Pause");
	return 0;
}

void sayhello(void){

		printf("Hello");
		// end of sayhello funtion
}

void saybye(void) {
printf("Bye");
// end of say bye funtion
}

