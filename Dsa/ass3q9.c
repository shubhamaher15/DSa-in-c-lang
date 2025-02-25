//3) Read the data from the file student.txt and sort on names in alphabetical order (use strcmp)  
//using Merge sort / Quick sort. Write the sorted data to another file 'sortstudentname.txt'. 
#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
#include <stdlib.h> 
int partition(char a[][30], int first, int last) 
{ 
    char pivot[20]; 
    char temp[20]; 
    int i, j; 
    strcpy(pivot, a[first]); 
    i = first + 1; 
    j = last; 
 
    do 
    { 
        while (strcmp(pivot, a[i]) > 0 && i <= last) 
        { 
            i++; 
        } 
        while (strcmp(pivot, a[j]) < 0 && j > 0) 
        { 
            j--; 
        } 
 
        if (i < j) 
        { 
            strcpy(temp, a[i]); 
            strcpy(a[i], a[j]); 
            strcpy(a[j], temp); 
        } 
    } while (i < j); 
 
    strcpy(a[first], a[j]); 
    strcpy(a[j], pivot); 
    return j; 
} 
void quick_sort(char a[][30], int first, int last) 
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
    char name[10][30]; 
    FILE *ptr; 
    int i, n = 0; 
    ptr = fopen("student.txt", "r"); 
    if (ptr == NULL) 
    { 
        printf("\n File are not exist!"); 
        exit(0); 
    } 
    i = 0; 
    while (!feof(ptr)) 
    { 
        fscanf(ptr, "%s", &name[i]); 
        printf("\n%s", name[i]); 
        i++; 
        n++; 
    } 
quick_sort(name, 0, n - 1); 
printf("\n The sorted data is:\n"); 
for (i = 0; i < n; i++) 
{ 
} 
printf("\t%s", name[i]); 
fclose(ptr); 
ptr = fopen("sort_student_name.txt", "w"); 
fprintf(ptr, "\t The sorted data is:\t"); 
for (i = 0; i < n; i++) 
{ 
} 
fprintf(ptr, "\t%s", name[i]); 
fclose(ptr); 
}
