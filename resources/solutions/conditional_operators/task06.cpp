#include <cmath>
#include <iostream>

#define EPS 0.0000001

int main() {
    double a = 0;
    std::cin >> a;
    int b = a;
    double diff = (a > b) ? a - b : b - a;

    if (diff < EPS) {
        if (b % 2 == 1) {
            std::cout << "Odd integer\n";
        } else {
            std::cout << "Even integer\n";
        }
    } else {
        if (a > 0) {
            std::cout << "Positive ";
        } else {
            std::cout << "Negative ";
        }
        std::cout << " rational\n";
    }
    return 0;
}
