#!/usr/bin/env python3

# create a Singly Linked List

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


if __name__ == '__main__':

    llist = LinkedList()

    # create 3 nodes with first assigned as head of Linked List
    llist.head = Node(10)
    middle = Node(20)
    last = Node(30)

    # link nodes
    llist.head.next = middle
    middle.next = last

    # print each node's data
    printList(llist)

    