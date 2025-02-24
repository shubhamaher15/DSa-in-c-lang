/*2) Write a C program to accept and sort n elements in ascending order by using insertion sort.*/ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define l 6

void display(char array[][30])
{
	int i;
for( i=0;i<l;i++)
{
printf("%s ", array[i]);
}
printf("\n");
printf("\n");
}

int main()
{

char array[l][30];
int i,j;

printf("Enter %d Strings: \n", l);
for(i = 0; i < l; i++)
{
scanf("%s", array[i]);
}

printf("Original array: ");
display(array);

char temp[30];

for(i = 0; i < l; i++)
{
for( j = 0; j < i; j++)
{
if (strcmp(array[j], array[j + 1]) > 0)
{

strcpy(temp, array[j]);
strcpy(array[j], array[j + 1]);
strcpy(array[j + 1], temp);
}
}
}

printf("Sorted Array: ");
display(array);
}

