/*3) Write a C program to Copy one array into another array.*/
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
        b[i]=a[i]; 
    } 
 
    printf("\n the previous array:"); 
    for ( i = 0; i < n; i++) 
    { 
        printf("\t%d",a[i]); 
    } 
    printf("\n the copied array:"); 
    for ( i = 0; i < n; i++) 
    { 
        printf("\t%d",b[i]); 
    }   
}
