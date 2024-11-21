#include <stdio.h>

int binarySearch(int array[], int start, int end, int key)
{
    if (start > end)
    {
        return -1;
    }

    int middle = start + (end - start) / 2;

    if (array[middle] == key)
    {
        return middle;
    }
    else if (array[middle] > key)
    {
        return binarySearch(array, start, middle - 1, key);
    }
    else
    {
        return binarySearch(array, middle + 1, end, key);
    }
}

int main()
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int key;

    printf("Enter a number to search in the array: ");
    scanf("%d", &key);

    int result = binarySearch(array, 0, size - 1, key);

    if (result != -1)
    {
        printf("Value %d found at index %d.\n", key, result);
    }
    else
    {
        printf("Value %d not found in the array.\n", key);
    }

    return 0;
}