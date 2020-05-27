#include "vp.h"

int menu();
/*
void enterNew(struct contact list[], int *);
void search(struct contact list[], int *);
void modify(struct contact list[], int *);
void deleteCon(struct contact list[], int *);
void print(struct contact list[], int *);
void dosort(struct contact list[], int *);
*/
int main()
{
    struct contact myList[20];
    int i = 0;
    int *p = &i;
    int choice = menu();

       while (choice != 6)
	{
		switch (choice)
		{
		case 1: enterNew(myList,p); break;
		case 2: search(myList,p); break;
		case 3: deleteCon(myList,p); break;
		case 4: modify(myList,p); break;
		case 5: print(myList,p); break;
		case 6: return 0;
		default:
			{
			printf("Invalid Input");
			break;
			}
		}

		choice = menu();
	}

	return 0;
}

int menu()
{
	int c;

	printf("\n\t   Menu: \n");
	printf("1: Enter a new contact.\n");
	printf("2: Find phone number using last name.\n");
	printf("3: Delete a contact.\n");
	printf("4: Update a contact's phone number\n");
	printf("5: Print all contacts sorted.\n");
	printf("6: Exit the program\n");

	scanf("%d", &c);

	return c;  
}
