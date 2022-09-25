#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            for (int k = j; k <= n; ++k) {
                if (i * i + j * j == k * k || i * i + k * k == j * j ||
                    k * k + j * j == i * i) {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }

    return 0;
}
