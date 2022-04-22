#!/usr/bin/env python3

# Searches a node in a linked list

# Best Case Time Complexity = O(1) => when node to be deleted is head node
# Worst Case Time Complexity = O(N) => when node to be deleted is last node
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


def delete(self, key):
    if self.head != None:
        if self.head.data == key:
            temp = self.head
            self.head = self.head.next
            del temp
        else:
            current_node = self.head
            while current_node.next:
                if current_node.next.data == key:
                    temp = current_node.next
                    current_node.next = current_node.next.next
                    del temp
                    break
                else:
                    current_node = current_node.next
            return
    else:
        return


if __name__ == '__main__':

    llist = LinkedList()

    # add nodes at the beginning of linked list
    addLast(llist, 10)
    addLast(llist, 20)
    addLast(llist, 30)
    addLast(llist, 40)
    printList(llist)

    key = int(input("Enter data of Node to be deleted: "))
    delete(llist, key)

    printList(llist)
