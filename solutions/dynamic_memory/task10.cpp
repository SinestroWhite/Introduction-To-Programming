#include <climits>
#include <iostream>

int main() {
    int rows;
    std::cin >> rows;

    int *cols_arr = new int[rows];
    for (size_t row = 0; row < rows; row++) {
        std::cin >> cols_arr[row];
    }

    int **mat = new int *[rows];
    for (size_t row = 0; row < rows; row++) {
        mat[row] = new int[cols_arr[row]];
        for (size_t col = 0; col < cols_arr[row]; col++) {
            std::cin >> mat[row][col];
        }
    }

    long sum;
    for (size_t row = 0; row < rows; row++) {
        sum = 0;

        for (size_t col = 0; col < cols_arr[row]; col++) {
            sum += mat[row][col];
        }

        std::cout << sum << '\n';
    }

    delete[] cols_arr;

    for (size_t row = 0; row < rows; row++) {
        delete[] mat[row];
    }
    delete[] mat;

    return 0;
}
