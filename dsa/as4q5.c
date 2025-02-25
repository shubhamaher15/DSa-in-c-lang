//2) Write a C program to accept n elements from user store it in an array. Accept a value from 
//the user and use recursive binary search method to check whether the value is present in 
//array or not. Display proper message. (use any sorting method to sort the array).

#include <stdio.h>
#include <conio.h>
#include <string.h>
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
 while (first<last)
 {
 mid=(first+last)/2;
 if (a[mid]==key)
 {
 flag=1;
 printf("\n The %d element are founded at %d position of array !",key,mid);
 break;
 }
 if (a[mid]>key)
 {
 last=mid-1;
 }else{
 first=mid+1;
 } 
 }
 if (flag==0)
 {
 printf("\n The element are not exist in array!");
 }
}
void merge(int a[], int first, int mid, int last)
{
 int i, j, b[20], k;
 i = first;
 j = mid + 1;
 k = 0;
 while (i <= mid && j <= last)
 {
 if (a[i] > a[j])
 {
 b[k++] = a[j++];
 }
 else
 {
 b[k++] = a[i++];
 }
 }
 while (i<=mid)
 {
 b[k++]=a[i++];
 }
 while (j<=last)
 {
 b[k++]=a[j++];
 }
 for ( j = first,k=0; j <= last; j++,k++)
 {
 a[j]=b[k];
 } 
}
void merge_sort(int a[], int first, int last)
{
 int mid;
 if (first < last)
 {
 mid = (first + last) / 2;
 merge_sort(a, first, mid);
 merge_sort(a, mid + 1, last);
 merge(a, first, mid, last);
 }
}
int main()
{
 int a[20], n, i, key;
 printf("\n Enter size of array:");
 scanf("%d", &n);
 printf("\n Enter array elements:");
 for (i = 0; i < n; i++)
 {
 printf("\n Enter [%d] index element:", i);
 scanf("%d", &a[i]);
 }
 printf("\n Enter searching element:");
 scanf("%d", &key);
 printf("\n before sorting array is:");
 display(a, n);
 merge_sort(a, 0, n - 1);
 printf("\n after sorting array is:");
 display(a, n);
 binary_search(a,0,n-1,key);
}
