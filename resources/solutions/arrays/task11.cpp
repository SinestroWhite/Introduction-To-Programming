#include <iostream>

#define N 5
int main() {
    char arr[N] = {'g', 'f', 'q', 'f', 'g'};

    bool flag = true;
    for (int i = 0; i < N / 2; i++) {
        if (arr[i] != arr[N - i - 1]) {
            flag = false;
        }
    }

    std::cout << flag << '\n';
    return 0;
}
