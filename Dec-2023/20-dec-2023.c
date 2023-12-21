/*
==============================  Delete the Middle Node of a Linked List =================================

Problem statement : You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.

The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.

For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.

======================================================================================

Sample Input :  


            Example 1:
            Input: head = [1,3,4,7,1,2,6]
            Output: [1,3,4,1,2,6]
            Explanation:
            The above figure represents the given linked list. The indices of the nodes are written below.
            Since n = 7, node 3 with value 7 is the middle node, which is marked in red.
            We return the new list after removing this node. 


            Example 2:
            Input: head = [1,2,3,4]
            Output: [1,2,4]
            Explanation:
            The above figure represents the given linked list.
            For n = 4, node 2 with value 3 is the middle node, which is marked in red.


            Example 3:
            Input: head = [2,1]
            Output: [2]
            Explanation:
            The above figure represents the given linked list.
            For n = 2, node 1 with value 1 is the middle node, which is marked in red.
            Node 0 with value 2 is the only node remaining after removing node 1.


=====================================================================================
*/




#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void add(int data) {
    struct node *temp;
    temp = (struct node*) malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL) {
        head = temp;
        return;
    }
    struct node  *q= head;
    while (q->next != NULL)
    {
        q = q->next;
    }
    q->next = temp;
}

void delMiddle() {
    struct node *temp;
    temp = (struct node*) malloc(sizeof(struct node));
    temp->next = head;
    struct node *slow = temp;
    struct node *fast = temp;

    while(fast->next != NULL && fast->next->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
}

void display() {
    struct node *q = head;
    while (q != NULL)
    {
        printf("%d->",q->data);
        q = q->next;
    }
    printf("NULL");
    
}

int main(int argc, char const *argv[])
{
    //add(1);
    add(2);
    //add(3);
    //add(4);
    // add(7);
     add(1);
    // add(2);
    // add(6);
    printf("\nOriginal List: ");
    display();
    delMiddle();
    printf("\nList after deleting middle node : ");
    display();
    return 0;
}
