// CharClassifier.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int up = 0;
	int low = 0;
	int alpha = 0;
	int number = 0;
	char c;

	while ((c = getchar()) != '#'){
		putchar(c);
		if(isalpha(c)){
			printf(" is an alphabetic character\n");
			alpha++;
		}
		if(isdigit(c)){ // if((c>='o')&&(c <= '9'))
			printf(" in a digit\n");
			number++;
		}
		if(isupper(c)){
			up++;
		}
		if(islower(c)){
			low++;
		}
	}//end loop 

	printf("totals upper %d lower %d\n", up,low);
	printf("alphabetic %d number %d\n", alpha,number);

	printf("Enter some more characters\n");
	int totalchars = 0;
	while((c = getchar()) != EOF){ //^Z - control Z
		if(c == ' '){
			continue;
		}
		if(c == '$'){
			putchar('%');
		}
		else{ 
			putchar(c);
			totalchars++;
		}
		if(totalchars%10 == 0)
			putchar('!');
	} // end of while loop
printf("Total characters except for $ are %d\n", totalchars);
	   system("pause");

	return 0;
}

