#include <cstring>
#include <iostream>

using namespace std;

const int MAX_ROWS = 20;
const int MAX_COLS = 30;
const int MAX_TITLE_SIZE = 100 + 1;

bool isLexOrder(char row[][MAX_TITLE_SIZE], int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (strcmp(row[i], row[i + 1]) > 0) {
            return false;
        }
    }

    return true;
}

void printWordLengths(char str[]) {
    int counter = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ' ') {
            cout << counter << " ";
            counter = 0;
        } else {
            ++counter;
        }
    }

    cout << counter << " ";
}

void revealPassword(char library[][MAX_COLS][MAX_TITLE_SIZE], int rows,
                    int columns) {
    for (int i = 0; i < rows; ++i) {
        if (isLexOrder(library[i], columns)) {
            if (columns % 2 == 0) {
                printWordLengths(library[i][columns / 2 - 1]);
            } else {
                printWordLengths(library[i][columns / 2]);
            }
        }
    }

    cout << endl;
}

int main() {
    char library[MAX_ROWS][MAX_COLS][MAX_TITLE_SIZE] = {
        {"Algebra", "Analytic Geometry", "Calculus"},
        {"Databases", "Artificial Intelligence", "Functional Programming"},
        {"Data Structures and Algorithms", "Introduction to Programming",
         "Object-oriented Programming"}};

    int rows = 3;
    int columns = 3;

    revealPassword(library, rows, columns);

    return 0;
}
