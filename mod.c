#include "vp.h"
void modify(struct contact list[], int*i)
{
	char last[15];
	printf("\n Enter the last name of the contact to be updated. \n");
	scanf("%s", last);

	int k = 0;
	while (k < *i)
	{
		if (strcmp(last, list[k].lName) == 0)
		{
			printf("Enter the new number for %s %s. \n", list[k].fName, list[k].lName);
			scanf("%s", list[k].phNum);
			return;
		}
		k++;
	}
}
