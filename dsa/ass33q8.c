//2) Write a C program to read the data from the file “student.txt” which contains rollno, name  
//and age and sort the data on age in ascending order using quick Sort.  
#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 
#include <string.h> 
typedef struct student 
{ 
int r_no; 
char name[30]; 
int age; 
} student; 
int partition(student a[], int first, int last) 
{ 
student pivot; 
student swap; 
pivot = a[first]; 
int i, j; 
    i = first + 1; 
    j = last; 
 
    do 
    { 
        while (a[i].age < pivot.age && i <= last) 
        { 
            i++; 
        } 
        while (a[j].age > pivot.age && j > first) 
        { 
            j--; 
        } 
 
        if (i < j) 
        { 
            swap = a[i]; 
            a[i] = a[j]; 
            a[j] = swap; 
        } 
    } while (i < j); 
 
    a[first] = a[j]; 
    a[j] = pivot; 
 
    return j; 
} 
void quick_sort(student a[], int first, int last) 
{ 
    int j; 
    if (first <= last) 
    { 
        j = partition(a, first, last); 
        quick_sort(a, first, j - 1); 
        quick_sort(a, j + 1, last); 
    } 
} 
int main() 
{ 
    student s[10]; 
    FILE *ptr; 
    int i, n = 0; 
    ptr = fopen("student11.txt", "r"); 
    if (ptr == NULL) 
    { 
        printf("\n The file does not exist!"); 
        exit(0); 
    } 
    i = 0; 
    while (!feof(ptr)) 
    { 
        fscanf(ptr, "%d%s%d", &s[i].r_no, &s[i].name, &s[i].age); 
        i++; 
        n++; 
    } 
 
    printf("\n The un-sorted data is:\n"); 
    for (i = 0; i < n; i++) 
    { 
        printf("\n%d   %s   %d", s[i].r_no, s[i].name, s[i].age); 
    } 
 
quick_sort(s, 0, n - 1); 
printf("\n The sorted data is:\n"); 
for (i = 0; i < n; i++) 
{ 
} 
printf("\n%d   %s   %d", s[i].r_no, s[i].name, s[i].age); 
ptr = fopen("student1.txt", "a"); 
fprintf(ptr, "\n The sorted data is:\n"); 
for (i = 0; i <= n - 1; i++) 
{ 
} 
fprintf(ptr, "\n%d    %s   %d", s[i].r_no, s[i].name, s[i].age); 
fclose(ptr); 
}
