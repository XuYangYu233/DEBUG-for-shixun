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
    double min = -20.0;
    double max = 20.0;
    double mid = 0.0;
    double fmin, fmax, fmid;

    do {
        fmin = func(p, q, min);
        fmax = func(p, q, max);
        mid = (min + max) / 2.0;
        fmid = func(p, q, mid);

        if (fmin > 0 && fmid > 0 || fmin < 0 && fmid < 0) {
            min = mid;
        } else if (fmax > 0 && fmid > 0 || fmax < 0 && fmid < 0) {
            max = mid;
        }
    } while (fabs(fmid) >= EPSILON);

    return mid;
}

double f(int p, int q, double x)
{
    return p * x + q;
}