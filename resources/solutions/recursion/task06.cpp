#include <iostream>

void printReverse(unsigned int n) {
    if (n < 10) {
        std::cout << n << '\n';
        return;
    }

    std::cout << n % 10;

    printReverse(n / 10);
}

int main() {
    unsigned int n;
    std::cin >> n;

    printReverse(n);

    return 0;
}
