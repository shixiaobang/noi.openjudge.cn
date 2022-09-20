#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    char symbol;
    int number_int;
    float number_float;
    double number_double;

    std::cin >> symbol >> number_int >> number_float >> number_double;

    std::cout << symbol << " " << number_int << " ";

    std::cout << std::fixed << std::setprecision(6) << number_float << " " << number_double << std::endl;

    return 0;
}
