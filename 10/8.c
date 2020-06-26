#include <stdio.h>
// finish
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0 && i != j)
            {
                break;
            }
        }
        if (j == i + 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}