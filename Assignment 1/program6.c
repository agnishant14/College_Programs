#include <stdio.h>

void printOddIndexedElements(int arr[], int size) 
{
    printf("Odd-indexed elements: ");
    for (int i = 1; i < size; i += 2) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
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
    printOddIndexedElements(arr, size);
    return 0;
}
