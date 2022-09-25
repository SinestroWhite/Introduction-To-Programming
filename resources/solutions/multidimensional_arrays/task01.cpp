#include <iostream>
#include <vector>
//Задача Да се състави програма, която намира и извежда минималният елемент на
//всеки ред на двумерен масив. На първия ред от стандартния вход да се въведат
//размерите на масива, а на следващите редове и самият масив.
int main() {
    int row_size, col_size, tmp_input;
    std::vector<int> tmp_vector;
    std::cin >> row_size >> col_size;

    std::vector<std::vector<int>> matrix;
    for (int row = 0; row < row_size; row++) {
        matrix.push_back(tmp_vector);
        for (int col = 0; col < col_size; col++) {
            std::cin >> tmp_input;
            matrix[row].push_back(tmp_input);
        }
    }

    for (int row = 0; row < row_size; row++) {
        int min = matrix[row][0];
        for (int col = 1; col < col_size; col++) {
            if (min > matrix[row][col]) {
                min = matrix[row][col];
            }
        }
        std::cout << "The lowest element for row " << row + 1 << " is " << min
                  << "\n";
    }
    return 0;
}
