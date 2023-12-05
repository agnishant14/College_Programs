#include <stdio.h>
int main()
{
    int i, j;
    int m1[4][4], m2[4][4];
    printf("Enter the input for first matrix \n");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("Enter the data in [%d][%d]:", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("\nEnter the input for second matrix \n");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("Enter the data in [%d][%d]:", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    //Program to print two 3x3 matrix

    printf("first matrix: \n");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d\t ", m1[i][j]);
        }
        printf("\n");
    }
    printf("second matrix: \n");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d\t ", m2[i][j]);
        }
        printf("\n");
    }
    return 0;
}