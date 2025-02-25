//2) Write a C program to divide a singly linked list into two almost equal size lists.

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
typedef struct node
{
 int data;
 struct node *next;
} NODE;
NODE *create_list(NODE *list)
{
 NODE *temp = list, *new_node;
 int i, n;
 printf("\n Enter size of list:");
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
 NODE *list = NULL, *list1 = NULL, *list2 = NULL, *temp;
 int size, mid, i;
 list = create_list(list);
 list1=list;
 printf("\n List is:\n");
 display(list);
 size = count(list);
 mid = size / 2;
 for(i=1,temp=list;i<mid&&temp!=NULL;i++,temp=temp->next);
 list2=temp->next;
 temp->next=NULL;
 printf("\nFirst list is:\n");
 display(list1);
 printf("\n Second list is:\n");
 display(list2);
 getch();
 return 0;
}
