//3) Modify the bubble sort, insertion sort and selection sort program of Set A to sort the  
//integers in descending order? 
//BUBBLE SORT: 
#include <stdio.h> 
#include <conio.h> 
void display(int a[], int n,int i) 
{ 
  for (i = 0; i < n; i++) 
  { 
   printf("\t%d", a[i]); 
  } 
}
void bubble_sort(int a[], int n) 
{ 
    int temp, pass, i; 
    for (pass = 1; pass < n - 1; pass++) 
    { 
        for (i = 0; i < n - pass; i++) 
        { 
            if (a[i] < a[i + 1]) 
            { 
                temp = a[i]; 
                a[i] = a[i + 1]; 
                a[i + 1] = temp; 
            } 
        } 
    } 
} 
int main() 
{ 
    int a[20], i, n; 
    printf("\n Enter array limit:"); 
    scanf("%d", &n); 
    printf("\n Enter array elements:"); 
    for (i = 0; i < n; i++) 
    { 
        printf("\nEnter[i]index element:"); 
        scanf("%d", &a[i]); 
    } 
    printf("\n The original array is:"); 
    display(a,n); 
    bubble_sort(a, n); 
    printf("\n The sorted array by descending order:\n"); 
    display(a,n); 
} 
 
//INSERTION SORT: 
/*sort an array elements in descending order using insertion sort*/ 
#include <stdio.h> 
#include <conio.h> 
void display(int a[], int n) 
{ 
    for (int i = 0; i < n; i++) 
    { 
        printf("\t%d", a[i]); 
    } 
} 
void insertion_sort(int a[],int n){ 
    int i,temp,j; 
    for ( i = 0; i < n; i++) 
    { 
        temp=a[i]; 
        for ( j = i-1; j>=0&&a[j]<temp; j--) 
        { 
            a[j+1]=a[j]; 
        } 
        a[j+1]=temp; 
         
    } 
     
} 
int main() 
{ 
    int a[20], i, n; 
    printf("\n Enter array limit:"); 
    scanf("%d", &n); 
    printf("\n Enter array elements:"); 
    for (i = 0; i < n; i++) 
    { 
        printf("\nEnter [i] index element:"); 
        scanf("%d", &a[i]); 
    } 
    printf("\n The original array is:"); 
    display(a, n); 
    insertion_sort(a,n); 
    printf("\nThe sorted array by descending order is:\n"); 
    display(a,n); 
} 
 
//SELECTION SORT: 
/*sort array using selection sort in descending order!*/ 
#include<stdio.h> 
#include<conio.h> 
void selection_sort(int a[],int n){ 
    int j,i,temp,temp1; 
    for ( i = 0; i < n; i++) 
    { 
        temp=a[i]; 
        for ( j = i+1; j< n ; j++) 
        { 
            if (a[j]>temp) 
            { 
                temp1=temp; 
                temp=a[j]; 
                a[j]=temp1; 
            } 
             
        } 
        a[i]=temp; 
         
    } 
     
} 
int main(){ 
    int a[20],n,i; 
    printf("\n enter array limit:"); 
    scanf("%d",&n); 
    printf("\n enter array elements:"); 
    for ( i = 0; i < n; i++) 
    { 
        scanf("%d",&a[i]); 
    } 
 
    selection_sort(a,n); 
 
    printf("\n the sorted array is:"); 
    for ( i = 0; i < n; i++) 
    { 
        printf("\t%d",a[i]); 
    }   
} 
