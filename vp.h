#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct contact
{
  char fName[20];
  char lName[20];
  char phNum[11];
};
void sort(struct contact list[], int *);
void enterNew(struct contact list[], int *);
void search(struct contact list[], int *);
void modify(struct contact list[], int *);
void deleteCon(struct contact list[], int *);
void print(struct contact list[], int *);

