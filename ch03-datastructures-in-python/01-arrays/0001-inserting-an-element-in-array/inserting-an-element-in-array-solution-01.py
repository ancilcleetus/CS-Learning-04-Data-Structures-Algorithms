#!/usr/bin/env python3

# Inserts an element in an array at a particular position.

# Best Case Time Complexity = O(1) => append method
# Worst Case Time Complexity = O(N) => insertion at first index (insert method)
# Space Complexity = O(1)


if __name__ == '__main__':

    values = [10, 20, 30, 40, 50]
    
    values.append(100)
    print(f"values = {values}")
    
    values.insert(0, 5)
    print(f"values = {values}")
    
    
