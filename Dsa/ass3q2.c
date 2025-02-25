//2) Write a C program to accept and sort n elements in ascending order by using quick sort. 
#include <stdio.h>
#include <conio.h>
void display(int a[], int n)
{
	int i;
for(i = 0; i < n; i++)
{
printf("\t%d", a[i]);
}
printf("\n");
}
int partition(int a[], int first, int last)
{
int pivot = a[first];
int temp;
int i = first + 1;
int j = last;
do
{

while ((a[i] < pivot) && (i <= last))
{
i++;
}
while ((a[j] > pivot) && (j > first))
{
j--;
}
if (i < j) // when it will cross itself!
{
temp = a[i];

a[i] = a[j];
a[j] = temp;
}
} while (i < j);

a[first] = a[j];
a[j] = pivot;
return j;
}
void quick_sort(int a[], int first, int last)
{
int j;
if (first < last)
{
j = partition(a, first, last);
quick_sort(a, first, j - 1);
quick_sort(a, j + 1, last);
}
}
int main()
{
int a[10], i, n;
printf("\n Enter array limit:");
scanf("%d", &n);
printf("\n Enter array elements:");
for (i = 0; i < n; i++)
{
printf("\n Enter %d array element:", i);
scanf("%d", &a[i]);
}
printf("\n The un-sorted array is:");

display(a, n);
quick_sort(a, 0, n - 1);
printf("\n The sorted array is:");
display(a, n);
}

