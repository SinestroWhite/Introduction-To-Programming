#include <cstring>
#include <fstream>
#include <iostream>

const int MAX_BUFFER_SIZE = 1024;

int main() {
    char filePath[MAX_BUFFER_SIZE];

    std::cin >> filePath;

    std::ifstream file(filePath);

    if (!file.is_open()) {
        std::cout << "ERROR OPENING FILE\n";
        return 1;
    }

    bool areSet = false;
    size_t smallestRowIndex, smallestRowSize, biggestRowIndex, biggestRowSize;

    char buffer[MAX_BUFFER_SIZE];

    for (int i = 1; file.getline(buffer, MAX_BUFFER_SIZE); ++i) {
        size_t size = std::strlen(buffer);

        if (!areSet) {
            smallestRowIndex = i;
            smallestRowSize = size;
            biggestRowIndex = i;
            biggestRowSize = size;
            areSet = true;
        }

        if (size < smallestRowSize) {
            smallestRowIndex = i;
            smallestRowSize = size;
        }

        if (size > biggestRowSize) {
            biggestRowIndex = i;
            biggestRowSize = size;
        }
    }

    if (areSet) {
        std::cout << "Smallest row index/size: " << smallestRowIndex << '/'
                  << smallestRowSize << '\n';
        std::cout << "Biggest row index/size: " << biggestRowIndex << '/'
                  << biggestRowSize << '\n';
    }

    file.close();
}
