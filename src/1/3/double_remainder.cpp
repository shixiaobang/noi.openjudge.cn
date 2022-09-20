#include <cstdio>

int main(int argc, char const *argv[])
{
    double dividend;
    double divisor;
    scanf("%lf %lf", &dividend, &divisor);

    int quotient;
    quotient = dividend / divisor;

    double remainder;
    remainder = dividend - divisor * quotient;

    printf("%g\n", remainder);

    return 0;
}
