#include <stdio.h>

int calculateFactorial(int n)
{
    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{
    int number;
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);
    int result = calculateFactorial(number);
    printf("Factorial of %d is: %d\n", number, result);
    return 0;
}
