#include <stdio.h>
#include<math.h>

int main() 
{
    int matrix[100][100];
    int m;
    int n;
    int i,j,k;
    int x;
    scanf("%d %d", &m, &n);
    
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    x = 0;
    k = 0;
    int sum = 0;
    int num = m * n;

    while (m - k >0 && n - k > 0) {
        for (j = x; j < n - x; j++) {
            if (sum != num) {
                printf("%d ", matrix[x][j]);
                sum++;
           } else {
                printf("%d", matrix[x][j]);
           }
        }

        for (j = x + 1; j < m - x; j++) {
            if (sum != num) {
                printf("%d ", matrix[j][n-1-x]); 
                sum++; 
            } else {
                printf("%d", matrix[j][n-1-x]);
            }
        }

        for(j = n - 2 -x; j >= x; j--) {
            if (sum != num) {
                printf("%d ", matrix[m-1-x][j]);
                sum++;
            } else {
                printf("%d", matrix[m-1-x][j]);
            }
        }

        for (j = m - 2 - x; j >= 1 + x; j--) {
            if (sum != num) {
                printf("%d ", matrix[j][x]);
                sum++;
            } else {
                printf("%d", matrix[j][x]);
            }
        }

        x++;
        k += 2;
    }    

    return 0;
}


