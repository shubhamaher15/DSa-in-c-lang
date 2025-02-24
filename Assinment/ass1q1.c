/*1) Write a C Program to Count number of occurrences (or frequency) in a given sorted array 
Input: arr[] = {1, 1, 2, 2, 2, 2, 3,}, x = 2 
Output: 4 // x (or 2) occurs 4 times in arr[]. */

#include<stdio.h> 
#include<conio.h> 
int main(){ 
    int a[10],i,n; 
    int o,count=0; 
    printf("\n enter a limit:"); 
    scanf("%d",&n); 
    printf("\n enter sorted array elements:"); 
    for ( i = 0; i < n; i++) 
    { 
        scanf("%d",&a[i]); 
    } 
    printf("\n enter number for finding occurances:"); 
    scanf("%d",&o); 
    for ( i = 0; i < n; i++) 
    { 
        if (a[i]==o) 
        { 
            count++; 
        } 
         
    } 
    printf("\n the number %d is counted up to %d times in given array.",o,count);     
}
