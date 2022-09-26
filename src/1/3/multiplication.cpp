#include <iostream>

int main(int argc, char const *argv[])
{
    int operand_1;
    long long operand_2;

    std::cin >> operand_1 >> operand_2;

    long long mult;
    mult = operand_1 * operand_2;

    std::cout << mult << std::endl;

    return 0;
}
