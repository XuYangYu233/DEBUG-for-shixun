#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int n = 10;
    int numbers[n];
    int i;
    int j;
    // 读入给定的数字

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--){
            if ( numbers[j - 1] < numbers[j]) {
                swap(&numbers[j - 1], &numbers[j]);                
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d", numbers[i]);
        if (i != 9) {
            printf(" ");
        }
    }

    return 0;
}
