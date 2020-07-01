#include <stdio.h>

int main()
{
    int n = 10;
    int m;
    int numbers[10];
    int i;
    int max;
    int k;
    int j;
    int o;
    // 读入给定的数字
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < n; i++) {
        m = i;
        for (k = i; k < n; k++) {
            if (numbers[m] < numbers[k]) {
                m = k;
            }
        }
        o = numbers[i];
        numbers[i] = numbers[m];
        numbers[m] = o;
    }
    for (i = 0; i < n; i++) {
        if (i == 9) {
            printf("%d", numbers[i]);
        } else {
            printf("%d ", numbers[i]);
        }
    }

    return 0;
}