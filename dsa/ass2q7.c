//1) Write a C program to read the data from the file “employee.txt” which contains empno and  
 //empname and sort the data on names alphabetically (use strcmp) using Bubble Sort. 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void display(char e_name[][30], int size)
{
	int i;
for( i = 0; i < size; i++)
{
printf("\n%d:%s", i, e_name[i]);
}
}
void bubble_sort(char e_name[][30], int size)
{
char temp[30];
int pass, i;
for (pass = 1; pass < size - 1; pass++)
{
for (i = 0; i < size - pass; i++)
{
if (strcmp(e_name[i], e_name[i + 1]) > 0)
{
strcpy(temp, e_name[i]);
strcpy(e_name[i], e_name[i + 1]);
strcpy(e_name[i + 1], temp);
}
}
}
}

int main()
{
FILE *ptr;
int size;
char e_name[10][30];
int e_no[30];
int i;
ptr = fopen("emp1.txt", "r");
if (ptr == NULL)
{
printf("\n the file does not exist!");
exit(0);
}
i = 0;
while (!feof(ptr))
{
fscanf(ptr, "%d%s", &e_no[i], &e_name[i]);
i++;
}
size = i;
bubble_sort(e_name, size);
printf("\n The sorted elements:");
display(e_name, size);
ptr = fopen("emp.txt", "a");
fprintf(ptr, "\n The sorted file is:\n");
for (i = 0; i < size; i++)
{
fprintf(ptr, "\n%d %s", i, e_name[i]);
}
fclose(ptr);
}

