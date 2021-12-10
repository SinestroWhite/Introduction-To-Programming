#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int *buffer = new int[n];

    for (size_t i = 0; i < n; i++) {
        std::cin >> buffer[i];
    }

    int maxIndex = 0;
    for (size_t i = 1; i < n; i++) {
        if (buffer[i] > buffer[maxIndex]) {
            maxIndex = i;
        }
    }

    std::cout << &buffer[maxIndex] << ' ' << buffer[maxIndex];

    return 0;
}
