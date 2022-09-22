#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int *arr = new int[n];

    for (size_t i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    double average = 0;
    for (size_t i = 0; i < n; i++) {
        average += arr[i];
    }

    average /= n;

    std::cout << average;

    delete[] arr;

    return 0;
}
