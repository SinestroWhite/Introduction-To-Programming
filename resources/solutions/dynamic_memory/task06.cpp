#include <iostream>

int main() {
    int N, K;
    std::cin >> N >> K;

    int *arr = new int[N];

    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }

    int index = 0;
    for (int i = 0; i < N; i++) {
        std::cout << arr[index] << ' ';
        index += K;
        if (index > N) {
            index -= N;
        }
    }

    delete[] arr;
    return 0;
}
