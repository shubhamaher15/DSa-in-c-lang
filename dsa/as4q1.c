//1) Write a C program to accept n elements from user store it in an array. Accept a value from 
//the user and use linear/Sequential search method to check whether the value is present in 
//array or not. Display proper message.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
  {
     int a[20], i, n, key,flag=0;
     printf("\n Enter size of an array:");
     scanf("%d", &n);
     printf("\n Enter array elements:");
     for (i = 0; i < n; i++)
 	  {
 		printf("\n Enter [%d] index element:",i);
 		scanf("%d", &a[i]);
 	  }
 		printf("\n Enter search value:");
 		scanf("%d", &key);
 		for (i = 0; i < n; i++)
 		{
 		   if (a[i]==key)
 			{
  				flag=1;
 				printf("\n The element %d are founded at %d position of array.",key,i);
 				break;
 			}
 		}
 		if (flag==0)
 		{
 		  printf("\n The element are not exist in array.");
 		}
 
}
