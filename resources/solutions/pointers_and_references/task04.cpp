#include <iostream>

void swap(int *pa, int *pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main() {
    int a, b;
    std::cin >> a >> b;

    swap(&a, &b);

    std::cout << a << ' ' << b;

    return 0;
}
