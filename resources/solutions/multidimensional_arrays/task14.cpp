#include <iostream>
#include <vector>

#define N 5
void nulify(bool arr[N][N], const int row, const int col) {
    std::vector<std::vector<int>> cells = {{row, col}};

    while (!cells.empty()) {
        // xy[0] - row
        // xy[1] - col
        std::vector<int> xy = cells[0];
        cells.erase(cells.begin());

        if (arr[xy[0]][xy[1]] == 0) {
            continue;
        }

        arr[xy[0]][xy[1]] = 0;
        if (xy[0] > 0) {
            cells.push_back({xy[0] - 1, xy[1]});
        }

        if (xy[1] > 0) {
            cells.push_back({xy[0], xy[1] - 1});
        }

        if (xy[0] < N - 1) {
            cells.push_back({xy[0] + 1, xy[1]});
        }

        if (xy[1] < N - 1) {
            cells.push_back({xy[0], xy[1] + 1});
        }
    }
}

int main() {
    bool arr[N][N] = {
        {1, 1, 0, 0, 1}, {1, 0, 0, 0, 1}, {1, 1, 1, 0, 1},
        {0, 0, 0, 0, 1}, {1, 1, 0, 0, 1},
    };

    int counter = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (arr[i][j] == 1) {
                counter++;
                nulify(arr, i, j);
            }
        }
    }

    std::cout << counter << '\n';
    return 0;
}
