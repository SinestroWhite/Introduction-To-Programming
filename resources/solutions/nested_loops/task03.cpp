#include <iostream>

using namespace std;

int main() {
    int n = 4, m = 10;

    cout << "| X |  ";
    for (int i = n; i < m; ++i) {
        cout << i << " |  ";
    }
    cout << endl;

    for (int i = n; i < m; ++i) {
        cout << "| " << i << " | ";
        for (int j = n; j < m; ++j) {
            cout << i * j << " | ";
        }
        cout << endl;
    }

    return 0;
}
