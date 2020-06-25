#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
// finish
int main()
{
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double))
{
    double min = -20;
    double max = 20;
    double mid;
    while (fabs(func(p, q, mid)) > EPSILON)
    {
        mid = (min + max) / 2;
        if (func(p, q, mid) * func(p, q, min) < 0)
        {
            max = mid;
        }
        else if (func(p, q, mid) * func(p, q, max) < 0)
        {
            min = mid;
        }
        else if (func(p, q, mid) == 0)
        {
            break;
        }
    }
    return mid;
}

double f(int p, int q, double x)
{
    return p * x + q;
}