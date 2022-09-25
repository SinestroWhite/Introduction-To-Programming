#include <iostream>
#include <vector>

#define size 7
int main() {
    int arr[size] = {1, 5, 7, 12, 5, 1, 2};

    int max_ind = 0;

    for (int i = 1; i < size; i++) {
        if (arr[max_ind] < arr[i]) {
            max_ind = i;
        }
    }

    std::cout << "Max element arr[" << max_ind << "] is " << arr[max_ind]
              << "\n";

    return 0;
}
