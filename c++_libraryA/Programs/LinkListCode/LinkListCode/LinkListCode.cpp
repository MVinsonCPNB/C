// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "memory.h"

         
typedef int list_data; 
                                  
void list_init();  
/* Initializes this list. Call first before calling anything. */ 
void list_clear();  
void display_list();
/* Clears the list of all entries. */ 
int list_empty();  
/* Returns 1 if the list is empty, 0 otherwise. */ 
void listadd(list_data d);
/* Add the value d onto the list. */ 
void list_remove(list_data find);  
/* Find an element to remove from the list */

/* List Library - Linked list for a list of integers */ 
                                  
struct list_rec  
        {    
        list_data data;    
        struct list_rec *next;  
        }; 
                                  
struct list_rec *head=NULL; 
                                  
void list_init()  
        /* Call before calling anything else. */  
    {    
    head=NULL;  
    head=(struct list_rec *)malloc(sizeof(struct list_rec));
    head->next = NULL;
    } 
                                                                    
int list_empty()  
        /* Returns 1 if the stack is empty, 0 otherwise. */  
    {    
    if (head==NULL)      
        return(1);   
    else      
        return(0);  
        } 
                                  
void listadd(list_data d)  
        /* Add the value d onto the list. */  
    {   
    struct list_rec *temp; 
    temp=(struct list_rec *)malloc(sizeof(struct list_rec)); 
    temp->data=d;
    temp->next=head;    
    head=temp;  
    }
                
void list_remove(list_data find)
/* Remove an element of the list and removes that element.
Returns garbage if the list is empty. */   
        {    
    struct list_rec *temp,*seek,*other;    
    if (head!=NULL)    
        {
        seek=head;
        while ((seek->data != find) && (seek != NULL))
                {
                temp = seek;
                seek=seek->next;
		}
	    if (seek != NULL)
		{
		if (seek->next == NULL)
			{
			free(seek);
			temp->next = NULL;
			}
		else if (seek == head)
			{
			head = seek->next;
			free(seek);
			}
		else
			{
			other = seek->next;
			temp->next = other;
			free(seek);
			}
		}
	    }
	}

void display_list()
/* List Link. */
	{
    struct list_rec *seek;

    seek = head;
    while (seek->next != NULL)
	{
	printf("%d\n", seek->data);
	    seek=seek->next;
	    }
	}

int _tmain(int argc, _TCHAR* argv[])
{
    int choice = 1;
	int value;

	list_init();
	while (choice != 0)
		{
		printf("1 - add to list; 2 - remove item; 3 - list elements; 0 - quit\n");
		scanf("%d", &choice);

		if (choice == 1)
			{
			printf("Enter a value\n");
                        scanf("%d", &value);
                        listadd(value);
                        }
                else if (choice == 2)
                        {
                        printf("Enter a value to remove from list\n");
                        scanf("%d", &value);
                        list_remove(value);
                        }
                else if (choice == 3)
                        {
                        printf("List\n");
                        display_list();
                        }
                }
        printf("Goodbye...\n");
		system("pause");
			return 0;
        }

