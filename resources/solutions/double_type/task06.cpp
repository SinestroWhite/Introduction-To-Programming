#include <iostream>

const double PI = 3.14159265;

int main() {
    double x;

    std::cin >> x;

    double cosx = (PI * PI - 4 * x * x) / (PI * PI + x * x);

    std::cout << cosx << std::endl;

    return 0;
}
