// Дадена е квадратна реална матрица А с размерност kxk. Да се състави програма,
// която намира и извежда неотрицателните елементи върху главния диагонал.

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int K;

    cin >> K;

    vector<vector<double>> arr(K);

    double input;
    for (int i = 0; i < K; ++i) {
        for (int j = 0; j < K; ++j) {
            cin >> input;
            arr[i].push_back(input);
        }
    }

    for (int i = 0; i < K; ++i) {
        if (arr[i][i] >= 0) {
            cout << arr[i][i] << " ";
        }
    }

    cout << endl;
    return 0;
}
