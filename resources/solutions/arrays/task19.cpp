#include <iostream>

int len(int a) {
    int size = 1;
    a /= 10;
    while (a > 0) {
        size++;
        a /= 10;
    }
    return size;
}

bool compare(int a, int b) {
    while (len(a) < len(b)) {
        a *= 10;
    }

    while (len(b) < len(a)) {
        b *= 10;
    }

    return a > b;
}

void sortLex(const int n, int *a) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (compare(a[i], a[j])) {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
}

#define SIZE 5

int main() {
    int arr[SIZE] = {1, 10, 20, 103, 5};
    sortLex(SIZE, arr);
    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}
