#include <climits>
#include <cstdarg>
#include <iostream>

double average(const int N, ...) {
    if (N == 0) {
        return INT_MIN;
    }

    va_list args;
    double sum = 0;

    va_start(args, N);

    for (int i = 0; i < N; i++) {
        sum += va_arg(args, int);
    }

    va_end(args);
    return sum / N;
}

int main() {
    std::cout << average(4, 1, 2, 3, 4) << "\n";
    return 0;
}
