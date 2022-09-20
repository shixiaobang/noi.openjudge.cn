#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{

    float resistance_1;
    float resistance_2;

    std::cin >> resistance_1 >> resistance_2;

    float resistance_shunt;
    resistance_shunt = (resistance_1 * resistance_2) / (resistance_1 + resistance_2);

    std::cout << std::fixed << std::setprecision(2) << resistance_shunt << std::endl;

    return 0;
}
