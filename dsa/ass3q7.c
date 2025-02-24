//1) Write a C program to read the data from the file “person.txt” which contains personno,  
//name and personage and sort the data on age in ascending order using merge Sort. 
#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
#include <stdlib.h> 
typedef struct person 
{ 
    int p_no; 
    char name[20]; 
    int age; 
} person; 
 
void merge(person a[], int first, int mid, int last) 
{ 
    person b[10]; 
    int i, j, k; 
    i = first; 
    j = mid + 1; 
    k = 0; 
    while (i <= mid && j <= last) 
    { 
 
        if (a[i].age > a[j].age) 
        { 
            b[k++] = a[j++]; 
        } 
        else 
        { 
            b[k++] = a[i++]; 
        } 
    } 
    while (i <= mid) 
    { 
        b[k++] = a[i++]; 
    } 
    while (j <= last) 
    { 
        b[k++] = a[j++]; 
    } 
 
    for (j = first, k = 0; j <= last; j++, k++) 
    { 
        a[j] = b[k]; 
    } 
} 
void merge_sort(person a[], int first, int last) 
{ 
    int mid; 
    if (first < last) 
    { 
        mid = (first + last) / 2; 
        merge_sort(a, first, mid); 
        merge_sort(a, mid + 1, last); 
        merge(a, first, mid, last); 
    } 
} 
 
int main() 
{ 
    struct person p[10]; 
    FILE *ptr; 
    int i, n; 
    ptr = fopen("person.txt", "r"); 
    if (ptr == NULL) 
    { 
        printf("\n File are not exist!"); 
        exit(0); 
    } 
    printf("\n The original data:\n"); 
    for (i = 0; !feof(ptr); i++) 
    { 
        fscanf(ptr, "%d%s%d", &p[i].p_no, &p[i].name, &p[i].age); 
        printf("\n%d   %s   %d", p[i].p_no, p[i].name, p[i].age); 
    } 
    n = i; 
    merge_sort(p, 0, n - 1); 
 
    printf("\n The sorted data is:\n"); 
    for (i = 0; i < n; i++) 
    { 
        printf("\n%d   %s   %d", p[i].p_no, p[i].name, p[i].age); 
    } 
    ptr = fopen("person.txt", "a"); 
    fprintf(ptr, "\n the sorted data is:\n"); 
    for (i = 0; i < n; i++) 
    { 
        fprintf(ptr, "\n%d    %s    %d", p[i].p_no, p[i].name, p[i].age); 
    } 
    fclose(ptr); 
} 
 
