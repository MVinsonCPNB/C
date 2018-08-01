// TwoDArrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

void addCurve(float g[][4], float curve, int rows);
//void oneDPass(floatx[], int rows);


int _tmain(int argc, _TCHAR* argv[])
{
	float grades[3][4] = {{98.5,34.3,87.9,78.3},
						  {100.9,45.6,99.0,95.4},
						  {99.9,65.6,84.0,94.7}};

	int row,col,student,quiz,studentnumber;
	float sum,average;

	for(row=0; row <=2; row++){
		for (col=0; col <= 3; col++){
			printf("%7.1f", grades[row][col]);
		}// end the columns
		printf("\n");
	}// end rows

	addCurve(grades,5.0f,3);
	printf("Grades after addCurve\n");
		for (row = 0; row <= 2; row++){
		
			for (col = 0; col <= 3; col++){
			printf("%7.1f", grades[row][col]);
			}
			printf("\n");
		}

	sum = 0.0f;
	printf("Enter a student number\n");
	scanf("%d", &studentnumber);
	if((studentnumber < 0) || (studentnumber > 2))
	return 0;

	for (quiz = 0; quiz <= 3; quiz++){
		sum += grades[studentnumber][quiz];
	}
	average = sum / 4.0f;
	printf("Average for student in for %d is %f\n", studentnumber, average);
	system("pause");

	average = 0.0;
	sum = 0.0;

	printf("Please enter the quiz to get an average\n");
	scanf("%d", &quiz);

	if((quiz < 0) || (quiz > 3))
		return 0;
	for (student = 0; student <=2 ; student++){
	
		sum += grades[student][quiz];
	}

	average = sum / 3.0f;
	printf("The Class Average for Quiz %d is %.2f \n", quiz, average);

	system("pause");
	return 0;

}

void addCurve(float g[][4], float curve, int rows){

	int student, gradenumber;
	for (student = 0; student < rows; student++){
	
		for(gradenumber = 0; gradenumber <= 3; gradenumber++){
		
			g[student][gradenumber]+=curve;
			printf("address &g[%d][%d] = %p\n", student, gradenumber, &g[student][gradenumber]);
		}
	}
}

