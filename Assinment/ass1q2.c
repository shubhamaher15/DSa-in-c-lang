/*2) Write a C program to accept n elements, store those elements in array and store the square  
of these numbers in another array and display both the array*/
#include<stdio.h> 
#include<conio.h> 
int main(){ 
    int a[10],i,n; 
    int b[10]; 
    printf("\n enter array limit:"); 
    scanf("%d",&n); 
    printf("\n enter array elements:"); 
    for ( i = 0; i < n; i++) 
    { 
        scanf("%d",&a[i]); 
    } 
 
    for ( i = 0; i < n; i++) 
    { 
        b[i] = a[i]*a[i]; 
    } 
     
  printf("\n the user array:"); 
  for ( i = 0; i < n; i++) 
  { 
    printf("\t %d",a[i]); 
  } 
  printf("\n the square of previous array:"); 
  for ( i = 0; i < n; i++) 
  { 
    printf("\t %d",b[i]); 
  }     
}
