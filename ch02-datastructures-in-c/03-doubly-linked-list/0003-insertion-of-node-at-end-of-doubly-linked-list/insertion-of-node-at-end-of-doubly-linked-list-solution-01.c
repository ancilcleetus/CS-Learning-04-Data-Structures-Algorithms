/*
** Inserts a node at the end of a doubly linked list
*/

// Time Complexity = O(N) since traversal of linked list
// Space Complexity = O(1)

#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head = NULL;

void addLast(int val) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    
    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
    }
    else {
        struct node *lastNode = head;
        while (lastNode->next != NULL)
            lastNode = lastNode->next;
        lastNode->next = newNode;
        newNode->prev = lastNode;
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
    addLast(10);
    addLast(20);
    addLast(30);
    
    printList();

    return 0;
}
