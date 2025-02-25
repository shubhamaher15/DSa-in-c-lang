//3) Modify the Merge sort program of Set B to sort the integers in descending order? 
#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
void display(int a[], int n) 
{ 
  int i; 
for (i = 0; i < n; i++) 
{
  printf("\t%d", a[i]);  
} 
}

void merging(int a[], int first, int mid, int last) 
{ 
int b[20], i, j, k; 
    i = first; 
    j = mid + 1; 
    k = 0; 
    while (i <= mid && j <= last) 
    { 
        if (a[i] < a[j]) 
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
 
    for (j = first, k = 0; j <= last; k++, j++) 
    { 
        a[j] = b[k]; 
    } 
} 
void merge_sort(int a[], int first, int last) 
{ 
    int mid; 
    if (first < last) 
    { 
        mid = (first + last) / 2; 
        merge_sort(a, first, mid); 
        merge_sort(a, mid + 1, last); 
        merging(a, first, mid, last); 
    } 
} 
int main() 
{ 
    int a[20], i, n; 
    printf("\n Enter array limit:"); 
    scanf("%d", &n); 
    printf("\n Enter array elements:"); 
    for (i = 0; i < n; i++) 
    { 
        printf("\n Enter [%d] index element:", i); 
        scanf("%d", &a[i]); 
    } 
    printf("\n The unsorted array is:"); 
    display(a, n); 
    merge_sort(a, 0, n - 1); 
    printf("\nThe sorted array is:"); 
    display(a, n); 
} 
