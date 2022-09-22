#include <iostream>

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    if (a > b && a > c) {
        // a is biggest
        if (b > c) {
            // b is middle
            // c is lowest
            std::cout << a << ' ' << b << ' ' << c << std::endl;
        } else {
            // c is middle
            // b is lowest
            std::cout << a << ' ' << c << ' ' << b << std::endl;
        }
    } else if (b > a && b > c) {
        // b is biggest
        if (a > c) {
            // a is middle
            // c is lowest
            std::cout << b << ' ' << a << ' ' << c << std::endl;
        } else {
            // c is middle
            // a is lowest
            std::cout << b << ' ' << c << ' ' << a << std::endl;
        }
    } else {
        // c is biggest
        if (a > b) {
            // a is middle
            // b is lowest
            std::cout << c << ' ' << a << ' ' << b << std::endl;
        } else {
            // b is middle
            // a is lowest
            std::cout << c << ' ' << b << ' ' << a << std::endl;
        }
    }

    return 0;
}
