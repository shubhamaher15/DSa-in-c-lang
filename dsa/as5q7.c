//3) Write a ‘C’ program to sort elements of a singly linked list in ascending order and display 
//the sorted List. 

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct node
{
 int data;
 struct node *next;
} NODE;
NODE *create_list(NODE *list)
{
 NODE *temp = list, *new_node;
 int i, n;
 printf("\n Enter how many nodes you want:");
 scanf("%d", &n);
 for (i = 1; i <= n; i++)
 {
 new_node = (NODE *)malloc(sizeof(NODE));
 new_node->next = NULL;
 printf("\n Enter [%d] node data:", i);
 scanf("%d", &new_node->data);
 if (list == NULL)
 {
 list = temp = new_node;
 }
 else
 {
 temp->next = new_node;
 temp = new_node;
 }
 }
 return list;
}
void display(NODE *list)
{
 while (list != NULL)
 {
 printf("\t%d", list->data);
 list = list->next;
 }
}
void bubble_sort(NODE *list, int n)
{
 NODE *temp;
 int pass, i, temp1;
 for (pass = 1; pass <= n && temp != NULL; pass++)
 {
 for (i = 1, temp = list; i <= n - pass && temp != NULL; i++, temp = temp->next)
 {
 if (temp->data > temp->next->data)
 {
 temp1 = temp->data;
 temp->data = temp->next->data;
 temp->next->data = temp1;
 }
 }
 }
}
int count(NODE *list)
{
 int count = 0;
 while (list != NULL)
 {
 count++;
 list = list->next;
 }
 return count;
}
int main()
{
 NODE *list = NULL;
 int n;
 list = create_list(list);
 printf("\n The original list is:\n");
 display(list);
 n = count(list);
 bubble_sort(list, n);
 printf("\n The sorted list is:\n");
 display(list);
 getch();
 return 0;
}

