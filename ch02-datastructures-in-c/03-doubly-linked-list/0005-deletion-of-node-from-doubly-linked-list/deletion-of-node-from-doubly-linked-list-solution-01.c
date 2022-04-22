/*
** Deletes a node from a doubly linked list
*/

// Best Case Time Complexity = O(1) => when node to be deleted is head node
// Worst Case Time Complexity = O(N) => when node to be deleted is last node
// Space Complexity = O(1)

#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

void deleteNode(struct node **head, int key) {
    if (*head == NULL)
        return;
    struct node *temp;
    if ((*head)->data == key) {
        temp = *head;
        if (temp->next != NULL)
            temp->next->prev = NULL;
        *head = temp->next;
        free(temp);
    }
    else {
        struct node *current = *head;
        while (current->next != NULL) {
            if (current->next->data == key) {
                temp = current->next;
                current->next = temp->next;
                if (temp->next != NULL)
                    temp->next->prev = current;
                
                free(temp);
                break;
            }
            else {
                current = current->next;
            }
        }
    }
}

void addLast(struct node **head, int val) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    
    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
    }
    else {
        struct node *lastNode = *head;
        while (lastNode->next != NULL)
            lastNode = lastNode->next;
        lastNode->next = newNode;
        newNode->prev = lastNode;
    }
}

void printList(struct node *head) {
    struct node *temp = head;
    printf("Forward Traversal of the linked list...\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct node *head = NULL;
    
    addLast(&head, 10);
    addLast(&head, 20);
    addLast(&head, 30);
    printList(head);
    
    int key;
    printf("Enter data of Node to be deleted: ");
    scanf("%d", &key);
    
    deleteNode(&head, key);
    
    printList(head);

    return 0;
}
