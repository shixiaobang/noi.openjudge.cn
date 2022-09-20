#include <cstdio>

int main(int argc, char const *argv[])
{
    double number;
    scanf("%lf", &number);

    printf("%f\n", number);
    printf("%.5f\n", number);
    printf("%e\n", number);
    printf("%g\n", number);

    return 0;
}
