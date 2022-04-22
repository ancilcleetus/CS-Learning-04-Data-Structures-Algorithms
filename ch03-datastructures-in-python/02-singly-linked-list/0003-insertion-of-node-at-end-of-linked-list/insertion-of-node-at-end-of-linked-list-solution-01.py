#!/usr/bin/env python3

# Inserts a node at the end of a linked list

# Time Complexity = O(N) since traversal of linked list
# Space Complexity = O(N)

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None


def printList(self):
    node = self.head

    while node:
        print(node.data)
        node = node.next


def addLast(self, val):
    newNode = Node(val)

    # get last node
    if self.head == None:
        self.head = newNode
    else:
        lastNode = self.head

        while lastNode.next:
            lastNode = lastNode.next
            
        # add newNode to last node
        lastNode.next = newNode


if __name__ == '__main__':

    llist = LinkedList()

    # add nodes at the beginning of linked list
    addLast(llist, 10)
    addLast(llist, 20)
    addLast(llist, 30)
    addLast(llist, 40)
    printList(llist)