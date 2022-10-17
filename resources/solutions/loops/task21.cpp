#include <iostream>

int main() {
    int n, m;

    std::cin >> n >> m;

    int product = 1;
    for (int i = 0; i <= m; i++) {
        product *= (n + i);
    }

    std::cout << product << "\n";
}