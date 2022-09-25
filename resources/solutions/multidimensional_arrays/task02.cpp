#include <iostream>
#include <vector>

//Да се състави програма, която намира броя на отрицателните елементи във всеки
//ред на двумерен масив.
int main() {
    const int N = 3, M = 4;
    int arr[N][M] = {{1, 2, -3, 4}, {-5, -5, 4, 6}, {1, 2, 3, 0}};
    int counter = 0;
    for (int row = 0; row < N; ++row) {
        for (int col = 0; col < M; ++col) {
            if (arr[row][col] < 0) {
                counter++;
            }
        }
    }

    std::cout << counter << "\n";
    return 0;
}
