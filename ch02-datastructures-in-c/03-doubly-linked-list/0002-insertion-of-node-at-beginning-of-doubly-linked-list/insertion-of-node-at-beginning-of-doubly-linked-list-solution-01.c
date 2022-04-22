/*
** Inserts a node at the beginning of a doubly linked list
*/

// Time Complexity = O(1) since no traversal of linked list
// Space Complexity = O(1)

#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head = NULL;

void addFirst(int val) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    
    if (head == NULL) {
        newNode->prev = NULL;
        newNode->next = NULL;
        head = newNode;
    }
    else {
        newNode->prev = NULL;
        newNode->next = head;
        head->prev = newNode;    
        head = newNode;
    }
}

void printList() {
    struct node *temp = head;
    printf("Forward Traversal of the linked list...\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    addFirst(10);
    addFirst(20);
    addFirst(30);
    
    printList();

    return 0;
}
