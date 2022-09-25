#include <iostream>

int magic(float &a) { return *(int *)&a; }

int main() {
    float a;
    std::cin >> a;

    std::cout << magic(a);

    return 0;
}
