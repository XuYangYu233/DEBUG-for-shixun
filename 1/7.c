#include <math.h>
#include <stdio.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);

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
    double min, max, mid;
    min = -20;
    max = 20;
    mid = (min + max) / 2;
    while (fabs(func(p, q, mid)) >= EPSILON) {
        if (func(p, q, min) * func(p, q, mid) < 0) {
            max = mid;
        } else if (func(p, q, max) * func(p, q, mid) < 0) {
            min = mid;
        }
        mid = (min + max) / 2.0;
    }
    return mid;
}

double f(int p, int q, double x)
{
    return p * x + q;
}