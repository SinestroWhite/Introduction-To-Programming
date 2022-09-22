#include <iostream>

const double PI = 3.14159265;

int main() {
    double x;

    std::cin >> x;

    double sinx = (16 * x * (PI - x)) / (5 * PI * PI - 4 * x * (PI - x));

    std::cout << sinx << std::endl;

    return 0;
}
