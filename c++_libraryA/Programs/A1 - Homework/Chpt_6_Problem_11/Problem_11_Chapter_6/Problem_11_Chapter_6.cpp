// Problem_11_Chapter_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int _tmain(int argc, _TCHAR* argv[])
{

	float Numb1, Numb1Total = 1, Numb2Total = 0, Numb3 = 1, Numb4Total = 0 ,x ;
	printf("Please enter a Value\n");
	while(scanf("%f", &Numb1)== 1){
	
			for( x = Numb1 ; x > 0 ; x-- ){
			Numb1Total = 1.0/x ;
			Numb2Total = Numb1Total + Numb2Total;

					if (fmod(x,2) == 0){
					Numb3 =  1.0/x ;
					Numb4Total = Numb4Total + Numb3;
					}

					if (fmod(x,2) == 1){
					Numb3 = - 1.0/x;
					Numb4Total = Numb4Total + Numb3;
					}
	}
	printf("%8.8f\n\n", Numb2Total);
	printf("%8.8f\n\n", Numb4Total);
	Numb4Total = 0;
	Numb2Total = 0;
	system("pause");
	printf("Please enter a Value\n");
	}
	return 0;
}

