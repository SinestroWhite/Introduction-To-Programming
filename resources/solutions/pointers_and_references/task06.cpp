#include <iostream>

#define MAX_SIZE 50

int main() {
    int arr[MAX_SIZE];

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> *(arr + i);
    }

    for (int i = 0; i < n; i++) {
        std::cout << *(arr + i) << '\n';
    }

    return 0;
}
