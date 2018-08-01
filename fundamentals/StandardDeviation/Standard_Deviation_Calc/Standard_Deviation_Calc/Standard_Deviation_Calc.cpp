// Standard_Deviation_Calc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "math.h"



int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	float grade[4], average, pardev1, pardev2, standardDeviation;
	int numberGrades = 4;

	for (i=0; i< numberGrades; i++){
		printf("Grade %d: ", (i+1));
		scanf("%f", &grade[i]);
		printf("\n");
	}// end of input for loop

	average = 0.0f;
	for (i = 0; i < numberGrades; i++){
		average = average + grade[i]/((float) numberGrades);
	}

	printf("The average grade is %5.2f\n", average);

	pardev1 = 0.0f;
	for(i = 0; i < numberGrades; i++){
		pardev1 = pardev1 + (float) pow((grade[i]-average),2);
	}

	standardDeviation = (float) sqrt(pardev1/((float)(numberGrades-1)));
	printf("The standard deviation is %5.2f\n", standardDeviation);

	
	system("pause");
	return 0;
}

