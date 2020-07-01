#include <stdio.h>

int main()
{
    int n;
    int i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = n; j >= i; j--) {
            printf("%d", j - i + 1);
            if (j > i) {
                printf(" ");
            }
        }
        if (i < n) {
            printf("\n");
        }
    }

    return 0;
}