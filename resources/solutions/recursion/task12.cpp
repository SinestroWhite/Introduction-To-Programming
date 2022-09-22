#include <exception>
#include <iostream>

bool isRising(int *arr, int size) {
    if (size < 2) {
        return true;
    }

    if (arr[0] > arr[1]) {
        return false;
    }

    return isRising(arr + 1, size - 1);
}

int main() {
    int n;
    std::cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << isRising(arr, n);

    delete[] arr;

    return 0;
}
