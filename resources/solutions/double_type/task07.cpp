#include <iostream>

const double PI = 3.14159265;

int main() {
    double r, phi;

    std::cin >> r >> phi;

    double real = r * ((PI * PI - 4 * phi * phi) / (PI * PI + phi * phi));
    double imaginary =
        r * ((16 * phi * (PI - phi)) / (5 * PI * PI - 4 * phi * (PI - phi)));

    std::cout << "a=" << real;
    std::cout << " ";
    std::cout << "b=" << imaginary << std::endl;

    return 0;
}
