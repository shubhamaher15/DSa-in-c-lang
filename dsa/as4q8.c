//2) Write a C program to read the data from file 'student.txt' containing names of 10 students
//and their roll no. Accept a name of the student from user and use Binary search algorithm 
//to check whether the name is present in the file and output the roll no, otherwise output 
//“Student name not in the list”.

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
typedef struct student
{
 char name[20];
 int roll_no;
} student;
void bubble_sort(student a[], int n)
{
 student temp;
 int i, pass;
 for (pass = 1; pass < n; pass++)
 {
 for (i = 0; i < n - pass; i++)
 {
 if (strcmp(a[i].name, a[i + 1].name) > 0)
 {
 temp = a[i];
 a[i] = a[i + 1];
 a[i + 1] = temp;
 }
 }
 }
}
void binary_search(student a[], int first, int last, char key[])
{
 int mid, flag = 0;
 while (first <= last)
 {
 mid = (first + last) / 2;
 if (strcmp(a[mid].name, key) == 0)
 {
 flag = 1;
 printf("\n The student %s are founded at %d position.", key, mid);
 printf("\n Roll no.:%d", a[mid].roll_no);
 printf("\n Student name:%s", a[mid].name);
 break;
 }
 if (strcmp(a[mid].name, key) > 0)
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
 printf("\n The student name not in the list! ");
 }
}
int main()
{
 student s1[10];
 int n = 0, i;
 char key[20];
 FILE *ptr;
 ptr = fopen("student11.txt", "r");
 if (ptr == NULL)
 {
 printf("\n The file does not exist!");
 exit(0);
 }
 i = 0;
 while (!feof(ptr))
 {
 fscanf(ptr, "%s%d", &s1[i].name, &s1[i].roll_no);
 i++;
 n++;
 }
 bubble_sort(s1, n);
 printf("\n Enter student name for search:");
 scanf("%s", &key);
 binary_search(s1, 0, n - 1, key);
 fclose(ptr);
}
