#!/usr/bin/env python3

# Searches a node in a singly linked list

# Best Case Time Complexity = O(1) => when node to be found is head node
# Worst Case Time Complexity = O(N) => when node to be found is last node or node not found
# Space Complexity = O(1)


class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None


def printList(self):
    print("Traversing the linked list to print data of each node...")
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


def search(self, key):
    pos = 1
    node = self.head
    while node != None:
        if node.data == key:
            return pos
        
        node = node.next
        pos += 1
    
    return -1


if __name__ == '__main__':

    llist = LinkedList()

    # add nodes at the beginning of linked list
    addLast(llist, 10)
    addLast(llist, 20)
    addLast(llist, 30)
    addLast(llist, 40)
    printList(llist)

    key = int(input("Enter data of Node to be searched: "))
    pos = search(llist, key)

    if pos == -1:
        print("Node not found\n")
    else:
        print(f"Node found at position {pos}\n")