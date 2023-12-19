#include <stdio.h>

void swapWithThirdVariable(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapWithoutThirdVariable(int *a, int *b) 
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() 
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    swapWithThirdVariable(&num1, &num2);
    printf("After swapping using a third variable: num1 = %d, num2 = %d\n", num1, num2);
    swapWithoutThirdVariable(&num1, &num2);
    printf("After swapping without a third variable: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
