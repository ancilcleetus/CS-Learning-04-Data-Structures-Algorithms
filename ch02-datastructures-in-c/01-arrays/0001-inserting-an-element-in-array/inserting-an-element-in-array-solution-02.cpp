/*
** Inserts an element in an array
** at a particular position.
*/

// Best Case Time Complexity = O(1) => insertion at last index
// Worst Case Time Complexity = O(N) => insertion at first index
// Space Complexity = O(N)

#include <iostream>

int main()
{
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, size = 10;
    int i, position, element;
    std::cout << "Enter position and element: ";
    std::cin >> position >> element;
    
    std::cout << "Array before insert: \n";
    for (i = 0; i < size; ++i)
        std::cout << arr[i] << " ";
    
    for (i = size; i > position; --i)
        arr[i] = arr[i-1];
        
    arr[position] = element;
    
    std::cout << "\nArray after insert: \n";
    for (i = 0; i < size+1; ++i)
        std::cout << arr[i] << " ";
        
    return 0;
}
