//2) Write a C program to create a string array with atlaest 5 elements which contains word 
//ending with ‘at’ and ‘an’ sound and sort them using Merge sort.
#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
void display(char a[][30], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
    { 
        printf("\t%s", a[i]); 
    } 
} 
void merge(char a[][30], int first, int mid, int last) 
{ 
    int i, j, k; 
    char b[10][30]; 
    i = first; 
    j = mid + 1; 
    k = 0; 
 
    while ((i <= mid) && (j <= last)) 
    { 
        if (strcmp(a[j], a[i]) > 0) 
        { 
            strcpy(b[k++], a[i++]); 
        } 
        else 
        { 
            strcpy(b[k++], a[j++]); 
        } 
    } 
    while (i <= mid) 
    { 
        strcpy(b[k++], a[i++]); 
    } 
    while (j <= last) 
    { 
        strcpy(b[k++], a[j++]); 
    } 
 
    for (j = first, k = 0; j <= last; j++, k++) 
    { 
        strcpy(a[j], b[k]); 
    } 
} 
void merge_sort(char a[][30], int first, int last) 
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
    int i, n; 
    printf("\n how many string you want to store:"); 
    scanf("%d", &n); 
char a[n][30]; 
printf("\n Enter array elements in string format:"); 
for (i = 0; i < n; i++) 
{ 
  printf("\nEnter [%d] index string:", i); 
scanf("%s", &a[i]);
}  
printf("\n The unsorted array is:"); 
display(a, n); 
merge_sort(a, 0, n - 1); 
printf("\nThe sorted string array is:"); 
display(a, n); 
}
