/*
** Searches an element in an array
** Returns array index if found, else returns -1.
*/

// Best Case Time Complexity = O(1) => found at first index
// Worst Case Time Complexity = O(N) => found at last index or not found
// Space Complexity = O(N)

#include <stdio.h>

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
    printf("Enter size of array: ");
    scanf("%d",&N);

    int i, arr[N], key;

    printf("Enter %d elements for array: ", N);
    for(i = 0; i < N; i++)
        scanf("%d",&arr[i]);

    printf("Enter search key: ");
    scanf("%d",&key);

    int index = search(arr, N, key);
    if (index == -1)
        printf("Element %d is not found in the array\n", key);
    else
        printf("Element %d is found at index %d\n", key, index);

    return 0;
}
