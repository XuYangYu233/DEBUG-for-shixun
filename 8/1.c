#include <stdio.h>
#include <string.h>

int main() 
{
    int n;
    scanf("%d\n", &n);
    char names[n][101];
    char max[101];
    
    for (int i = 0; i < n; i++) {
         gets(names[i]);
    }
    
    strcpy(max, names[0]);
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n; j++) {
            if (strlen(names[i]) > strlen(names[j])) {
                strcpy(max, names[i]);
            }
        }
    }
    
    printf("%s\n", max);
    
    return 0;
}

