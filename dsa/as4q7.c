//set:c
//1) Write a C program to read the data from file 'cities.txt' containing names of 10 cities and 
//their STD codes. Accept a name of the city from user and use Binary search algorithm to 
//check whether the name is present in the file and output the STD code, otherwise output 
//“city not in the list”.

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
typedef struct cities
{
 char name[20];
 int code;
} city;
void bubble_sort(city c[], int n)
{
 city temp;
 int pass, i;
 for (pass = 1; pass < n; pass++)
 {
 for (i = 0; i < n - pass; i++)
 {
 if (strcmp(c[i].name, c[i + 1].name) > 0)
 {
 temp = c[i];
 c[i] = c[i + 1];
 c[i + 1] = temp;
 }
 }
 }
}
void binary_search(city c[], int first, int last, char key[])
{
 int mid;
 int flag = 0;
 while (first <= last)
 {
 mid = (first + last) / 2;
 if (strcmp(c[mid].name, key) == 0)
 {
 flag = 1;
 printf("\n The %s city are founded at %d location.", key, mid);
 printf("\n City name:%s", c[mid].name);
 printf("\n City code:%d", c[mid].code);
 break;
 }
 if (strcmp(c[mid].name, key) > 0)
 {
 last = mid - 1;
 }
 else
 {
 first = mid + 1;
 }
 }
 if (flag == 0)
 {
 printf("\n city not in the list!");
 }
}
int main()
{
 city c[10];
 int i, n = 0;
 char key[20];
 FILE *ptr;
 ptr = fopen("cities.txt", "r");
 if (ptr == NULL)
 {
 printf("\n The file are not exist!");
 exit(0);
 }
 i = 0;
 while (!feof(ptr))
 {
 fscanf(ptr, "%s%d", &c[i].name, &c[i].code);
 i++;
 n++;
 }
 bubble_sort(c, n);
 printf("\n Enter search value:");
 scanf("%s", &key);
 binary_search(c, 0, n, key);
 ptr = fopen("cities.txt", "a");
 fprintf(ptr, "\n The sorted file is:");
 for (i = 0; i < n; i++)
 {
 fprintf(ptr, "\n%s %d", c[i].name, c[i].code);
 }
 fclose(ptr);
}
