/*1) Write a ‘C’ program to accept two polynomials and find the Multiplication of accepted  
polynomials. */

#include<stdio.h> 
#include <conio.h> 
int main() 
{ 
    int a[10], b[10], n1; 
    int k[20], p, c; 
    int i; 
    printf("\n Enter  polynomial's limit:"); 
    scanf("%d", &n1); 
    printf("\n Enter first polynomial elements:"); 
    for (i = 0; i < n1; i++) 
    { 
        printf("\nEnter coefficient and power under [%d]:", n1); 
        scanf("%d%d", &c, &p); 
        a[p] = c; 
    } 
    printf("\n Enter second polynomial elements:"); 
    for (i = 0; i < n1; i++) 
    { 
        printf("\nEnter coefficient and power under [%d]:", n1); 
        scanf("%d%d", &c, &p); 
        b[p] = c; 
    } 
 
    for (i = 0; i < n1; i++) 
    { 
        k[i] = a[i] * b[i]; 
    } 
 
    printf("\n The multiplication of two polynomial :"); 
    for (i = n1 - 1; i >= 0; i--) 
    { 
        if (i == 0) 
        { 
            printf("%d", k[i]); 
        } 
        else 
        { 
            printf("%dx^%d+", k[i], i); 
        } 
    } 
}
