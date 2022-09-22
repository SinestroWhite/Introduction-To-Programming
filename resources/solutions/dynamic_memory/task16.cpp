#include <iostream>

int main() {
    int size;
    std::cin >> size;

    int **mat = new int *[size];
    for (size_t i = 0; i < size; i++) {
        mat[i] = new int[size];
        for (size_t j = 0; j < size; j++) {
            std::cin >> mat[i][j];
        }
    }

    for (size_t iter = 0; iter < size / 2; iter++) {
        // Right
        for (size_t col = iter; col < size - iter - 1; col++) {
            std::cout << mat[iter][col] << ' ';
        }

        // Down
        for (size_t row = iter; row < size - iter - 1; row++) {
            std::cout << mat[row][size - iter - 1] << ' ';
        }

        // Left
        for (size_t col = size - iter - 1; col > iter; col--) {
            std::cout << mat[size - iter - 1][col] << ' ';
        }

        // Up
        for (size_t row = size - iter - 1; row > iter; row--) {
            std::cout << mat[row][iter] << ' ';
        }
    }

    // FIX for odd number of rows
    if (size % 2) {
        std::cout << mat[size / 2][size / 2] << ' ';
    }

    for (size_t i = 0; i < size; i++) {
        delete[] mat[i];
    }
    delete[] mat;

    return 0;
}
