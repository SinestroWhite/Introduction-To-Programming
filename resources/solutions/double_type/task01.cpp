#include <iostream>

const double EPSILON = 0.000001;

bool areSame(double a, double b) {
    double diff = (a > b ? (a - b) : (b - a));

    return diff < EPSILON;
}

int main() {
    double celsius, fahrenheit;

    std::cin >> celsius >> fahrenheit;

    // (5 / 9) and (double)(5 / 9) don't work
    // (5.0 / 9.0), ((double)5 / 9), and (5 / (double)9) work

    bool result = areSame((fahrenheit - 32) * (5.0 / 9.0), celsius);

    std::cout << result << std::endl;

    return 0;
}
