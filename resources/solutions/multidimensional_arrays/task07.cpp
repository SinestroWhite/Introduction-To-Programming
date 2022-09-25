// Дадена е квадратна реална матрица А с размерност nxn.
// Да се състави програма, която намира сумата от елементите под
// главния диагонал (включително главният диагонал).

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N;

    cin >> N;

    vector<vector<double>> arr(N);

    double temp;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> temp;
            arr[i].push_back(temp);
        }
    }

    double sum = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= i; ++j) {
            sum += arr[i][j];
        }
    }

    cout << sum << "\n";
    return 0;
}
