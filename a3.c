#include <stdio.h>

double ad(double a,double b)
{
    return (a>b) ? a : b;
}
double ds(double a, double b, double c)
{
    double min = ad(a,b);
    return (min < c) ? min : c;
}

int main()
{
    double res1 = ad(23,3);
    double res2 = ds(32,2,3);
}