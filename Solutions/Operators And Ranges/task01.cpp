#include <iostream>

int main() {
    int a, b, x;

    std::cin >> a >> b >> x;

    std::cout << (a < x && x < b) << std::endl;

    return 0;
}
