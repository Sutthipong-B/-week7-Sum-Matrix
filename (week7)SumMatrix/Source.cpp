#include<stdio.h>
#define _CRT_NO_WARNINGS

int main()
{
    int m, n, X[50][50], Y[50][50], Z[50][50];
    scanf_s("%d %d", &m, &n);
   
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf_s("%d", &X[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf_s("%d", &Y[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            Z[i][j] = X[i][j] + Y[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", Z[i][j]);
        }
        printf("\n");
    }
    return 0;
}