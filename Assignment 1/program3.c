#include <stdio.h>

int calculateSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        int sum = calculateSum(n);
        printf("Sum of natural numbers up to %d is: %d\n", n, sum);
    }
    return 0;
}
