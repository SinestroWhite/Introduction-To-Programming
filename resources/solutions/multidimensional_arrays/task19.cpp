#include <iostream>
#include <vector>

//
int main() {
    const int ROW = 4, COL = 6;
    int arr[ROW][COL] = {{1, 2, 3, 4, 5, 6},
                         {7, 8, 9, 10, 11, 12},
                         {13, 14, 15, 16, 17, 18},
                         {19, 20, 21, 22, 23, 24}};
    int i = 0, cur_row = 0, cur_col = 0, row_range = ROW, col_range = COL;

    while (cur_row < row_range && cur_col < col_range) {
        for (i = cur_col; i < col_range; i++) {
            std::cout << arr[cur_row][i] << " ";
        }
        cur_row++;

        for (i = cur_row; i < row_range; i++) {
            std::cout << arr[i][col_range - 1] << " ";
        }
        col_range--;

        if (cur_row < row_range) {
            for (i = col_range - 1; i >= cur_col; i--) {
                std::cout << arr[row_range - 1][i] << " ";
            }
            row_range--;
        }
        if (cur_col < col_range) {
            for (i = row_range - 1; i >= cur_row; i--) {
                std::cout << arr[i][cur_col] << " ";
            }
            cur_col++;
        }
    }
    return 0;
}
