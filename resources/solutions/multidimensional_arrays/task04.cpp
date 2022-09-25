// Да се състави програма, която установява дали целочисленият двумерен
// масив А с размерност mxn съдържа отрицателен елемент.

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N, M;

    cin >> N >> M;

    vector<vector<int>> arr(N);

    int temp;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> temp;
            arr[i].push_back(temp);
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (arr[i][j] < 0) {
                cout << "YES\n";
                return 0;
            }
        }
    }

    cout << "NO\n";
    return 0;
}
