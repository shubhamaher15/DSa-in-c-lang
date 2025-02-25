//SET B:
//1) Write a ‘C’ program to accept the names of cities and store them in array. Accept the city 
//name from user and use linear search algorithm to check whether the city is present in array 
//or not. 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main(){
 char city[10][20],key[10];
 int n,i,flag=0;
 printf("\n Enter how many cities want to store in array:");
 scanf("%d",&n);
 printf("\n Enter city name:");
 for ( i = 0; i < n; i++)
 {
 printf("\n Enter [%d] index city:",i);
 scanf("%s",&city[i]);
 }
 printf("\n Enter city name for searching:");
 scanf("%s",&key);
 
 for ( i = 0; i < n; i++)
 {
 if (strcmp(city[i],key)==0)
 {
 flag=1;
 printf("\n The %s city are founded at %d index of an array.",key,i);
 break;
 }
 
 }
 if (flag==0)
 {
 printf("\n The city %s are not exist in array!");
 }
 
}
