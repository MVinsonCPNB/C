// Calculator_Example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{	
	char operand;
	double op1, op2, result;

	printf("Enter operand1 operator and operand2\n");
	while(scanf("%lf%c%lf", &op1, &operand, &op2) == 3)
	{	
		switch(operand)
		{
		case '+' :
					result = op1 + op2;
						break;
		case '-' : 
					result = op1 - op2;
					break;
		case '*' : 
					result = op1 * op2;
					break;
		case '/' : 
					if(op2 == 0.0)
					{	
						printf("Divide by zero result will be set to 0.0\n.");
						result = 0.0;
					}
					else
					{
						result = op1/op2;
			
					}// End Of IF
			break;
		default: printf("invalid operator\n");
		
		}// End Of Switch
	
		printf("result is %lf\n", result);
		printf("Enter operand1 operator and operand2\n");
	}// End Of While


	system("pause");
	return 0;
}

