//1) Write a C program to accept and sort n elements in ascending order by using merge sort. 
#include <stdio.h>
#include <conio.h>
void display(int a[], int n)
{
	int i;
for(i = 0; i < n; i++)
{
printf("\t%d", a[i]);
}
}

void merge(int a[], int low, int mid, int high)
{
int i, j, k, b[20];
i = low;
j = mid + 1;
k = 0;
while ((i <= mid) && (j <= high))
{
if (a[i] < a[j])
{
b[k++] = a[i++];
}
else
{
b[k++] = a[j++];
}
}
while (i <= mid)
{
b[k++] = a[i++];
}
while (j <= high)
{
b[k++] = a[j++];
}

for (j = low, k = 0; j <= high; j++, k++)
{
a[j] = b[k];
}
}

void merge_sort(int a[], int low, int high)
{
int mid;
if (low < high)
{
mid = (low + high) / 2;
merge_sort(a, low, mid);
merge_sort(a, mid + 1, high);
merge(a, low, mid, high);
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
printf("\n Enter %d index array element:", i);
scanf("%d", &a[i]);
}
printf("\n the unsorted array is:");
display(a, n);
merge_sort(a, 0, n - 1);
printf("\n the sorted array is:");
display(a, n);
}

