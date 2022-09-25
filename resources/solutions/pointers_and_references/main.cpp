#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 7, 8};
    // addresses
    for (int i = 0; i < 5; i++) {
        std::cout << (arr + i) << ' ';
    }
    std::cout << '\n';

    // values
    for (int i = 0; i < 5; i++) {
        std::cout << *(arr + i) << '\t';
    }
    std::cout << '\n';
    return 0;
}
