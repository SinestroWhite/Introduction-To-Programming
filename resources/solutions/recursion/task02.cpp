#include <iostream>

int first_n_naturals_sum(const int n) {
    if (n == 1) {
        return 0;
    }
    // 0 1 2 3 4 5
    return n - 1 + first_n_naturals_sum(n - 1);
}

int first_n_naturals_sum_v2(const int n) {
    if (n == 1) {
        return 1;
    }
    // 1 2 3 4 5
    return n + first_n_naturals_sum(n - 1);
}

int main() { 
    std::cout << first_n_naturals_sum(5) << "\n";
    return 0; 
}