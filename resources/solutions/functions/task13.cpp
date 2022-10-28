#include <iostream>

int digit_count(int input, const int k) {
    int counter = 0, last_digit;
    do {
        last_digit = input % 10;
        if (last_digit == k) {
            counter++;
        }
        input /= 10;
    } while (input > 0);
    return counter;
}

int main() {
    int k, input, counter = 0;
    std::cin >> k >> input;
    while (input > 0)  {
        if (digit_count(input, k) > 1) {
            counter++;
        }
        std::cin >> input;
    }
    std::cout << counter << "\n";
    return 0;
}