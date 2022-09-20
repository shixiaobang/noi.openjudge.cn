#include <iostream>

int main(int argc, char const *argv[])
{
    int numbers;
    std::cin >> numbers;

    std::cout << numbers % 10 << (numbers % 100) / 10 << numbers / 100 << std::endl;

    return 0;
}
