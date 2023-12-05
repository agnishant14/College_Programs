#include <stdio.h>
int main()
{
    int i, j, a[4][4], b[4][4], A1, A2, A3, A4, A5, A6, A7, A8, A9, B1, B2, B3, B4, B5, B6, B7, B8, B9;
    printf("Enter the input for Matrix A \n");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("Enter the data in [%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the input for Matrix B \n");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("Enter the data in [%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    A1 = (a[2][2] * a[3][3] - a[3][2] * a[2][3]);
    A2 = (a[2][3] * a[3][1] - a[2][1] * a[3][3]);
    A3 = (a[2][1] * a[3][2] - a[3][1] * a[2][2]);
    A4 = (a[1][3] * a[3][2] - a[1][2] * a[3][3]);
    A5 = (a[1][1] * a[3][3] - a[1][3] * a[3][1]);
    A6 = (a[1][2] * a[3][1] - a[1][1] * a[3][2]);
    A7 = (a[1][2] * a[2][3] - a[1][3] * a[2][2]);
    A8 = (a[1][3] * a[2][1] - a[1][1] * a[2][3]);
    A9 = (a[1][1] * a[2][2] - a[1][2] * a[2][1]);
    printf("\nAdjoint of Matrix A: \n%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n", A1, A4, A7, A2, A5, A8, A3, A6, A9);
    B1 = (b[2][2] * b[3][3] - b[3][2] * b[2][3]);
    B2 = (b[2][3] * b[3][1] - b[2][1] * b[3][3]);
    B3 = (b[2][1] * b[3][2] - b[3][1] * b[2][2]);
    B4 = (b[1][3] * b[3][2] - b[1][2] * b[3][3]);
    B5 = (b[1][1] * b[3][3] - b[1][3] * b[3][1]);
    B6 = (b[1][2] * b[3][1] - b[1][1] * b[3][2]);
    B7 = (b[1][2] * b[2][3] - b[1][3] * b[2][2]);
    B8 = (b[1][3] * b[2][1] - b[1][1] * b[2][3]);
    B9 = (b[1][1] * b[2][2] - b[1][2] * b[2][1]);
    printf("\nAdjoint of Matrix B: \n%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n", B1, B4, B7, B2, B5, B8, B3, B6, B9);
    return 0;
}
