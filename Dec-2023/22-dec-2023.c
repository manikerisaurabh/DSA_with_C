/*
============================== Odd Even Linked List =================================

Problem statement : Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

                    The first node is considered odd, and the second node is even, and so on.

                    Note that the relative order inside both the even and odd groups should remain as it was in the input.

                    You must solve the problem in O(1) extra space complexity and O(n) time complexity.

======================================================================================

Sample Input :  

                    Example 1:
                    Input: head = [1,2,3,4,5]
                    Output: [1,3,5,2,4]
                    
                    
                    Example 2:
                    Input: head = [2,1,3,5,6,4,7]
                    Output: [2,3,6,7,1,5,4]

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

void oddEvenList() {
    if(head == NULL || head->next == NULL) {
        return;
    }

    struct node *even = head;
    struct node *odd = head->next;
    struct node *temp = odd;
    while (even->next != NULL && even->next->next != NULL) {
            even->next = even->next->next;
            odd->next = odd->next->next;
            even = even->next;
            odd = odd->next;
    }
    even->next = temp;

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
    // add(1);
    // add(2);
    // add(3);
    // add(4);
    // add(5);


    add(2);
    add(1);
    add(3);
    add(5);
    add(6);
    add(4);
    add(7);
    printf("\nOriginal List: ");
    display();
    oddEvenList();
    printf("\nList after deleting middle node : ");
    display();
    return 0;
}
