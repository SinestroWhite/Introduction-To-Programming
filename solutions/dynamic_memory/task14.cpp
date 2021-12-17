#include <iostream>

void print_matrix(int **mat, size_t rows, size_t cols) {
    for (size_t row = 0; row < rows; row++) {
        for (size_t col = 0; col < cols; col++) {
            std::cout << mat[row][col] << '\t';
        }
        std::cout << '\n';
    }
}

// returns true if row1 <= row2
bool are_these_rows_sorted(int *row1, int *row2, size_t cols) {
    int index = 0;

    while (index < cols && row1[index] == row2[index]) {
        ++index;
    }

    if (index == cols) {
        return true;
    }

    return row1[index] < row2[index];
}

void swap_rows(int *&row1, int *&row2) {
    int *temp = row1;
    row1 = row2;
    row2 = temp;
}

int main() {
    size_t rows, cols;
    std::cin >> rows >> cols;

    int **mat = new int *[rows];
    for (size_t row = 0; row < rows; row++) {
        mat[row] = new int[cols];
        for (size_t col = 0; col < cols; col++) {
            std::cin >> mat[row][col];
        }
    }

    for (size_t iter = 0; iter < rows; iter++) {
        for (size_t row = 0; row < rows - 1; row++) {
            if (!are_these_rows_sorted(mat[row], mat[row + 1], cols)) {
                swap_rows(mat[row], mat[row + 1]);
            }
        }
    }

    print_matrix(mat, rows, cols);

    for (size_t row = 0; row < rows; row++) {
        delete[] mat[row];
    }
    delete[] mat;

    return 0;
}
