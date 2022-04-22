/*
** Creates a singly linked list with 3 nodes
** and prints data of each node
** by traversing the linked list.
*/

// Time Complexity = O(N)
// Space Complexity = O(N)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node {
        int data;
        struct node *next;
    };
    
    struct node *head, *middle, *last;
    
    // allocate memory in heap for each node
    head = malloc(sizeof(struct node));
    middle = malloc(sizeof(struct node));
    last = malloc(sizeof(struct node));
    
    // initialize data of each node
    head->data = 10;
    middle->data = 20;
    last->data = 30;
    
    // create connections between nodes
    head->next = middle;
    middle->next = last;
    last->next = NULL;
    
    // print data of each node
    struct node *temp = head;
    printf("Traversing the linked list to print data of each node...\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
