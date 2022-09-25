#include <fstream>
#include <iostream>

int squaredDigitsSum(int n) {
    int r = 0, sum = 0;

    while (n > 0) {
        r = n % 10;
        sum = sum + (r * r);
        n = n / 10;
    }

    return sum;
}

bool isHappy(int num) {
    int new_n = num;

    while (new_n != 1 && new_n != 4) {
        new_n = squaredDigitsSum(new_n);
    }

    if (new_n == 1) {
        return true;
    }

    return false;
}

bool isPrime(int num) {
    // 0 and 1 are not prime numbers
    if (num == 0 || num == 1) {
        return false;
    } else {
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    std::fstream chisla("chisla.txt", std::fstream::in),
        primes("primes.txt", std::fstream::out),
        happies("happies.txt", std::fstream::out);

    if (!chisla.is_open() || !primes.is_open() || !happies.is_open()) {
        return 1;
    }

    int chislo;
    while (chisla >> chislo) {
        if (isPrime(chislo)) {
            primes << chislo << '\n';
        }
        if (isHappy(chislo)) {
            happies << chislo << '\n';
        }
    }

    return 0;
}
