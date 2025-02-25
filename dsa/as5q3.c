//3) Write a C program to implement a doubly linked list with Create and Display operation.

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
 NODE *temp = list, *new_node;
 int n, i;
 printf("\n Enter how many elements you want:");
 scanf("%d", &n);
 for (i = 1; i <= n; i++)
 {
 new_node = (NODE *)malloc(sizeof(struct node));
 new_node->pre = NULL;
 new_node->next = NULL;
 printf("\n Enter [%d] node element:", i);
 scanf("%d", &new_node->data);
 if (list == NULL)
 {
 list = temp = new_node;
 }
 else
 {
 temp->next = new_node;
 new_node->pre = temp;
 temp = new_node;
 }
 }
 return list;
}
void display(NODE *list)
{
 NODE *temp = list;
 while (temp!=NULL)
 {
 printf("\t%d",temp->data);
 temp=temp->next;
 }
 
}
int main()
{
 NODE *list = NULL;
 list = create_list(list);
 printf("\n The doubly list is:\n");
 display(list);
 getch();
 return 0;
}
