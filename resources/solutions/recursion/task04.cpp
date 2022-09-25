#include <iostream>
#include <vector>

int pow(const int x, const int n) {
    if (n == 0) {
        return 1;
    }

    if (n > 0) {
        return x * pow(x, n - 1);
    }

    return x * 1 / pow(x, n + 1);
}

int main() {
    std::cout << pow(5, 3);

    return 0;
}
