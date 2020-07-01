#include <stdio.h>

int main() 
{
    int matrix[100][100];
    int m;
    int n;
    int i, j;
    scanf("%d %d", &m, &n);
    int k = m * n;
    int m0 = m;
    int n0 = n;
    
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (m == 1 || n == 1) {
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                printf("%d", matrix[i][j]);
                if (j != n - 1|| i != m - 1) printf(" ");
                else {
                    return 0;
                }
            }
        }
    }

    i = 0;

    while (i != k) {
        for ( j = n - n0; j <= n0 - 1; j++) {
            printf("%d", matrix[m - m0][j]);
            i++;
            if (i == k)
                return 0;
            else
                printf(" ");
        }

        for (j = m +1 - m0; j <= m0 - 1; j++) {
            printf("%d", matrix[j][n0 - 1]);
            i++;
            if (i == k)
                return 0;
            else
                printf(" ");
        }

        for (j = n0 - 2; j >= n - n0; j--) {
            printf("%d", matrix[m0 - 1][j]);
            i++;
            if (i == k)
                return 0;
            else
                printf(" ");
        }

        for (j = m0 - 2; j > m - m0; j--) {
            printf("%d", matrix[j][n - n0]);
            i++;
            if (i == k)
                return 0;
            else
                printf(" ");
        }
        n0--;
        m0--;
    }
    
    return 0;
}
