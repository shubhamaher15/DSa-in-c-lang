//2) Write a C program to implement a Circular Singly linked list with Create and Display 
//operation.

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
 NODE *temp, *new_node, *temp1;
 int n, i;
 printf("\n Enter how many nodes you want:");
 scanf("%d", &n);
 for (i = 1; i <= n; i++)
 {
 new_node = (NODE *)malloc(sizeof(struct node));
 new_node->next = NULL;
 printf("\n Enter [%d] list element:", i);
 scanf("%d", &new_node->data);
 if (list == NULL)
 {
 list = temp = new_node;
 temp1 = list;
 }
 else
 {
 temp->next = new_node;
 temp = new_node;
 }
 if (temp->next == NULL)
 {
 temp->next = temp1;
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
int main()
{
 NODE *list = NULL;
 list = create_list(list);
 printf("\n list is:\n");
 display(list);
 getch();
 return 0;
}
