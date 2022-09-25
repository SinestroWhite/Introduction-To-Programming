#include <iostream>

using namespace std;

int main() {
    int b1, b2, b5, p;
    cin >> b1 >> b2 >> b5 >> p;

    for (int i = 0; i <= b1; ++i) {
        for (int j = 0; j <= b2; ++j) {
            for (int k = 0; k <= b5; ++k) {
                if (i * 1 + j * 2 + k * 5 == p) {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }

    return 0;
}
