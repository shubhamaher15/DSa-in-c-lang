//3) Read the data from file ‘sortedcities.txt’ containing sorted names of n cities and their STD 
//codes. Accept a name of the city from user and use linear search algorithm to check 
//whether the name is present in the file and output the STD code, otherwise output “city not 
//in the list”.

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
typedef struct cities
{
 char name[20];
 int code;
}city;
int main(){
 city c[10];
 int n,i,flag=0;
 char key[10];
 FILE *ptr;
 ptr=fopen("sorted_cities.txt","r");
 if (ptr==NULL)
 {
 printf("\n The file are empty!");
 exit(0);
 }
 n=1;
 i=0;
 while (!feof(ptr))
 {
 fscanf(ptr,"%s%d",&c[i].name,&c[i].code);
 i++;
 n++;
 }
 printf("\n Enter searching city name:");
 scanf("%s",&key);
 for ( i = 0; i < n; i++)
 {
 if (strcmp(c[i].name,key)==0)
 {
 flag=1;
 printf("\n The city name %s are founded at %d position in file.",key,i);
 printf("\n City name:%s",c[i].name);
 printf("\n City STD code:%d",c[i].code);
 break;
 }
 
 }
 if (flag==0)
 {
 printf("\n The city are not exist in array!");
 } 
}
