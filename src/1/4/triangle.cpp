#include <iostream>

int main(int argc, char const *argv[])
{
    int l_1;
    int l_2;
    int l_3;

    std::cin >> l_1 >> l_2 >> l_3;

    int flag = (l_1 + l_2 > l_3) && (l_1 + l_3 > l_2) && (l_2 + l_3 > l_1);

    if (flag)
    {
        std::cout << "yes" << std::endl;
    }
    else
    {
        std::cout << "no" << std::endl;
    }

    return 0;
}
