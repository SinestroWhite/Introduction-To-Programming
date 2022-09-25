#include <iostream>
#include <vector>

// Дадени са матриците A и B, с размери NxM и PxQ. Да се изведе произведението
// на A и B, ако това е възможно, или да се изведе съобщение, че не е.
int main() {
    const int m1_rows = 4, m2_rows = 3, m1_cols = 3, m2_cols = 2;
    int mat1[m1_rows][m1_cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {1, 1, 1}},
        mat2[m2_rows][m2_cols] = {{6, 7}, {8, 9}, {1, 2}};
    int mat3[m1_rows][m2_cols];

    for (int i = 0; i < m1_rows; i++) {
        for (int j = 0; j < m2_cols; j++) {
            mat3[i][j] = 0;
            for (int k = 0; k < m2_rows; k++) {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
            std::cout << mat3[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
