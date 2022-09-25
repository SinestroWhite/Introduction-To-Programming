#include <iostream>

int askUser(const int from, const int to) {
    int tmp;
    do {
        std::cin >> tmp;
    } while (tmp < from || tmp > to);

    return tmp;
}

int main() {
    const int MIN = 0, MAX = 9;
    int a = askUser(MIN, MAX);
    int b = askUser(MIN, MAX);
    int c = askUser(MIN, MAX);

    std::cout << a << ' ' << b << ' ' << c << '\n';
}
