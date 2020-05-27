#include "vp.h"

void print(struct contact list[], int*i)
{
  sort(list, i);

	for (int p = 0; p < *i; p++)
	{
		printf("Name: %s ", (list[p].fName));
		printf("%s \n", (list[p].lName));
		printf("Number: %s\n\n", (list[p].phNum));
	}

}
