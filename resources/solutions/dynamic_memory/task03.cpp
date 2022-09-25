#include <iostream>

char *allocate(const int n) {
    char *arr = new char[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    return arr;
}

bool symmectric(char *arr, const int size) {
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;

    char *arr = allocate(n);
    if (symmectric(arr, n)) {
        std::cout << "Da\n";
    } else {
        std::cout << "Ne\n";
    }

    delete[] arr;
    return 0;
}
