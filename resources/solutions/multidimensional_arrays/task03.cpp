// Да се състави програма, която намира и извежда сумата
// от всеки ред на двумерен целочислен масив.

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
        int sum = 0;
        for (int j = 0; j < M; ++j) {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }

    return 0;
}
