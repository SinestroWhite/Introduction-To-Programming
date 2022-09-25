#include <iostream>

bool check(int **matrix, const int N, const int M) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (matrix[i][j] < 0) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int N, M;
    std::cin >> N >> M;

    int **matrix = new int *[N];
    for (int i = 0; i < N; i++) {
        matrix[i] = new int[M];
    }

    std::cout << check(matrix, N, M) << '\n';

    for (int i = 0; i < N; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
