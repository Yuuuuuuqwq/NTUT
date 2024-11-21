#include <stdio.h>

int recursiveMaximum(const int arr[], int size)
{
    if (size == 1)
    {
        return arr[0];
    }

    int maxOfRest = recursiveMaximum(arr, size - 1);

    return (arr[size - 1] > maxOfRest) ? arr[size - 1] : maxOfRest;
}

int main()
{
    int arr[100], size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = recursiveMaximum(arr, size);

    printf("The maximum value in the array is: %d\n", max);

    return 0;
}