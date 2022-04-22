/*
** Inserts a node at the beginning of a singly linked list
*/

// Time Complexity = O(1) since no traversal of linked list
// Space Complexity = O(1)

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void addFirst(int val) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = head;
    
    head = newNode;
}

void printList() {
    struct node *temp = head;
    printf("Traversing the linked list to print data of each node...\n");
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
