#include <cmath>
#include <iostream>

int main() {
    double input;

    std::cin >> input;

    bool isWhole = (floor(input) == input);

    std::cout << isWhole << std::endl;

    return 0;
}
