#include <stdio.h>
// finish
int main()
{
    int matrix[100][100];
    int m;
    int n;
    int i, j;

    scanf("%d%d", &m, &n);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int start = 0, column = n, row = m;
    while (start < column && start < row)
    {
        if (n == 1)
        {
            for (i = 0; i < m; i++)
            {
                if (i == m - 1)
                {
                    printf("%d", matrix[i][0]);
                }
                else
                    printf("%d ", matrix[i][0]);
            }
        }
        else if (m == 1)
        {
            for (j = 0; j < n; j++)
            {
                if (j == n - 1)
                {
                    printf("%d", matrix[0][j]);
                }
                else
                    printf("%d ", matrix[0][j]);
            }
        }
        else
        {
            for (j = start; j < column; j++)
            {
                if (start + 1 == row && column - 1 == j)
                {
                    printf("%d", matrix[start][j]);
                    goto EXIT;
                }
                else
                    printf("%d ", matrix[start][j]);
            }
            for (i = start + 1; i < row; i++)
            {
                if (i + 1 == row && column - 1 == start)
                {
                    printf("%d", matrix[i][column - 1]);
                    goto EXIT;
                }
                else
                    printf("%d ", matrix[i][column - 1]);
            }
            for (j = column - 2; j >= start; j--)
            {
                if (row - 2 == start && j == start)
                {
                    printf("%d", matrix[row - 1][j]);
                    goto EXIT;
                }
                else
                    printf("%d ", matrix[row - 1][j]);
            }
            for (i = row - 2; i > start; i--)
            {
                if (i == start + 1 && start + 1 == column - 1)
                {
                    printf("%d", matrix[i][start]);
                    goto EXIT;
                }
                else
                    printf("%d ", matrix[i][start]);
            }
        }
        start++;
        column--;
        row--;
    }
    EXIT:

    return 0;
}