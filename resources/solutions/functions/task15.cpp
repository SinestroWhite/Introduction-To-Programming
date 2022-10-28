#include <iostream>

int get_number() {
    int tmp;
    std::cin >> tmp;
    return tmp;
}

bool form_triangle(const int a, const int b, const int c) {
    if (a < 0 || b < 0 || c < 0) {
        return false;
    }
    if (a + b <= c) {
        return false;
    }
    if (b + c <= a) {
        return false;
    }
    if (a + c <= b) {
        return false;
    }
    return true;
}

int main() {
    int a, b, c, n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        a = get_number();
        b = get_number();
        c = get_number();
        if (form_triangle(a, b, c)) {
            std::cout << a << ' ' << b << ' ' << c << '\n';
        }
    }
    return 0;
}