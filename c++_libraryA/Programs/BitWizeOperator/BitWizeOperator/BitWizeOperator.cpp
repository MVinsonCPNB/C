// BitWizeOperator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	unsigned int x,y,result,mask;

	x = 0xf3; // 1111 0011 in binary
	y = 0x4; // oooo o1oo in binary

	result = ~x; // not
	printf("x = %x ~x = %x\n", x, result);

	result = x & y;
	printf("x & y = %08x\n",x, result);

	result = x|y;
	printf("x|y = %08x\n", result);

	system("pause");

	return 0;
}

