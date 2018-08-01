// Zone_Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int zone;
	float pounds,fee;

	printf("Enter a zone and pounds\n");
	while(scanf("%d %f", &zone, &pounds) == 2){
		switch(zone){
			case 1:
			case 2: fee = 10.0;
				break;
			case 3: 
			case 4:
			case 5: fee = 15.0;
				break;
			case 6: fee = 17.5;
				break;
			default: fee = 25.3;
		} // of switch

		fee = pounds * fee;
		printf("Total fee is $%7.2f\n", fee);
		printf("Enter a zone and pounds\n");
	}// end of while loop 

	system("pause");
	return 0;
}

