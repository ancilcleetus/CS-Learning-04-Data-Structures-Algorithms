/*
** Creates a doubly linked list with 3 nodes
** and prints data of each node by traversing
** the linked list in both directions.
*/

// Time Complexity = O(N)
// Space Complexity = O(N)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node {
        struct node *prev;
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
    head->prev = NULL;
    head->next = middle;
    middle->prev = head;
    middle->next = last;
    last->prev = middle;
    last->next = NULL;
    
    // print data of each node
    struct node *temp = head;
    printf("Forward Traversal of the linked list...\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
    printf("\n");
    
    // print data of each node
    temp = last;
    printf("Backward Traversal of the linked list...\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }

    return 0;
}
