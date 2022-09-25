#include <iostream>

using namespace std;

bool isDifferent(int arr[], int size) {

    if (size <= 1) {
        return true;
    }

    int j = size - 2;
    for (; j >= 0; --j) {
        if (arr[j] == arr[size - 1]) {
            return false;
        }
    }

    --size;
    return isDifferent(arr, size);
}

int main() {

    int arr[] = {2, 3, 8, 4, 18, 11, 1};
    cout << isDifferent(arr, 7) << endl;

    return 0;
}