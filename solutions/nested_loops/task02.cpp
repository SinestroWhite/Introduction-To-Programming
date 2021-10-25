#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    // x + y = n
    for (int i = 0; i <= n; ++i) {
        cout << i << " + " << n - i << " = " << n << endl;
    }

    return 0;
}
