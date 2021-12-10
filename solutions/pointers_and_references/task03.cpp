#include <iostream>
#include <type_traits>

void swap(int &first, int &second) {
    int temp = first;
    first = second;
    second = temp;

    // first += second;
    // second = first - second;
    // first -= second;
}

int main() {
    int a, b;
    std::cin >> a >> b;

    swap(a, b);

    std::cout << a << ' ' << b;

    return 0;
}
