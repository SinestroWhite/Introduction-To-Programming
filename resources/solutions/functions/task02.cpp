#include <iostream>

bool isOdd(const int num) { return num % 2; }

bool isEven(const int num) { return !isUneven(num); }

int main() {
    int input;
    std::cin >> input;
    std::cout << isEven(input) << "\n";

    return 0;
}
