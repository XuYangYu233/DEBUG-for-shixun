#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() 
{
    double r;
    scanf("%lf", &r);
    printf("%.3lf\n%.3lf", round(2 * PI * r * 1000) / 1000, round(PI * pow(r, 2) * 1000) / 1000);
    return 0;
}
