#include <iostream>

int main() {
    int number;
    int arr[50];
    std::cin >> number;
    for (int i = 0; i < number; i++) {
        std::cin >> arr[i];
    }
    double sum = 0;
    for (int i = 0; i < number; i++) {
        sum += arr[i];
    }
    std::cout << sum / number << "\n";
    return 0;
}