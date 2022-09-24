#include <iostream>

int fibonacci(int x);

int main(int argc, char const *argv[])
{
    int k;
    std::cin >> k;
    std::cout << fibonacci(k) << std::endl;

    return 0;
}

int fibonacci(int x)
{
    if (x < 3)
    {
        return 1;
    }
    else
    {
        int first = 1;
        int second = 1;
        int thrid;

        for (int i = 2; i < x; i++)
        {
            thrid = first + second;
            first = second;
            second = thrid;
        }
        return thrid;
    }
}
