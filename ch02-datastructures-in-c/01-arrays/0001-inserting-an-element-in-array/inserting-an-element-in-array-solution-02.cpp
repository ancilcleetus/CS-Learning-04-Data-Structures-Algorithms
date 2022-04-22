/*
** Inserts an element in an array
** at a particular position.
*/

// Best Case Time Complexity = O(1) => insertion at last index
// Worst Case Time Complexity = O(N) => insertion at first index
// Space Complexity = O(1)

#include <iostream>

void insert(int arr[], int N, int pos, int element)
{
    for (int i = N; i > pos; --i)
        arr[i] = arr[i-1];
        
    arr[pos] = element;
}

int main()
{
    int N;
    std::cout << "Enter size of array: ";
    std::cin >> N;

    int i, arr[N], pos, element;

    std::cout << "Enter " << N << " elements for array: ";
    for(i = 0; i < N; i++)
        std::cin >> arr[i];

    std::cout << "Enter position and element: ";
    std::cin >> pos >> element;

    insert(arr, N, pos, element);

    for(i = 0; i <= N; i++)
        std::cout << arr[i] << " ";

    return 0;
}
