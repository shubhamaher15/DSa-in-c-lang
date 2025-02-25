//3) Modify the Quick sort program of SET A to sort the integers in descending order? 
 
#include <stdio.h> 
#include <conio.h> 
void display(int a[100], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
    { 
        printf("\t%d", a[i]); 
    } 
} 
int partition(int a[], int first, int last) 
{ 
    int pivot, temp; 
    pivot = a[first]; 
    int i, j; 
    i = first + 1; 
    j = last; 
    do 
    { 
        while (a[i] > pivot && i <= last) 
        { 
            i++; 
        } 
        while (a[j] < pivot && j > first) 
        { 
            j--; 
        } 
        if (i < j) 
        { 
            temp = a[i]; 
            a[i] = a[j]; 
            a[j] = temp; 
        } 
    } while (i < j); 
 
    a[first] = a[j]; 
    a[j] = pivot; 
    return j; 
} 
void quick_sort(int a[], int first, int last) 
{ 
    int j; 
    if (first < last) 
    { 
        j = partition(a, first, last); 
        quick_sort(a, first, j - 1); 
        quick_sort(a, j + 1, last); 
    } 
} 
int main() 
{ 
    int a[100], i, n; 
    printf("\n Enter array limit:"); 
scanf("%d", &n); 
printf("\n Enter array elements:"); 
for (i = 0; i < n; i++) 
{ 
} 
printf("\n Enter [%d] index element:", i); 
scanf("%d", &a[i]); 
printf("\n The original array is:",&n); 
display(a,n); 
quick_sort(a, 0, n - 1); 
printf("\n The sorted elements are:"); 
display(a,n); 
} 
