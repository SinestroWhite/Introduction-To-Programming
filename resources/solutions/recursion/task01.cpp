#include <iostream>

int fibonacci(const int n) {
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main() {
   int n;
   std::cin >> n;
   std::cout << fibonacci(n) << "\n";
}