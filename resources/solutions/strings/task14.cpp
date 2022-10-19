#include <cstring>
#include <iostream>

const int MAX_BUFFER_SIZE = 100;

int main() {
    char str[MAX_BUFFER_SIZE];

    std::cin.getline(str, MAX_BUFFER_SIZE);

    int size = std::strlen(str);

    size_t leftIndex = 0, rightIndex = 0;

    for (int index = 0; index < size; ++index) {
        for (int reverseIndex = size - 1; reverseIndex >= index;
             --reverseIndex) {
            if (str[index] == str[reverseIndex]) {
                if ((reverseIndex - index) > (rightIndex - leftIndex)) {
                    leftIndex = index;
                    rightIndex = reverseIndex;
                }
                break;
            }
        }
    }

    std::cout << leftIndex << ' ' << rightIndex << '\n';

    return 0;
}
