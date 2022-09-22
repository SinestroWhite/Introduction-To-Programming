#include <cstring>
#include <iostream>

const int MAX_BUFFER_SIZE = 100;

int main() {
    char str[MAX_BUFFER_SIZE];

    std::cin.getline(str, MAX_BUFFER_SIZE);

    int count = 0, size = std::strlen(str);

    for (int i = 1; i < size; ++i) {
        if (str[i] == ' ' && str[i - 1] != ' ') {
            ++count;
        }
    }
    if (str[size - 1] != ' ') {
        ++count;
        std::cout << "SPECIAL EDGE WORD" << std::endl;
    }

    std::cout << count << std::endl;

    return 0;
}
