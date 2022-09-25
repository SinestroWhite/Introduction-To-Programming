#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    int width = 1 + (n - 1) * 2;
    for (int i = 0; i < width; i++) {
        std::cout << '+';
    }
    std::cout << '\n';
    if (m) {
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n - 1; j++) {
                std::cout << '+';
            }
            for (int j = 0; j < 1 + i * 2; j++) {
                std::cout << '#';
            }
            for (int j = i; j < n - 1; j++) {
                std::cout << '+';
            }
            std::cout << '\n';
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                std::cout << '+';
            }
            std::cout << '#';
            for (int j = 0; j < n - 1; j++) {
                std::cout << '+';
            }
            std::cout << '\n';
        }
    } else {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                std::cout << '+';
            }
            std::cout << '#';
            for (int j = 0; j < n - 1; j++) {
                std::cout << '+';
            }
            std::cout << '\n';
        }
        for (int i = n - 1; i >= 0; i--) {
            for (int j = i; j < n - 1; j++) {
                std::cout << '+';
            }
            for (int j = 0; j < 1 + i * 2; j++) {
                std::cout << '#';
            }
            for (int j = i; j < n - 1; j++) {
                std::cout << '+';
            }
            std::cout << '\n';
        }
    }
    for (int i = 0; i < width; i++) {
        std::cout << '+';
    }
    std::cout << '\n';
    return 0;
}

/*
Alternative solution:

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int n;
    bool m;
    cin >> n >> m;

    int base = 2*n - 1;

    for (int i = 1; i <= base; ++i) {
        cout << '+';
    }
    cout << endl;

    if (m) {
        for (int i = 1; i <= n; ++i) {
            int numberOfSharps = 2*i - 1;
            int numberOfPluses = (base - numberOfSharps)/2;

            for (int j = 1; j <= numberOfPluses; ++j) {
                cout << '+';
            }

            for (int j = 1; j <= numberOfSharps; ++j) {
                cout << '#';
            }

            for (int j = 1; j <= numberOfPluses; ++j) {
                cout << '+';
            }

            cout << endl;
        }

        for (int i = 1; i < n; ++i) {
            int numberOfPluses = (base - 1)/2;

            for (int j = 1; j <= numberOfPluses; ++j) {
                cout << '+';
            }

            cout << '#';

            for (int j = 1; j <= numberOfPluses; ++j) {
                cout << '+';
            }

            cout << endl;
        }
    } else {
        for (int i = 1; i < n; ++i) {
            int numberOfPluses = (base - 1)/2;

            for (int j = 1; j <= numberOfPluses; ++j) {
                cout << '+';
            }

            cout << '#';

            for (int j = 1; j <= numberOfPluses; ++j) {
                cout << '+';
            }

            cout << endl;
        }

        for (int i = n; i > 0; --i) {
            int numberOfSharps = 2 * i - 1;
            int numberOfPluses = (base - numberOfSharps) / 2;

            for (int j = 1; j <= numberOfPluses; ++j) {
                cout << '+';
            }

            for (int j = 1; j <= numberOfSharps; ++j) {
                cout << '#';
            }

            for (int j = 1; j <= numberOfPluses; ++j) {
                cout << '+';
            }
            cout << endl;
        }

    }

    for (int i = 1; i <= base; ++i) {
        cout << '+';
    }

    return 0;
}
*/
