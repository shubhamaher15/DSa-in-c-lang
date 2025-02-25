//2) Write a Menu driven program in C to implement the following functions:
//i) To search the number in the list. If the number is present display the Position of 
//node .If number not present print the message “Number not Found”
//ii) To swap mth and nth element of linked list.
//iii) To delete node from specific position of linked list.

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
 printf("\n Enter [%d] element of list:", i);
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
NODE *search(NODE *list, int n)
{
 while (list != NULL)
 {
 if (list->data == n)
 {
 return list;
 }
 list = list->next;
 }
 return NULL;
}
NODE *swap(NODE *list, int p1, int p2)
{
 NODE *temp1, *temp2;
 int temp3;
 int i;
 for (i = 1, temp1 = list; i < p1 && temp1->next != NULL; i++, temp1 = temp1->next) ;
 for (i = 1, temp2 = list; i < p2 && temp2->next != NULL; i++, temp2 = temp2->next);
 temp3 = temp1->data;
 temp1->data = temp2->data;
 temp2->data = temp3;
 return list;
}
NODE *delete(NODE *list, int p)
{
 NODE *temp = list, *temp1;
 int i;
 if (p == 1)
 {
 list = temp->next;
 free(temp);
 }
 else
 {
 for (i = 1, temp = list; i < p - 1 && temp->next != NULL; i++, temp = temp->next)
 ;
 if (temp == NULL)
 {
 printf("\n position out of range!");
 return list;
 }
 else
 {
 temp1 = temp->next;
 temp->next = temp1->next;
 free(temp1);
 }
 }
 return list;
}
int main()
{
 NODE *list = NULL, *address;
 int n, choice, p1, p2;
 do
 {
 printf("\n--------------------------------");
 printf("\n 1.create \n 2.display \n3.search \n4.swap \n5.delete \n 6.Exit");
 printf("\n--------------------------------");
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
 printf("\n Enter value for search in list:");
 scanf("%d", &n);
 address = search(list, n);
 if (address == NULL)
 {
 printf("\n The element not found in list!");
 }
 else
 {
 printf("\n Element are founded at %d node position of list!", address);
 }
 break;
 case 4:
 printf("\n Enter two positions for swap its data:");
 scanf("%d%d", &p1, &p2);
 list = swap(list, p1, p2);
 printf("\n After swap list is:\n");
 display(list);
 break;
 case 5:
 printf("\n Enter position for delete a node:");
 scanf("%d", &p1);
 list = delete (list, p1);
 break;
 }
 } while (choice != 6);
 getch();
 return 0;
}

