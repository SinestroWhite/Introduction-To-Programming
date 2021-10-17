// Дадена е квадратна реална матрица А с размерност kxk.
// Да се състави програма, която намира произведението
// от елементите извън вторичния главен диагонал.

#include <iostream>

using namespace std;

int main() {

    int K;
    cin >> K;

    // K < 50
    int arr[50][50];

    for (int i = 0; i < K; ++i) {
        for (int j = 0; j < K; ++j) {
            cin >> arr[i][j];
        }
    }

    int proiz = 1;
    for (int i = 0; i < K; ++i) {
        for (int j = 0; j < K; ++j) {
            if (j != K - i - 1) {
                proiz *= arr[i][j];
            }
        }
    }

    cout << proiz << endl;
    return 0;
}
