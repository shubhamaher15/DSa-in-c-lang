/*3) Write a ‘C’ program to accept and sort n elements in ascending order using Selection sort  
method.*/
#include<stdio.h> 
#include<conio.h> 
void selection_sort(int a[],int n){ 
    int j,i,temp,temp1; 
    for ( i = 0; i < n; i++) 
    { 
        temp=a[i]; 
        for ( j = i+1; j< n ; j++) 
        { 
            if (a[j]<temp) 
            { 
                temp1=temp; 
                temp=a[j]; 
                a[j]=temp1; 
            } 
             
        } 
        a[i]=temp; 
         
    } 
     
} 
int main()
{ 
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
