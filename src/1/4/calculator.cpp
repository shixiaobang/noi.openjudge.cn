#include <iostream>

int main(int argc, char const *argv[])
{
    int operand_1;
    int operand_2;

    char operation;

    std::cin >> operand_1 >> operand_2 >> operation;

    int result;

    switch (operation)
    {
    case '+':
        result = operand_1 + operand_2;
        std::cout << result << std::endl;
        break;

    case '-':
        result = operand_1 - operand_2;
        std::cout << result << std::endl;
        break;

    case '*':
        result = operand_1 * operand_2;
        std::cout << result << std::endl;
        break;

    case '/':
        if (operand_2 == 0)
        {
            std::cout << "Divided by zero!" << std::endl;
        }
        else
        {
            result = operand_1 / operand_2;
            std::cout << result << std::endl;
        }
        break;

    default:
        std::cout << "Invalid operator!" << std::endl;
        break;
    }

    return 0;
}
