/*
** Searches a node in a linked list
*/

// Best Case Time Complexity = O(1) => when node to be found is head node
// Worst Case Time Complexity = O(N) => when node to be found is last node or node not found
// Space Complexity = O(1)

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int searchNode(struct node **head, int key) {
    struct node *temp = *head;
    int position = 1;
    
    while (temp != NULL) {
        if (temp->data == key)
            return position;
        else
            temp = temp->next;
        position += 1;
    }
    
    return -1;
}

void addLast(struct node **head, int val) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    
    if (*head == NULL)
        *head = newNode;
    else {
        struct node *lastNode = *head;
        while (lastNode->next != NULL)
            lastNode = lastNode->next;
        lastNode->next = newNode;
    }
}

void printList(struct node *head) {
    struct node *temp = head;
    printf("Traversing the linked list to print data of each node...\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct node *head = NULL;
    
    addLast(&head, 10);
    addLast(&head, 20);
    addLast(&head, 30);
    
    printList(head);
    
    int key, position;
    printf("Enter data of Node to be searched: ");
    scanf("%d", &key);
    
    position = searchNode(&head, key);
    if (position == -1)
        printf("Node not found\n");
    else
        printf("Node found at position %d\n", position);

    return 0;
}
