//4) Write a C program to implement a Circular doubly linked list with Create and Display 
//operation.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct node
{
 struct node *pre;
 int data;
 struct node *next;
} NODE;
NODE *create_list(NODE *list)
{
 NODE *temp = list, *new_node, *temp1;
 int i, n;
 printf("\n Enter how many nodes:");
 scanf("%d", &n);
 for (i = 1; i <= n; i++)
 {
 new_node = (NODE *)malloc(sizeof(NODE));
 new_node->next = NULL;
 new_node->pre = NULL;
 printf("\n Enter [%d] node data:",i);
 scanf("%d", &new_node->data);
 if (list == NULL)
 {
 list = temp = new_node;
 temp1 = list;
 }
 else
 {
 temp->next = new_node;
 temp->next->pre = temp;
 temp = new_node;
 }
 if (temp->next == NULL)
 {
 temp->next = list;
 }
 }
 return list;
}
void display(NODE *list)
{
 NODE *temp = list;
 do
 {
 printf("\t%d", temp->data);
 temp = temp->next;
 } while (temp != list);
}
void display_pre(NODE *list)
{
 NODE *temp = list,*temp1;
 do
 {
 temp = temp->next;
 } while (temp->next != list);
 list=temp;
 do
 {
 printf("\t%d",temp->data);
 temp=temp->pre;
 } while (temp!=list);
 
}
int main()
{
 NODE *list = NULL;
 list = create_list(list);
 printf("\n The circular doubly list is:\n");
 display(list);
 printf("\n The list using previous link:\n");
 display_pre(list);
}

