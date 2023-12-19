#include <stdio.h>

void checkEvenOrOdd(int n)
{
    if (n % 2 == 0)
        printf("%d is an even number.\n", n);
    else
        printf("%d is an odd number.\n", n);
}

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    checkEvenOrOdd(n);
    return 0;
}
