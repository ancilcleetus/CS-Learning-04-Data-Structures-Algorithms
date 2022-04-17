/*
** Inserts an element in an array
** at a particular position.
*/

// Best Case Time Complexity = O(1) => insertion at last index
// Worst Case Time Complexity = O(N) => insertion at first index
// Space Complexity = O(N)

#include <stdio.h>

int main()
{
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, size = 10;
    int i, position, element;
    printf("Enter position and element: ");
    scanf("%d%d", &position, &element);
    
    printf("Array before insert: \n");
    for (i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    
    for (i = size; i > position; --i)
        arr[i] = arr[i-1];
        
    arr[position] = element;
    
    printf("\nArray after insert: \n");
    for (i = 0; i < size+1; ++i)
        printf("%d ", arr[i]);

    
    return 0;
}
