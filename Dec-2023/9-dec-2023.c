/*
==============================  LINKED LIST=================================

Problem statement : Write a C program to create a Linked List
                    of 'N' elements and display it in reverse order

======================================================================================

Sample Input :  Linked List : 10->20->30->40->NULL

Sample Output : Reverse LL : 40->30->20->10->NULL

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

struct node *head = NULL, *temp;
int count=0;
void insert(int data) {
  count++;
  struct node *q;
  q = (struct node *) malloc(sizeof (struct node));
  q->data = data;
  q->next = NULL;
  if(head == NULL) {
    head = q;
    return;
  }
  temp = head;
  while(temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = q;
}

void display() {
  int a[count];
  temp = head;
  printf("List is : ");
  int i=0;
  while(temp != NULL) {
    printf("%d->",temp->data);
    a[i] = temp->data;
    temp = temp->next;
    i++;

  }
  printf("\n Reverse List : ");
  for(int j=count-1; j>=0; j--) {
    printf("%d->",a[j]);
  }
}

int main(int argc, char const *argv[])
{
  insert(10);
  insert(20);
  insert(30);
  insert(40);
  display();
  return 0;
}
