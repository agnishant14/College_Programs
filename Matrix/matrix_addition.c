#include<stdio.h>
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
    printf("\n");
    printf("Enter the input for second matrix \n");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("Enter the data in [%d][%d]:", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    //program to print the sum of two 3x3 matrix

    printf("sum of both the matrix: \n");
    int c[4][4];
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            c[i][j] = m1[i][j] + m2[i][j];
            printf("%d\t ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
    