//3) Write a C program to accept and sort n elements in ascending order by using bubble sort  
//and also count the number of swaps. Display the sorted list and total no of swap count. //
#include <stdio.h> 
#include <conio.h> 
int main() 
{ 
    int a[10], i, n; 
    int pass, temp, count = 0; 
    printf("\n enter array limit:"); 
    scanf("%d", &n); 
    printf("\n enter array elements:"); 
    for (i = 0; i < n; i++) 
    { 
        scanf("%d", &a[i]); 
    } 
 
    for (pass = 1; pass < n ; pass++) 
    { 
        for (i = 0; i < n - pass; i++) 
        { 
            if (a[i] > a[i + 1]) 
            { 
                temp = a[i]; 
                a[i] = a[i + 1]; 
                a[i + 1] = temp; 
                count++; 
            } 
        } 
    } 
 
    printf("\n the sorted array is:"); 
    for (i = 0; i < n; i++) 
    { 
        printf("\t%d", a[i]); 
    } 
    printf("\n the no.of swaps are %d", count); 
}
