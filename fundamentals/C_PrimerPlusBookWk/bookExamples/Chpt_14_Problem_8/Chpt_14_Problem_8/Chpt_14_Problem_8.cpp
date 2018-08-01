// Chpt_14_Problem_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

FILE *Flight_101_Manifest;
void AssignSeat(struct PassangerResv *edit);
void DeleteSeat(struct PassangerResv *edit, int seatnumber);
struct PassangerResv{
	int Seat;
	char Assigned;
	char LastName[20];
	char FirstName[20];
};
int _tmain(int argc, _TCHAR* argv[])
{
	struct PassangerResv Seat1 = {1, 'n', " " , " "};
	struct PassangerResv Seat2= {2, 'n', " " , " "};
	struct PassangerResv Seat3 = {3, 'n', " " , " "};
	struct PassangerResv Seat4 = {4, 'n', " " , " "};
	struct PassangerResv Seat5 = {5, 'n', " " , " "};
	struct PassangerResv Seat6 = {6, 'n', " " , " "};
	struct PassangerResv Seat7 = {7, 'n', " " , " "};
	struct PassangerResv Seat8 = {8, 'n', " " , " "};
	struct PassangerResv Seat9 = {9, 'n', " " , " "};
	struct PassangerResv Seat10 = {10, 'n', " " , " "};
	struct PassangerResv Seat11 = {11, 'n', " " , " "};
	struct PassangerResv Seat12 = {12, 'n', " " , " "};
	
	
	int Track = 0;

	char UserChoice;
	char *Seat1LN, *Seat2LN, *Seat3LN, *Seat4LN, *Seat5LN, *Seat6LN, *Seat7LN, *Seat8LN, *Seat9LN, *Seat10LN, *Seat11LN, *Seat12LN;
	Seat1LN = Seat1.LastName;
	Seat2LN = Seat2.LastName;
	Seat3LN = Seat3.LastName;
	Seat4LN = Seat4.LastName;
	Seat5LN = Seat5.LastName;
	Seat6LN = Seat6.LastName;
	Seat7LN = Seat7.LastName;
	Seat8LN = Seat8.LastName;
	Seat9LN = Seat9.LastName;
	Seat10LN = Seat10.LastName;
	Seat11LN = Seat11.LastName;
	Seat12LN = Seat12.LastName;

	char Alf[27] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char *AlfPnt;
	AlfPnt = Alf;
	int SeatRes;

	Flight_101_Manifest = fopen("L:\\Flight_101_Manifest.dat", "w+");
	if (Flight_101_Manifest == NULL){
		printf("Error cannot open file. Contact you Administrator.\n");
		system("pause");
		return 0;}
		
	fscanf(Flight_101_Manifest, "%d", Seat1.Seat);
	fscanf(Flight_101_Manifest, "%c", Seat1.Assigned);
	fscanf(Flight_101_Manifest, "%d", Seat1.LastName);
	fscanf(Flight_101_Manifest, "%d", Seat1.FirstName);

	fscanf(Flight_101_Manifest, "%d", Seat2.Seat);
	fscanf(Flight_101_Manifest, "%c", Seat2.Assigned);
	fscanf(Flight_101_Manifest, "%d", Seat2.LastName);
	fscanf(Flight_101_Manifest, "%d", Seat2.FirstName);

	fscanf(Flight_101_Manifest, "%d", Seat3.Seat);
	fscanf(Flight_101_Manifest, "%c", Seat3.Assigned);
	fscanf(Flight_101_Manifest, "%d", Seat3.LastName);
	fscanf(Flight_101_Manifest, "%d", Seat3.FirstName);

	fscanf(Flight_101_Manifest, "%d", Seat4.Seat);
	fscanf(Flight_101_Manifest, "%c", Seat4.Assigned);
	fscanf(Flight_101_Manifest, "%d", Seat4.LastName);
	fscanf(Flight_101_Manifest, "%d", Seat4.FirstName);

	fscanf(Flight_101_Manifest, "%d", Seat5.Seat);
	fscanf(Flight_101_Manifest, "%c", Seat5.Assigned);
	fscanf(Flight_101_Manifest, "%d", Seat5.LastName);
	fscanf(Flight_101_Manifest, "%d", Seat5.FirstName);

	fscanf(Flight_101_Manifest, "%d", Seat6.Seat);
	fscanf(Flight_101_Manifest, "%c", Seat6.Assigned);
	fscanf(Flight_101_Manifest, "%d", Seat6.LastName);
	fscanf(Flight_101_Manifest, "%d", Seat6.FirstName);

	fscanf(Flight_101_Manifest, "%d", Seat7.Seat);
	fscanf(Flight_101_Manifest, "%c", Seat7.Assigned);
	fscanf(Flight_101_Manifest, "%d", Seat7.LastName);
	fscanf(Flight_101_Manifest, "%d", Seat7.FirstName);

	fscanf(Flight_101_Manifest, "%d", Seat8.Seat);
	fscanf(Flight_101_Manifest, "%c", Seat8.Assigned);
	fscanf(Flight_101_Manifest, "%d", Seat8.LastName);
	fscanf(Flight_101_Manifest, "%d", Seat8.FirstName);

	fscanf(Flight_101_Manifest, "%d", Seat9.Seat);
	fscanf(Flight_101_Manifest, "%c", Seat9.Assigned);
	fscanf(Flight_101_Manifest, "%d", Seat9.LastName);
	fscanf(Flight_101_Manifest, "%d", Seat9.FirstName);

	fscanf(Flight_101_Manifest, "%d", Seat10.Seat);
	fscanf(Flight_101_Manifest, "%c", Seat10.Assigned);
	fscanf(Flight_101_Manifest, "%d", Seat10.LastName);
	fscanf(Flight_101_Manifest, "%d", Seat10.FirstName);

	fscanf(Flight_101_Manifest, "%d", Seat11.Seat);
	fscanf(Flight_101_Manifest, "%c", Seat11.Assigned);
	fscanf(Flight_101_Manifest, "%d", Seat11.LastName);
	fscanf(Flight_101_Manifest, "%d", Seat11.FirstName);

	fscanf(Flight_101_Manifest, "%d", Seat12.Seat);
	fscanf(Flight_101_Manifest, "%c", Seat12.Assigned);
	fscanf(Flight_101_Manifest, "%d", Seat12.LastName);
	fscanf(Flight_101_Manifest, "%d", Seat12.FirstName);
	
	fclose(Flight_101_Manifest);
	puts("**________Colossus Airlines_________**");

	do{ 
		puts("To choose a function, enter its letter label:");
		puts("a) Show number of empty seats");
		puts("b) Show list of empty seats");
		puts("c) Show alphabetical list of seats");
		puts("d) Assign a customer to a seat assignment");
		puts("e) Delete a seat assignment");
		printf("f) Quit");
		scanf("%c", &UserChoice);

		switch(UserChoice){
		
					case 'a': 
							    if (Seat1.Assigned == 'n')
								{
									Track++;
								};// end of if
								if (Seat2.Assigned == 'n')
								{
									Track++;
								};// end of if
								if (Seat3.Assigned == 'n')
								{
									Track++;
								};// end of if
								if (Seat4.Assigned == 'n')
								{
									Track++;
								};// end of if
								if (Seat5.Assigned == 'n')
								{
									Track++;
								};// end of if
								if (Seat6.Assigned == 'n')
								{
									Track++;
								};// end of if
								if (Seat7.Assigned == 'n')
								{
									Track++;
								};// end of if
								if (Seat8.Assigned == 'n')
								{
									Track++;
								};// end of if
								if (Seat9.Assigned == 'n')
								{
									Track++;
								};// end of if
								if (Seat10.Assigned == 'n')
								{
									Track++;
								};// end of if
								if (Seat11.Assigned == 'n')
								{
									Track++;
								};// end of if
								if (Seat12.Assigned == 'n')
								{
									Track++;
								};// end of if
								printf("There are %d availiable for purchase\n", Track);
								system("pause");
								break;

						case 'b': 

							printf("Seats Available Listed Below:\n");
							    if (Seat1.Assigned == 'n')
								{
									printf("Seat 1\n");
								};// end of if
								if (Seat2.Assigned == 'n')
								{
									printf("Seat 2\n");
								};// end of if
								if (Seat3.Assigned == 'n')
								{
									printf("Seat 3\n");
								};// end of if
								if (Seat4.Assigned == 'n')
								{
									printf("Seat 4\n");
								};// end of if
								if (Seat5.Assigned == 'n')
								{
									printf("Seat 5\n");
								};// end of if
								if (Seat6.Assigned == 'n')
								{
									printf("Seat 6\n");
								};// end of if
								if (Seat7.Assigned == 'n')
								{
									printf("Seat 7\n");
								};// end of if
								if (Seat8.Assigned == 'n')
								{
									printf("Seat 8\n");
								};// end of if
								if (Seat9.Assigned == 'n')
								{
									printf("Seat 9\n");
								};// end of if
								if (Seat10.Assigned == 'n')
								{
									printf("Seat 10\n");
								};// end of if
								if (Seat11.Assigned == 'n')
								{
									printf("Seat 11\n");
								};// end of if
								if (Seat12.Assigned == 'n')
								{
									printf("Seat 12\n");
								};// end of if
								system("pause");
								break;

						case 'c':
							
							for(int y = 1; y <= 26; y++){
								int conflict = 0;
								if(tolower(*Seat1LN) == *(AlfPnt + y)){
									puts(Seat1.LastName);
									printf("***************");
									printf("Seat number %d\n", Seat1.Seat);
									
								}
								if(tolower(*Seat2LN) == *(AlfPnt + y)){
									puts(Seat2.LastName);
									printf("***************");
									printf("Seat number %d\n", Seat2.Seat);
									
								}
								if(tolower(*Seat3LN) == *(AlfPnt + y)){
									puts(Seat3.LastName);
									printf("***************");
									printf("Seat number %d\n", Seat3.Seat);
									
								}
								if(tolower(*Seat4LN) == *(AlfPnt + y)){
									puts(Seat4.LastName);
									printf("***************");
									printf("Seat number %d\n", Seat4.Seat);
									
								}
								if(tolower(*Seat5LN) == *(AlfPnt + y)){
									puts(Seat5.LastName);
									printf("***************");
									printf("Seat number %d\n", Seat5.Seat);
									
								}if(tolower(*Seat6LN) == *(AlfPnt + y)){
									puts(Seat6.LastName);
									printf("***************");
									printf("Seat number %d\n", Seat6.Seat);
									
								}if(tolower(*Seat7LN) == *(AlfPnt + y)){
									puts(Seat7.LastName);
									printf("***************");
									printf("Seat number %d\n", Seat7.Seat);
									
								}if(tolower(*Seat8LN) == *(AlfPnt + y)){
									puts(Seat8.LastName);
									printf("***************");
									printf("Seat number %d\n", Seat8.Seat);
									
								}if(tolower(*Seat9LN) == *(AlfPnt + y)){
									puts(Seat9.LastName);
									printf("***************");
									printf("Seat number %d\n", Seat9.Seat);
									
								}if(tolower(*Seat10LN) == *(AlfPnt + y)){
									puts(Seat10.LastName);
									printf("***************");
									printf("Seat number %d\n", Seat10.Seat);
									
								}if(tolower(*Seat11LN) == *(AlfPnt + y)){
									puts(Seat11.LastName);
									printf("***************");
									printf("Seat number %d\n", Seat11.Seat);
									
								}if(tolower(*Seat12LN) == *(AlfPnt + y)){
									puts(Seat12.LastName);
									printf("***************");
									printf("Seat number %d\n", Seat12.Seat);
									
								}
						
							}//end of for
							system("pause");
							break;

							case 'd':
								
								puts("Which Seat would you like to reserve? (1 - 12)");
								scanf("%d", &SeatRes);
								if(Seat1.Seat == SeatRes)
									AssignSeat(&Seat1);
								if(Seat2.Seat == SeatRes)
									AssignSeat(&Seat2);
								if(Seat3.Seat == SeatRes)
									AssignSeat(&Seat3);
								if(Seat4.Seat == SeatRes)
									AssignSeat(&Seat4);
								if(Seat5.Seat == SeatRes)
									AssignSeat(&Seat5);
								if(Seat6.Seat == SeatRes)
									AssignSeat(&Seat6);
								if(Seat7.Seat == SeatRes)
									AssignSeat(&Seat7);
								if(Seat8.Seat == SeatRes)
									AssignSeat(&Seat8);
								if(Seat9.Seat == SeatRes)
									AssignSeat(&Seat9);
								if(Seat10.Seat == SeatRes)
									AssignSeat(&Seat10);
								if(Seat11.Seat == SeatRes)
									AssignSeat(&Seat11);
								if(Seat12.Seat == SeatRes)
									AssignSeat(&Seat12);
								break;

								case 'e':
									puts("What seat would you like to turn available (1-12)");
									scanf("%d", &SeatRes);
									if(Seat1.Seat == SeatRes)
									DeleteSeat(&Seat1, 1);
									if(Seat2.Seat == SeatRes)
									DeleteSeat(&Seat2, 2);
									if(Seat3.Seat == SeatRes)
									DeleteSeat(&Seat3, 3);
									if(Seat4.Seat == SeatRes)
									DeleteSeat(&Seat4, 4);
									if(Seat5.Seat == SeatRes)
									DeleteSeat(&Seat5, 5);
									if(Seat6.Seat == SeatRes)
									DeleteSeat(&Seat6, 6);
									if(Seat7.Seat == SeatRes)
									DeleteSeat(&Seat7, 7);
									if(Seat8.Seat == SeatRes)
									DeleteSeat(&Seat8, 8);
									if(Seat9.Seat == SeatRes)
									DeleteSeat(&Seat9, 9);
									if(Seat10.Seat == SeatRes)
									DeleteSeat(&Seat10, 10);
									if(Seat11.Seat == SeatRes)
									DeleteSeat(&Seat11, 11);
									if(Seat12.Seat == SeatRes)
									DeleteSeat(&Seat12, 12);
								break;
									
								
						};//end of Switch
      printf("\n\n**________Colossua Airlines_________**\n");
	  fflush(stdin);

	}while(UserChoice != 'f');//end of do

	Flight_101_Manifest = fopen("L:\\Flight_101_Manifest.dat", "w+");
	if (Flight_101_Manifest == NULL){
		printf("Error cannot save to file! Contact you Administrator.\n");
		system("pause");
		return 0;}
		
	fprintf(Flight_101_Manifest, "%d\n", Seat1.Seat);
	fprintf(Flight_101_Manifest, "%c\n", Seat1.Assigned);
	fprintf(Flight_101_Manifest, "%d\n", Seat1.LastName);
	fprintf(Flight_101_Manifest, "%d\n", Seat1.FirstName);

	fprintf(Flight_101_Manifest, "%d\n", Seat2.Seat);
	fprintf(Flight_101_Manifest, "%c\n", Seat2.Assigned);
	fprintf(Flight_101_Manifest, "%d\n", Seat2.LastName);
	fprintf(Flight_101_Manifest, "%d\n", Seat2.FirstName);

	fprintf(Flight_101_Manifest, "%d\n", Seat3.Seat);
	fprintf(Flight_101_Manifest, "%c\n", Seat3.Assigned);
	fprintf(Flight_101_Manifest, "%d\n", Seat3.LastName);
	fprintf(Flight_101_Manifest, "%d\n", Seat3.FirstName);

	fprintf(Flight_101_Manifest, "%d\n", Seat4.Seat);
	fprintf(Flight_101_Manifest, "%c\n", Seat4.Assigned);
	fprintf(Flight_101_Manifest, "%d\n", Seat4.LastName);
	fprintf(Flight_101_Manifest, "%d\n", Seat4.FirstName);

	fprintf(Flight_101_Manifest, "%d\n", Seat5.Seat);
	fprintf(Flight_101_Manifest, "%c\n", Seat5.Assigned);
	fprintf(Flight_101_Manifest, "%d\n", Seat5.LastName);
	fprintf(Flight_101_Manifest, "%d\n", Seat5.FirstName);

	fprintf(Flight_101_Manifest, "%d\n", Seat6.Seat);
	fprintf(Flight_101_Manifest, "%c\n", Seat6.Assigned);
	fprintf(Flight_101_Manifest, "%d\n", Seat6.LastName);
	fprintf(Flight_101_Manifest, "%d\n", Seat6.FirstName);

	fprintf(Flight_101_Manifest, "%d\n", Seat7.Seat);
	fprintf(Flight_101_Manifest, "%c\n", Seat7.Assigned);
	fprintf(Flight_101_Manifest, "%d\n", Seat7.LastName);
	fprintf(Flight_101_Manifest, "%d\n", Seat7.FirstName);

	fprintf(Flight_101_Manifest, "%d\n", Seat8.Seat);
	fprintf(Flight_101_Manifest, "%c\n", Seat8.Assigned);
	fprintf(Flight_101_Manifest, "%d\n", Seat8.LastName);
	fprintf(Flight_101_Manifest, "%d\n", Seat8.FirstName);

	fprintf(Flight_101_Manifest, "%d\n", Seat9.Seat);
	fprintf(Flight_101_Manifest, "%c\n", Seat9.Assigned);
	fprintf(Flight_101_Manifest, "%d\n", Seat9.LastName);
	fprintf(Flight_101_Manifest, "%d\n", Seat9.FirstName);

	fprintf(Flight_101_Manifest, "%d\n", Seat10.Seat);
	fprintf(Flight_101_Manifest, "%c\n", Seat10.Assigned);
	fprintf(Flight_101_Manifest, "%d\n", Seat10.LastName);
	fprintf(Flight_101_Manifest, "%d\n", Seat10.FirstName);

	fprintf(Flight_101_Manifest, "%d\n", Seat11.Seat);
	fprintf(Flight_101_Manifest, "%c\n", Seat11.Assigned);
	fprintf(Flight_101_Manifest, "%d\n", Seat11.LastName);
	fprintf(Flight_101_Manifest, "%d\n", Seat11.FirstName);

	fprintf(Flight_101_Manifest, "%d\n", Seat12.Seat);
	fprintf(Flight_101_Manifest, "%c\n", Seat12.Assigned);
	fprintf(Flight_101_Manifest, "%d\n", Seat12.LastName);
	fprintf(Flight_101_Manifest, "%d\n", Seat12.FirstName);

	fclose(Flight_101_Manifest);
	return 0;
}

void AssignSeat(struct PassangerResv *edit){
	char b;

	puts("Do you wish to continue ... (y/n)..");
	fflush(stdin);
	scanf("%c", &b);
	if(b == 'n'){ 
				}
	else{
		char a[20];
		puts("Please enter First Name");
		scanf("%s", &a);
		strcpy(edit->FirstName, a); 
		puts("Please enter Last Name");
		scanf("%s", &a);
		strcpy(edit->LastName, a);
		edit->Assigned = 'y';
	}//end of if
}

void DeleteSeat(struct PassangerResv *edit, int seatnumber){
	char b;
	puts("Do you wish to continue ... (y/n)..");
	fflush(stdin);
	scanf("%c", &b);
	if(b == 'n'){ }
	else {
	edit->Seat = seatnumber;
	strcpy(edit->FirstName, "Open");
	strcpy(edit->LastName, "Open");
	edit->Assigned = 'n';
	}
	printf("Seat %d is now open for reservations.", seatnumber);
	system("pause");

}

