#include <iostream>

int main() {
    int rows, cols;
    std::cin >> rows >> cols;

    int **mat = new int *[rows];
    for (size_t i = 0; i < rows; i++) {
        mat[i] = new int[cols];
        for (size_t j = 0; j < cols; j++) {
            std::cin >> mat[i][j];
        }
    }

    int min_size = (rows < cols ? rows : cols);

    for (size_t iter = 0; iter < min_size / 2; iter++) {
        // Right
        for (size_t col = iter; col < cols - iter - 1; col++) {
            std::cout << mat[iter][col] << ' ';
        }

        // Down
        for (size_t row = iter; row < rows - iter - 1; row++) {
            std::cout << mat[row][cols - iter - 1] << ' ';
        }

        // Left
        for (size_t col = cols - iter - 1; col > iter; col--) {
            std::cout << mat[rows - iter - 1][col] << ' ';
        }

        // Up
        for (size_t row = rows - iter - 1; row > iter; row--) {
            std::cout << mat[row][iter] << ' ';
        }
    }

    // FIX for odd number of rows
    if (min_size % 2) {
        if (min_size == rows) {
            // Problematic row
            for (size_t col = min_size / 2; col <= cols - min_size / 2 - 1;
                 ++col) {
                std::cout << mat[min_size / 2][col] << ' ';
            }
        } else {
            // Problematic col
            for (size_t row = min_size / 2; row <= rows - min_size / 2 - 1;
                 ++row) {
                std::cout << mat[row][min_size / 2] << ' ';
            }
        }
    }

    for (size_t i = 0; i < rows; i++) {
        delete[] mat[i];
    }
    delete[] mat;

    return 0;
}
