#include <iostream>

int main() {
    // Credits Georgi
    int a, b, c, tmp = 0;
    std::cin >> a >> b >> c; // 0 1 3

    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    if (a > c) {
        tmp = a;
        a = c;
        c = tmp;
    }

    if (b > c) {
        tmp = b;
        b = c;
        c = tmp;
    }
    std::cout << a << ' ' << b << ' ' << c << '\n';

    /* Aleternative solution
     * Credits: Mapmo

    int a,b,c;
    std::cin >> a >> b >> c;

    if (a < b) {
            if (a < c) {
                    std::cout << a << ' ';
                    if (b < c) {
                            std::cout << b << ' ' << c << '\n';
                    }
                    else {
                            std::cout << c << ' ' << b << '\n';
                    }
            }
            else {
                    std::cout << c << ' ' << a << ' ' << b << '\n';
            }
    }
    else {
            if (b < c) {
                    std::cout << b << ' ';
                    if (a < c) {
                            std::cout << a << ' ' << c << '\n';
                    }
                    else {
                            std::cout << c << ' ' << a << '\n';
                    }
            }
            else {
                    std::cout << c << ' ' << b << ' ' << a << '\n';
            }
    }
    */
    return 0;
}
