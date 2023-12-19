#include <stdio.h>

int findLargestElement(int arr[], int size)
{
    if (size <= 0)
    {
        printf("Array is empty.\n");
        return 0;
    }
    int largest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size <= 0)
    {
        printf("Please enter a valid size greater than 0.\n");
        return 1;
    }
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int largest = findLargestElement(arr, size);
    printf("The largest element in the array is: %d\n", largest);
    return 0;
}
