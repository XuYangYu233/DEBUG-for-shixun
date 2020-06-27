#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int i = 0, j;
    long long int x, y;
    long long int a, b, m, k;
    for (x = 0; x <= n / 2; x++) {
        for (y = 0; y <= n / 3; y++) {
            if (x * 2 + y * 3 == n) {
                if (x == 0 || y == 0) {
                    i++;
                } else {
                    a = 1;
                    b = 1;
                    m = x + y;
                    k = x > y ? y : x;
                    for (j = m; j >= m - k + 1; j--) {
                        a = a * j;
                    }
                    for (j = 1; j <= k; j++) {
                        b = b * j;
                    }
                    i += a / b;
                }
            }
        }
    }
    printf("%lld", i);
    return 0;
}