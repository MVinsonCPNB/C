// Hi_Lo_Guessing_Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "windows.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int secret, guess = 0, number = 0;
	time_t systime;
	struct tm *currtime;
	int SEED;


	systime = time(NULL);
	currtime = localtime(&systime);

	SEED = currtime->tm_sec*100 + currtime->tm_min*60 +
		currtime->tm_hour*60*60 + currtime->tm_mday*60*60*24;

	printf("%d, %d, %d, %d ", currtime->tm_sec, currtime->tm_min, currtime->tm_hour, currtime->tm_mday);

	system("pause");

	srand(SEED);

	if (SEED < 0)
		SEED =- SEED;
	srand(SEED); //intializes the psuedo-random number generator
	secret = (int)(1024*(rand()/32768.0)) +1;
	//printf("secret %d\n", secret);

	system("pause");

	while (guess != secret){
		printf("guess a number 1 to 1024\n");
		scanf("%d", &guess);
		if(guess < secret)
			printf("Lo\n");
		if (guess> secret)
			printf("HI\n");
		number++;
	} // End Loop 
	printf("You won with %d guesses\n", number);
	system("pause");
    
	return 0;
}

