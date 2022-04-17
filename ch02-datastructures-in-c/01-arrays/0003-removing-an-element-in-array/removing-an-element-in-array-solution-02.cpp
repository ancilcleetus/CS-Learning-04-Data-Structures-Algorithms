/*
** Removes an element in an array with index read from user.
*/

// Best Case Time Complexity = O(1) => element at last index
// Worst Case Time Complexity = O(N) => element at first index
// Space Complexity = O(N)

#include <iostream>

void remove_element(int arr[], int N, int index)
{
    for (int i = index; i < N-1; ++i)
        arr[i] = arr[i+1];
}

int main()
{
    int N;
    std::cout << "Enter size of array: ";
    std::cin >> N;

    int i, arr[N], index;

    std::cout << "Enter " << N << " elements for array: ";
    for(i = 0; i < N; i++)
        std::cin >> arr[i];

    std::cout << "Enter index of element to be removed: ";
    std::cin >> index;

    remove_element(arr, N, index);
    
    std::cout << "Array after removing element:\n";
    for(i = 0; i < N-1; i++)
        std::cout << arr[i] << " ";

    return 0;
}
