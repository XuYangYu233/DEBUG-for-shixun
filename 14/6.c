#include <stdio.h>
// finish
int main()
{
    int num;
    int i, j;
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = num; j >= i; j--)
        {
            printf("%d", j - i + 1);
            if (j != i)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}