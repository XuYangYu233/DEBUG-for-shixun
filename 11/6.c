#include <stdio.h>
#include <string.h>

int main()
{
    long long int arr[32];
    long long int bits[32];
    char str[500];
    char result[32];

    scanf("%s", &str);
    int i, b;

    for (i = 0; i < 32; i++) {
        arr[i] = 0;
    }

    for (i = 1; i <= strlen(str); i++) {
        arr[i % 32] += str[i - 1];
    }

    for (i = 0; i < 32; i++) {
        bits[i] = (arr[31 - i]) ^ (arr[i] << 1);
        b = (bits[i] % 85) + 34;
        result[i] = (char)b;
    }

    for (i = 0; i < 32; i++) {
        printf("%c", result[i]);
    }
    return 0;
}