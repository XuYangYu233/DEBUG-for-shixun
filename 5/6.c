#include <stdio.h>
#include <string.h>
// finish
int main()
{
    int i, k;
    char n[10][21], m[21];
    for (i = 0; i < 10; i++)
        scanf("%s", &n[i]);
    for (i = 0; i < 10; i++)
    {
        for (k = 9; k > 0; k--)
        {
            if (strcmp(n[k-1], n[k]) > 0)
            {
                strcpy(m, n[k-1]);
                strcpy(n[k-1], n[k]);
                strcpy(n[k], m);
            }
        }
        printf("%s\n", n[i]);
    }
    return 0;
}