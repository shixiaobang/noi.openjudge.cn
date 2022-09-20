#include <iostream>

int main(int argc, char const *argv[])
{
    int operand_1;
    int operand_2;
    int operand_3;

    std::cin >> operand_1 >> operand_2 >> operand_3;

    int result;
    result = (operand_1 + operand_2) / operand_3;

    std::cout << result << std::endl;

    return 0;
}
