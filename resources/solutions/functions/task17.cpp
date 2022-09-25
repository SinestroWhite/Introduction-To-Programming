#include <climits>
#include <iostream>

void sort_array(const int N, int arr[]) {
    // sizeof не работи и затова трябва да се подаде големината на масива
    //от друга страна можем да работим директно със стойностите на самия масив
    int min = INT_MAX, min_ind;
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            if (arr[j] < min) {
                min = arr[j];
                min_ind = j;
            }
        }
        std::swap(arr[i], arr[min_ind]);
        min = INT_MAX;
    }
}

int main() {
    const int size = 7;
    int arr[size] = {5, 54, 123, 6, 12, 6, 8};

    sort_array(size, arr);

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << "\n";
    return 0;
}
