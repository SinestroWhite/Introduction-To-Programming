#include <iostream>

int main() {
    int number;
    std::cin >> number;

    int n_len = 0, tmp = number;

    // Get length of the number
    while (tmp > 0) {
        n_len++;
        tmp /= 10;
    }

    // Get a remainder that we will use to remove the first digits
    int remainder = 1;
    for (int i = 1; i < n_len; i++) {
        remainder *= 10;
    }

    // Remove the first digit
    number %= remainder;
    remainder /= 10;
    n_len--;

    // Print the first digit and then remove the first 2 digits while number > 0
    for (int i = 0; i < n_len; i += 2) {
        int digit = number / remainder;
        std::cout << ' ' << digit;
        remainder /= 10; // decrease remainder to remove the odd digit as well
        if (remainder > 0) {
            number %=
                remainder; // if remainder == 0, floating exception is thrown
        }
        remainder /= 10; // decrease remainder to remove the next even digit
    }
    std::cout << '\n';
    return 0;
}
