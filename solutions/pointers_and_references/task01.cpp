#include <iostream>

int main() {
    int a = 5;
    int &b = a;

    b = 3;

    std::cout << a;

    return 0;
}
