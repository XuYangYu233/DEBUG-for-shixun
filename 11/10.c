#include <stdio.h>
#include <string.h>
const int maxn = 10010;
// finish
int main()
{
    int i, j, k;
    long long int arr[32] = {0};
    long long int bits[32];
    char str[maxn], rstr[maxn];

    scanf("%s", &str);

    k = strlen(str);
    for (i = 1; i <= k; i++)
    {
        arr[i % 32] += str[i - 1];
    }
    for (j = 0; j < 32; j++)
    {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
        rstr[j] = bits[j] % 85 + 34;
    }
    for (i = 0; i < 32; i++)
    {
        printf("%c", rstr[i]);
    }
    return 0;
}