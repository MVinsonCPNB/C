// Problem_4_Chapter_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
int largest_value(double *Data, int elements);

int _tmain(int argc, _TCHAR* argv[])
{

	int largest_index = 0; 
	double SourceArr[10] = {24,25,45654,51,109,654,189,6461,1,0};
	largest_index = largest_value(SourceArr, 10);
	printf("The largest number is %.0lf and it is stored in index #[%d]\n",*(SourceArr + largest_index), largest_index);

	system("pause");
	return 0;
}

int largest_value(double *Data, int elements)
{
	int largest_index;
	double count = 0;
	int i;
	double LargeTracker = 0;
	for (i = 0; i < elements; i++)
	{
		count = *(Data + i);

		if (count > LargeTracker)
		{
			LargeTracker = *(Data + i);
			largest_index = i;
		}//end if 
	}// end for
	return largest_index;
}// end function
