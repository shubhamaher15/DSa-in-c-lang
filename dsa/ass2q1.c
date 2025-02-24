/*1) Write a C program to accept and sort n elements in ascending order by using bubble sort.*/
#include <stdio.h> 
#include <conio.h> 
int main() 
{ 
int a[10], n, i; 
int pass, temp; 
printf("\n enter a limit:"); 
scanf("%d", &n); 
    printf("\n enter array elements:"); 
    for (i = 0; i < n; i++) 
    { 
        scanf("%d", &a[i]); 
    } 
 
    for (pass = 1; pass < n - 1; pass++) 
    { 
        for (i = 0; i < n - pass; i++) 
        { 
            if (a[i] > a[i + 1]) 
            { 
                temp = a[i]; 
                a[i] = a[i + 1]; 
                a[i + 1] = temp; 
            } 
        } 
    } 
    printf("\n the sorted array is:"); 
    for ( i = 0; i < n; i++) 
    { 
        printf("\t%d",a[i]); 
    } 
     
} 
