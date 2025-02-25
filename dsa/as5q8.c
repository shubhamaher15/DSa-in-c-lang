//4) Write a ‘C’ program to create doubly link list and display nodes having odd value.

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
 int i, n;
 printf("\n Enter length of list:");
 scanf("%d", &n);
 for (i = 1; i <= n; i++)
 {
 new_node = (NODE *)malloc(sizeof(NODE));
 new_node->next = NULL;
 new_node->pre = NULL;
 printf("\n Enter [%d] node data:", i);
 scanf("%d", &new_node->data);
 if (list == NULL)
 {
 list = temp = new_node;
 }
 else
 {
 temp->next = new_node;
 temp->next->pre = temp;
 temp = new_node;
 }
 }
 return list;
}
void display(NODE *list)
{
 NODE *temp = list;
 while(temp!=NULL)
 {
 printf("\t%d", temp->data);
 temp = temp->next;
 }
}
void odd_nodes(NODE *list)
{
 NODE *temp = list;
 while(temp!=NULL)
 {
 if (temp->data % 2 == 1)
 {
 printf("\t%d", temp->data);
 }
 temp = temp->next;
 }
}
int main()
{
 NODE *list = NULL;
 list = create_list(list);
 printf("\n The doubly list is:\n");
 display(list);
 printf("\n The nodes having odd value:\n");
 odd_nodes(list);
 getch() ;
 return 0;
}
