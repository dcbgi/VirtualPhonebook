#include "vp.h"
void enterNew(struct contact list[], int *i)
{
    printf("Please enter in the new contact \n");
   
    printf("What is their first name? \n");
    scanf("%s", (list[*i].fName));

    printf("What is their last name? \n");
    scanf("%s", (list[*i].lName));

    printf("What is their phone number \n");
    scanf("%s", (list[*i].phNum));

    printf("\nYou entered: \n %s %s \n %s", list[*i].fName, list[*i].lName, list[*i].phNum);

    (*i)++;
	
	return;
}
