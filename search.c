#include "vp.h"
void search(struct contact list[], int*i)
{
    char hold[20];
    printf("\n Please enter the last name of the person you are searching for. \n");
    scanf("%s", hold);

    for(int k = 0; k < *i; k++)
         if( strcmp(hold, list[k].lName) == 0)
            printf("Their number is: %s", list[k].phNum);
}
