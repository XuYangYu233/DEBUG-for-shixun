#include <stdio.h>

int main()
{
    int n = 10;
    int m;
    int numbers[10];
    int i, j;
    int tmpt;

    // 读入给定的数字
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (numbers[j] < numbers[j + 1]) {
                tmpt = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = tmpt;
            }
        }
    }

    for (m = 0; m < 10; m++) {
        if (m != 9) {
            printf("%d ", numbers[m]);
        } else {
            printf("%d", numbers[m]);
        }
    }

    return 0;
}