//2) Write a C program to read the data from the file “person.txt” which contains personno and  
 //personage and sort the data on age in ascending order using insertion Sort / Selection Sort. 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void insertion_sort(int a[],int n){
int temp,j,i;
for ( i = 0; i < n; i++)
{
temp=a[i];
for ( j = i-1; j>=0&&temp<a[j]; j--)
{
a[j+1]=a[j];
}
a[j+1]=temp;
}

}
void display(int a[],int n){
	int i;
for(i = 0; i < n; i++)
{
printf("\t%d",a[i]);
}

}
int main(){
FILE *ptr;
int i,size=0;
int p_no[20],p_age[20];
ptr=fopen("person1.txt","r");
if (ptr==NULL)
{
printf("\n The file does not exist!");
exit(0);
}
for ( i = 0; !feof(ptr); i++)
{
fscanf(ptr,"%d%d",&p_no[i],&p_age[i]);
size++;
}

insertion_sort(p_age,size);
printf("\n The sorted elements is:");
display(p_age,size);
ptr=fopen("person1.txt","a");
fprintf(ptr,"\n The age wise sorted data is:\n");
for ( i = 0; i < size; i++)

{
fprintf(ptr,"\n%d %d",p_no[i],p_age[i]);
}
fclose(ptr);
}

