#include <iostream>

int main() {
    int a, b, c, x;

    std::cin >> a >> b >> c;

    do {
        std::cin >> x;
    } while(!(a < x && x < b) || (x > c));

    return 0;
}
