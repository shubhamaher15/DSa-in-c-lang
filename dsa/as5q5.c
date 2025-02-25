//SET B:
//1) Implement the following programs by adding the functions one by one in SET A(Question1)
//i) To count total number of nodes and display the count.
//ii) To insert node at the start. 
//iii) To reverse the Linked List and display both the list.

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
 NODE *temp, *new_node;
 int i, n;
 printf("\n Enter how many nodes you want:");
 scanf("%d", &n);
 for (i = 1; i <= n; i++)
 {
 new_node = (NODE *)malloc(sizeof(NODE));
 new_node->next = NULL;
 printf("\n Enter [%d] element of list:");
 scanf("%d", &new_node->data);
 if (list == NULL)
 {
 list = temp = new_node;
 }
 else
 {
 new_node->next = list;
 list = new_node;
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
void count(NODE *list)
{
 int count = 0;
 while (list != NULL)
 {
 count++;
 list = list->next;
 }
 printf("\n The no.of nodes are in list is %d", count);
}
NODE *insert(NODE *list, int n)
{
 NODE *temp = list, *new_node;
 new_node = (NODE *)malloc(sizeof(NODE));
 new_node->next = NULL;
 new_node->data = n;
 if (list == NULL)
 {
 list = temp = new_node;
 }
 else
 {
 new_node->next = list;
 list = new_node;
 }
 return list;
}
NODE *reverse(NODE*list,NODE*rev_list){
 NODE *temp=list;
 while (temp!=NULL)
 {
 rev_list=insert(rev_list,temp->data);
 temp=temp->next;
 }
 return rev_list; 
}
int main()
{
 NODE *list = NULL, *rev_list = NULL;
 int n, i, choice;
 do
 {
 printf("\n----------------------------");
 printf("\n 1.create \n 2.display\n 3.count no.of nodes \n 4.insert \n5.reverse the list \n6.Exit");
 printf("\n ---------------------------");
 printf("\n Enter your choice:");
 scanf("%d", &choice);
 switch (choice)
 {
 case 1:
 list = create_list(list);
 break;
 case 2:
 printf("\n The list is:\n");
 display(list);
 break;
 case 3:
 count(list);
 break;
 case 4:
 printf("\n Enter value to insert:");
 scanf("%d", &n);
 list = insert(list, n);
 break;
 case 5:
 rev_list = reverse(list, rev_list);
 printf("\n Original list is:\n");
 display(list);
 printf("\n The reverse list is:\n");
 display(rev_list);
 break;
 }
 } while (choice != 6);
}

