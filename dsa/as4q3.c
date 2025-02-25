//3) Write a ‘C’ program to create a random array of n integers. Accept a value of n from user 
//and use Binary search algorithm to check whether the number is present in array or not. 
//(Students should accept sorted array and use Non-Recursive function also use random 
//function).

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void display(int a[], int n)
{
 int i;
 for (i = 0; i < n; i++)
 {
 printf("\t%d", a[i]);
 }
}
void binary_search(int a[],int first,int last,int key){
 int mid,flag=0;
 while (first<=last)
 {
 mid=(first+last)/2;
 if (a[mid]==key)
 {
 flag=1;
 printf("\n The %d element are founded at %d position.",key,mid);
 break;
 }
 if (a[mid]>key)
 {
 last=mid-1;
 }else
 {
 first=mid+1;
 } 
 }
 if (flag==0)
 {
 printf("\n The element are not exist in array!");
 }
 
 
}
int partition(int a[],int first,int last){
 int pivot,i,j,temp;
 pivot=a[first];
 i=first+1;
 j=last;
 do
 {
 while (i<=last&&a[i]<pivot)
 {
 i++;
 }
 while (j>first&&a[j]>pivot)
 {
 j--;
 }
 if (i<j)
 {
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 } 
 } while (i<j);
 
 a[first]=a[j];
 a[j]=pivot;
 return j;
 
}
void quick_sort(int a[], int first ,int last ){
 int j;
 if (first<=last)
 {
 j=partition(a,first,last);
 quick_sort(a,first,j-1);
 quick_sort(a,j+1,last);
 }
 
}
int main()
{
 int a[20], i, n, key;
 printf("\n Enter size of an array:");
 scanf("%d", &n);
 printf("\n Enter array elements:");
 for (i = 0; i < n; i++)
 {
 printf("\n Enter [%d] index element:", i);
 scanf("%d", &a[i]);
 }
 printf("\n Enter search value:");
 scanf("%d", &key);
 printf("\n The before sorting array is:");
 display(a, n);
 quick_sort(a,0,n-1);
 printf("\n The after sorting array is:");
 display(a,n);
 binary_search(a,0,n-1,key);
}
