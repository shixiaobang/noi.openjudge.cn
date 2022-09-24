#include <cstdio>
#include <cmath>

int main(int argc, char const *argv[])
{
    int a;
    int n;
    scanf("%d %d", &a, &n);

    int result;
    result = pow(a, n);

    printf("%d\n", result);

    return 0;
}
