/*
============================== LINKED LIST =================================

Problem statement : Create following functions for descripted use
1) inset() --> insert an element into List
2) display() --> to display complete List
3) countSize() --> count the length of list


Basic idea :-
Create a linkd list in main function and pass that list for above functions as required

Write a user interactive program using switch case for those 3 functions.......

======================================================================================

Sample Input :  

Sample Output : 

Explanation : 
=====================================================================================
*/

#include<stdio.h>   
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};


void insert(struct node **list, int data) {
  struct node *temp, *q;
  temp = (struct node *)malloc(sizeof (struct node));
  temp->data = data;
  temp->next = NULL;
  if(*list == NULL) {
    *list = temp;
    return;
  }
  q = *list;
  while(q->next != NULL) {
    printf("\n %d",q->data);
    q = q->next;
  }
  q->next = temp;
} 

void display(struct node *list) {
  printf("List is  : ");
  if(list == NULL) {
    printf("NULL");
    return;
  }
  while(list != NULL) {
    printf("%d->",list->data);
    list = list->next;
  }
  printf("NULL");
}

int count(struct node *list) {
  int i=0;
  while(list != NULL) {
    i++;
    list = list->next;
  }
  return i;
}
int main(int argc, char const *argv[])
{
  struct node *list = NULL;
  int choice;
  do {
    printf("\n1 - Insert\n2 - Display\n3 - Count\n4 - Exit");
    printf("\n Enter operation : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        int item;
        printf("Enter element to insert : ");
        scanf("%d",&item);
        insert(&list, item);
      break;
    case 2:
        display(list);
        break;
    case 3:
        printf("TOTAL NUMBER OF ELEMENTS  PRESENT IN TO THE LIST IS :  %d",count(list));
    default:
      break;
    }
  } while(choice != 4);
  return 0;
}

