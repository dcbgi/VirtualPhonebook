#include "vp.h"
void sort(struct contact list[], int*i)
{
	struct contact temp;

	for (int z = 0; z < *i; z++)
	{
		for (int j = 0; j < *i - 1; j++)
		{
			if (strcmp(list[j].lName,list[j + 1].lName) > 0)
			{
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}

}
