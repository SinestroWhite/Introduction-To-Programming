#include <iostream>

int **init(const int rows, const int cols) {
    int **tmp = new int *[rows];
    for (int i = 0; i < rows; i++) {
        tmp[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            std::cin >> tmp[i][j];
        }
    }
    return tmp;
}

void destroy(int **matrix, const int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}
int **multiply(int **A, const int N, const int M, int **B, const int P,
               const int Q) {
    if (M != P) {
        return nullptr;
    }
    int **C = new int *[N];
    for (int i = 0; i < N; i++) {
        C[i] = new int[Q];
        for (int j = 0; j < Q; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            for (int k = 0; k < P; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

int main() {
    const int N = 2, M = 3, P = 3, Q = 3;

    int **A = init(N, M);
    int **B = init(P, Q);

    int **answer = multiply(A, N, M, B, P, Q);
    if (answer == nullptr) {
        std::cerr << "Invalid arguments\n";
        return 0;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            std::cout << answer[i][j] << ' ';
        }
        std::cout << '\n';
    }

    destroy(A, N);
    destroy(B, P);
    destroy(answer, N);
    return 0;
}
