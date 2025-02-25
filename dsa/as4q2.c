//Write a C program to accept n elements from user store it in an array. Accept a value from 
//the user and use binary search method to check whether the value is present in array or not. 
//Display proper message. (Students should accept sorted array and use Recursive function).

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
	void insertion_sort(int a[], int n)
	{
	   int i, j, temp;
 		for (i = 0; i < n; i++)
 		 {
 		 	temp = a[i];
 			for (j = i - 1; j >= 0 && a[j] > temp; j--)
 			  {
 				 a[j + 1] = a[j];
 			  }
  				a[j + 1] = temp;
 		  }
	}
	void binary_search(int a[], int first, int last, int key)
	 {
 		int mid, flag = 0;
 		while (first <= last)
 		{
 		  mid = (first + last) / 2;
 			if (a[mid] == key)
 			{
 				flag = 1;
 				printf("\n The %d element are founded at %d position.", key, mid);
 				break;
 			}
 			if (a[mid] > key)
			 {
 				last = mid - 1;
 			 }
 			else
 			{
 				first = mid + 1;
 			}
 		}
 		if (flag == 0)
 		 {
 			printf("\n The element are not exist in array!");
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
 			insertion_sort(a, n);
 			printf("\n The after sorting array is:");
 			display(a, n);
 			binary_search(a, 0, n - 1, key);
}
