//1) Write a C program to create a string array with day of week and sort them using Insertion  
#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
#define l 7 
void display(char a[][20],int i) 
{ 
   for (i = 0; i < l; i++)
   { 
      printf("\t%s", a[i]); 
   }
printf("\n"); 
}
int main() 
{ 
    char a[l][20] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"}; 
    char temp[20]; 
    int i, j; 
    printf("\n the original input array is:"); 
    display(a);
 
    for (i = 1; i < l; i++) 
    { 
        strcpy(temp, a[i]); 
        for (j = i - 1; j >= 0 && strcmp(a[j], temp) > 0; j--) 
        { 
            { 
                strcpy(a[j + 1], a[j]); 
            } 
        } 
        strcpy(a[j + 1], temp); 
    } 
 
    printf("\n the sorted array is:"); 
    display(a);
} 
