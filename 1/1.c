#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);

int main() 
{
    int p;
    int q;
    scanf("%d %d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) 
{
    double a = -20;
    double b = 20;
    double mid;
    mid = (a + b) / 2;
    double c;
    c = func(p, q , mid);

    while (fabs(c) >= EPSILON) {

            if ((c * func(p, q , a)) > 0) {
                a = mid;
                mid = (a + b) / 2;
                c = func(p, q , mid);
                //printf("%.4f\n", mid);
            } else { 
                b = mid;
                mid = (a + b) / 2;
                c = func(p, q , mid);
                //printf("%.4f\n", mid);
            }
        }
    return mid;
}

double f(int p, int q, double x) 
{
    return p * x + q;
}
