#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr1 = {1, 5, 1, 2, 1, 10, 23, 81, 0, 2, 6, 1, 8, 23, 1};
    std::vector<int> arr2;

    for (int i = 0; i < arr1.size() - 1; i++) {
        for (int j = i + 1; j < arr1.size(); j++) {
            if (arr1[i] > arr1[j]) {
                int tmp = arr1[j];
                arr1[j] = arr1[i];
                arr1[i] = tmp;
            }
        }
    }

    for (int i = 0; i < arr1.size() - 1; i++) {
        if (arr1[i] == arr1[i + 1]) {
            arr2.push_back(arr1[i]);
            while (arr1[i] == arr1[i + 1]) {
                i++;
            }
        }
    }

    for (int i = 0; i < arr2.size(); i++) {
        std::cout << arr2[i] << ' ';
    }
    std::cout << '\n';

    return 0;
}
