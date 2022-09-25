// Да се състави програма, която установява дали реалният
// двумерен масив А с размерност mxn съдържа елемента Х.

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N, M;
    double X;

    cin >> N >> M >> X;

    vector<vector<double>> arr(N);

    double temp;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> temp;
            arr[i].push_back(temp);
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (arr[i][j] == X) {
                cout << "YES\n";
                return 0;
            }
        }
    }

    cout << "NO\n";
    return 0;
}
