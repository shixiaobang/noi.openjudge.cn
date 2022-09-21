#include <iostream>
#include <vector>
#include <numeric>

int main(int argc, char const *argv[])
{
    int n; // a polygon with n sides

    std::cin >> n;

    std::vector<int> angles;

    int input;
    for (int i = 0; i < n - 1; i++)
    {
        std::cin >> input;
        angles.push_back(input);
    }

    int sum; // sum of the interior angles of a simple n-gon
    sum = (n - 2) * 180;

    int angle;
    angle = sum - std::accumulate(angles.begin(), angles.end(), 0);

    std::cout << angle << std::endl;

    return 0;
}
