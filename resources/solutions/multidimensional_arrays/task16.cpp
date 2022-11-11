#include <iostream>

#define col_size 2
#define row_size 6

void swap_rows(int arr[][col_size], int N, int M) {
    for (int i = 0; i < col_size; i++) {
        int tmp = arr[N][i];
        arr[N][i] = arr[M][i];
        arr[M][i] = tmp;
    }
}

bool compare(int arr[][col_size], int N, int M) {
    for (int i = 0; i < col_size; i++) {
        if (arr[N][i] != arr[M][i]) {
            return arr[N][i] < arr[M][i];
        }
    }
    return true;
}

void sort_array(int arr[][col_size]) {
    for (int i = 0; i < row_size - 1; i++) {
        for (int j = i + 1; j < row_size; j++) {
            if (!compare(arr, i, j)) {
                swap_rows(arr, i, j);
            }
        }
    }
}

void print_array(int arr[][2]) {
    for (int i = 0; i < row_size; i++) {
        for (int j = 0; j < col_size; j++) {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

int main() {
    int arr[][2] = {{1, 4}, {3, 16}, {4, 5}, {1, 2}, {20, 0}, {6, 7}};
    sort_array(arr);
    print_array(arr);

    return 0;
}
