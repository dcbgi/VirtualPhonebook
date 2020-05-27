#include "vp.h"

void deleteCon(struct contact list[], int*i)
{
    char hold[10];
    printf("\n Please enter the phone number of the person you want to delete \n");
    scanf("%s", hold);

    for(int j = 0; j <= *i; j++)
    {
         if( strcmp(hold, list[j].phNum) == 0)
         {
            for(int k = j; k < 20; k++)
            {
                strcpy( list[k].fName,  list[k+1].fName);
                strcpy( list[k].lName,  list[k+1].lName);
                strcpy( list[k].phNum,  list[k+1].phNum);
            }
         }
    }

    (*i)--;
}
