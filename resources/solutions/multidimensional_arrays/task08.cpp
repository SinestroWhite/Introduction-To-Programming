// Дадена е квадратна матрица Х с размерност kxk и цяло число s.
// Да се състави програма, която намира сумата от онези елементи
// на матрицата Х, сборът от индексите на които е равен на s.

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N, S;

    cin >> N >> S;

    vector<vector<int>> arr(N);

    int temp;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> temp;
            arr[i].push_back(temp);
        }
    }

    int sum = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i + j == S) {
                sum += arr[i][j];
            }
        }
    }

    cout << sum << "\n";
    return 0;
}
