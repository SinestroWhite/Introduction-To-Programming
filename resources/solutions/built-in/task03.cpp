#include <cmath>
#include <iostream>

int main() {
    int input;

    std::cin >> input;

    // Hint: 2^(log2(n)) = n

    int closestPowerOfTwo = pow(2, ceil(log2(input)));

    std::cout << closestPowerOfTwo << std::endl;

    return 0;
}
