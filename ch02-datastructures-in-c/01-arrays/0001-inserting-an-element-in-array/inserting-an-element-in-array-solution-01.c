/*
** Inserts an element in an array
** at a particular position.
*/

// Best Case Time Complexity = O(1) => insertion at last index
// Worst Case Time Complexity = O(N) => insertion at first index
// Space Complexity = O(N)

#include <stdio.h>
  
void insert(int arr[], int N, int pos, int element)
{
    for (int i = N; i > pos; --i)
        arr[i] = arr[i-1];
        
    arr[pos] = element;
}


int main()
{
    int N;
    printf("Enter size of array: ");
    scanf("%d",&N);

    int i, arr[N], pos, element;

    printf("Enter %d elements for array: ", N);
    for(i = 0; i < N; i++)
        scanf("%d",&arr[i]);

    printf("Enter position and element: ");
    scanf("%d%d",&pos, &element);

    insert(arr, N, pos, element);

    for(i = 0; i <= N; i++)
        printf("%d ",arr[i]);

    return 0;
}
