/*
** Searches an element in an array
** Returns array index if found, else returns -1.
*/

// Best Case Time Complexity = O(1) => found at first index
// Worst Case Time Complexity = O(N) => found at last index or not found
// Space Complexity = O(N)

#include <iostream>

int search(int arr[], int N, int key)
{
    for (int i = 0; i < N; ++i)
        if (arr[i] == key)
            return i;
    return -1;
}

int main()
{
    int N;
    std::cout << "Enter size of array: ";
    std::cin >> N;

    int i, arr[N], key;

    std::cout << "Enter " << N << " elements for array: ";
    for(i = 0; i < N; i++)
        std::cin >> arr[i];

    std::cout << "Enter search key: ";
    std::cin >> key;

    int index = search(arr, N, key);
    if (index == -1)
        std::cout << "Element " << key << " is not found in the array" << std::endl;
    else
        std::cout << "Element " << key << " is found at index " << index << std::endl;

    return 0;
}
