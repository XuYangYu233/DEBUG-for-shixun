#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main()
{
    double r;
    scanf("%lf", &r);
    printf("%.3lf\n", round(2 * PI * r * 1000) / 1000);
    printf("%.3lf\n", round(PI * r * r * 1000) / 1000);
    return 0;
}
