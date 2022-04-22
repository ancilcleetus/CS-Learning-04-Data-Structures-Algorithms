#!/usr/bin/env python3

# Inserts a node at the beginning of a linked list

# Time Complexity = O(1) since no traversal of linked list
# Space Complexity = O(1)

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


def addFirst(self, val):
    newNode = Node(val)
    newNode.next = self.head
    self.head = newNode


if __name__ == '__main__':

    llist = LinkedList()

    # add nodes at the beginning of linked list
    addFirst(llist, 10)
    addFirst(llist, 20)
    addFirst(llist, 30)
    addFirst(llist, 40)
    printList(llist)