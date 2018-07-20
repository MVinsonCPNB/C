// Timer Example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "time.h"
#include "windows.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int seconds;

	seconds = 10; 
	while (seconds > 0) {
		printf("T minus %2d\n", seconds);
		Sleep(1000); // 1000 milliseconds = 1 second
		seconds--;

		if (seconds < 3){
			printf("\a\a\ ");
		}
	}
	printf("Blast Off!!!\a\n");
	
	system("pause");

	return 0;

}

