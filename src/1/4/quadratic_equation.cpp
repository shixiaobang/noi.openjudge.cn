#include <iostream>
#include <iomanip>
#include <cmath>

#define ERRORS 0.00001

/* quadratic equation */
/* ax^2 + bx + c = 0 */

double approximate(double value);

int main(int argc, char const *argv[])
{
    double a;
    double b;
    double c;

    std::cin >> a >> b >> c;

    double delta = b * b - 4 * a * c;
    delta = approximate(delta);

    if (delta == 0)
    {
        double x;
        x = -b / (2 * a);
        x = approximate(x);

        std::cout << std::fixed << std::setprecision(5) << "x1=x2=" << x << std::endl;
    }
    else
    {
        if (delta > 0)
        {
            double x1;
            double x2;

            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            x1 = approximate(x1);
            x2 = approximate(x2);

            std::cout << std::fixed << std::setprecision(5) << "x1=" << x1 << ";"
                      << "x2=" << x2 << std::endl;
        }
        else
        {
            double real;
            double imaginary;

            real = -b / (2 * a);
            imaginary = sqrt(-delta) / (2 * a);

            real = approximate(real);
            imaginary = approximate(imaginary);

            std::cout << std::fixed << std::setprecision(5) << "x1=" << real << "+" << imaginary << "i;"
                      << "x2=" << real << "-" << imaginary << "i" << std::endl;
        }
    }

    return 0;
}

double approximate(double value)
{
    if (abs(value) < ERRORS)
    {
        value = 0;
    }
    else
    {
        /* do nothing */
    }

    return value;
}
