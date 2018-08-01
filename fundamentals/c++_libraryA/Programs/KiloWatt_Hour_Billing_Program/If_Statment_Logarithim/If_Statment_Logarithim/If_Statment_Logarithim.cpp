// If_Statment_Logarithim.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int kwh;
	float fee;

	printf("Please enter kwh\n");
	while(scanf("%d", &kwh) == 1){
		if(kwh <=320) {
			fee = kwh * 0.32;
		}
		else if (kwh <+ 680){
			fee = 320 * 0.32 + (kwh - 320) * 0.48;
		}
		else{
			fee = 320 * 0.32 + (680 - 320) * 0.48 + (kwh-680) * 0.53;
		}
		printf("Your fee is $%7.2f\n", fee);
		printf("Please enter kwh - enter bye to exit\n");
}// of while loop
system("pause");
	return 0;
}

