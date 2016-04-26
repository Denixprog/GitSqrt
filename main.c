#include <stdio.h>
#include <math.h>
#define No_roots 0
#define One_root 1
#define Two_roots 2

int solve(double a, double b, double c, double *x0, double *x1)
{
    double d;
    d = (b * b) - (4 * a * c);
    if ((d < 0) || ((a == 0) && (b == 0) && (c == 0)))
    {
        return 0;
    }
    else if (d == 0)
    {
        *x0 = -b / (2 * a);
        return 1;
    }

    *x0 = (-b + sqrt(d)) / (2 * a);
    *x1 = (-b - sqrt(d)) / (2 * a);
    return 2;

}

int main()
{
    double a, b, c, x0, x1;
    int roots;
    printf("Input a, b, c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);
    roots = solve(a, b, c, &x0, &x1);
    if (roots == No_roots)
    {
        printf("No real roots\n");
    }
    else if (roots == One_root)
    {
        printf("Result:\n");
        printf("x0 = %.2lf\n", x0);
    }
    else if (roots == Two_roots)
    {
        printf("Result:\n");
        printf("x0 = %.2lf\n", x0);
        printf("x1 = %.2lf\n", x1);
    }

	return 0;

}