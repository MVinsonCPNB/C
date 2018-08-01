// ConverIntoBinary.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int number,b, nbits, count;
	unsigned int mask, mask2;

	nbits = 8 * sizeof(int);
	printf("Number of bits in int is %d \n", nbits);
	mask = 0x1 << (nbits - 1); // place a bit in the left most position

	do{
		printf("Enter an integer\n");
		scanf("%d", number);
		mask2 = mask;
		for (count = 1; count <= nbits; count++){
		
			if (number & mask2)
				b = 1;
			else 
				b = 0;
			printf("%d", b);
			if (count%4 == 0)
				printf(" ")
			mask2 = mask2 >> 1; shift bits to 
		}
		printf("\n\n");
	}while (number >= 0);
	system("pause");
	return 0;
}

