#include <stdio.h>

int main() 
{
    int n, i, j, m;
    scanf ("%d" , &n);
    m = n;
    
    for (i = 1; i <= n; i++) {
        m = n - i + 1;
        for (j = 1; j <= (n-i+1); j++) {
            printf ("%d",m);
            m--;
            if (j != (n-i+1))
                printf (" ");
            else
                printf ("\n");
        }
    }
        
    return 0;
}
