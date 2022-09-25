#include <iostream>
#include <vector>

using namespace std;

void insertInVector(vector<int> &arr, const int toInsert, int i) {

    if (arr.empty()) {
        arr.push_back(toInsert);
    }

    if (arr.size() <= i) {
        return;
    }

    if (arr[i] > toInsert) {
        arr.insert(arr.begin() + i, toInsert);
        return;
    }

    insertInVector(arr, toInsert, ++i);
}

int main() {

    vector<int> arr = {1, 5, 7, 8, 9, 11, 15};

    insertInVector(arr, 6, 0);

    return 0;
}
