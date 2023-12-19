#include <stdio.h>

void arrayOperations(int arr[], int size, float *average, long *max, long *min)
{
    if (size <= 0)
    {
        printf("Array is empty.\n");
        return;
    }
    *average = 0.0;
    *max = arr[0];
    *min = arr[0];
    for (int i = 0; i < size; i++)
    {
        *average += arr[i];
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
    *average /= size;
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
    float average;
    long max, min;
    arrayOperations(arr, size, &average, &max, &min);
    printf("Average: %.2f\n", average);
    printf("Maximum element: %ld\n", max);
    printf("Minimum element: %ld\n", min);
    return 0;
}
