#include <stdio.h>
#include <math.h>

int solve(double a, double b, double c, double *x0, double *x1)
{
    double D;
    D = (b*b) - (4*a*c);
    if ((D < 0) || ((a == 0) && (b == 0) && (c == 0)))
    {
        return 0;
    }
    else if (d == 0)
    {
        *x0 =-b/(2*a);
        return 1;
    }

    *x0 = (-b + sqrt(D))/ (2*a);
    *x1 = (-b - sqrt(D))/ (2*a);
    return 2;

}




int main()
{

	return 0;

}