#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    char name[105][105];
    int i, j;
    char largest[105];
    for (i = 0; i < n; i++) {
        for (j = 0; scanf("%c", &name[i][j]) != EOF && name[i][j] != '\n'; j++) {
            /*pass*/;
        }
    }

    for (strcpy(largest, name[0]), i = 1; i < n; i++) {
        if (strlen(largest) < strlen(name[i])) {
            strcpy(largest, name[i]);
        }
    }
    printf("%s", largest);

    return 0;
}
