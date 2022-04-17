/*
** Removes an element in an array with index read from user.
*/

// Best Case Time Complexity = O(1) => element at last index
// Worst Case Time Complexity = O(N) => element at first index
// Space Complexity = O(N)

#include <stdio.h>

void remove_element(int arr[], int N, int index)
{
    for (int i = index; i < N-1; ++i)
        arr[i] = arr[i+1];
}

int main()
{
    int N;
    printf("Enter size of array: ");
    scanf("%d",&N);

    int i, arr[N], index;

    printf("Enter %d elements for array: ", N);
    for(i = 0; i < N; i++)
        scanf("%d",&arr[i]);

    printf("Enter index of element to be removed: ");
    scanf("%d",&index);

    remove_element(arr, N, index);

    printf("Array after removing element:\n");
    for(i = 0; i < N-1; i++)
        printf("%d ",arr[i]);

    return 0;
}
