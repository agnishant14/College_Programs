#include <stdio.h>

int calculateSum(int arr[], int size)
{
    if (size <= 0)
    {
        printf("Array is empty.\n");
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum = sum + arr[i];
    }
    return sum;
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
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int sum = calculateSum(arr, size);
    printf("The sum of elements in the array is: %d\n", sum);
    return 0;
}
