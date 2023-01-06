#include <iostream>

int binom(const int m, const int n) {
  if (m == 0 || n == 0 || n == m) {
    return 1;
  }
  return binom(m - 1, n - 1) + binom(m - 1, n);
}

int main() { 
    std::cout << binom(10, 11);
    return 0; 
}