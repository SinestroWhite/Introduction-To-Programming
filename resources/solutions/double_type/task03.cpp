#include <cmath>
#include <iostream>

int main() {
    double input;

    std::cin >> input;

    double sqrtInput = sqrt(input);
    bool isSqrtWhole = (floor(sqrtInput) == sqrtInput);

    std::cout << isSqrtWhole << std::endl;

    return 0;
}
