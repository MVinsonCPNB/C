// MilitaryTimeConverterUsingIF.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	unsigned int mhour;
	unsigned int min;
	unsigned int stdhours;
	int pm;

	while(printf("Enter military time as (xx:xx):" ), scanf("%u:%u", &mhour,&min) == 2)
	{
		pm = 0;

		if (((mhour>23)||(mhour<0))&&((min>59)||(min<0))){
			printf("Very Bad Data!\n");
			break; // exits the loop
		}

		if((mhour > 23) || (mhour < 0)){
			printf("Military time must be between 0 and 23 hours\n");
			continue; // continue the loop; skip all of the following code
		}

		if ((min > 59) || (min < 0)){
			printf("Minutes must be between 0 and 59\n");
			continue;
		}

		if(mhour < 12){
		stdhours = mhour;

			if(mhour == 0){
				stdhours = 12; //midnight
			}

		}

		else if (mhour == 12) 
		{	pm =1;
			stdhours = mhour;
		}
		else
		{//pm
			pm = 1;
			stdhours = mhour - 12;
		}
		
		printf("Standard time: %u:%02u", stdhours,min);
		
		if(pm == 1)
		{
			printf("pm\n");
		
		}
		else {
			printf("am\n");
		}
			
	}// end of while loop 

	system("pause");
	return 0;
}

