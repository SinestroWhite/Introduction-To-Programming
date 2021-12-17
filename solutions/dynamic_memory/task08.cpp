#include <climits>
#include <iostream>

int main() {
    int rows, cols;
    std::cin >> rows >> cols;

    int **mat = new int *[rows];
    for (size_t row = 0; row < rows; row++) {
        mat[row] = new int[cols];
        for (size_t col = 0; col < cols; col++) {
            std::cin >> mat[row][col];
        }
    }

    int min;
    for (size_t row = 0; row < rows; row++) {
        min = INT_MAX;

        for (size_t col = 0; col < cols; col++) {
            if (mat[row][col] < min) {
                min = mat[row][col];
            }
        }

        std::cout << min << '\n';
    }

    for (size_t row = 0; row < rows; row++) {
        delete[] mat[row];
    }
    delete[] mat;

    return 0;
}
