#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::string filePath;

    std::cin >> filePath;

    std::ifstream file(filePath);

    if (!file.is_open()) {
        std::cout << "ERROR OPENING FILE\n";
        return 1;
    }

    bool areSet = false;
    size_t smallestRowIndex, smallestRowSize, biggestRowIndex, biggestRowSize;

    std::string buffer;

    for (int i = 1; std::getline(file, buffer); ++i) {
        if (!areSet) {
            smallestRowIndex = i;
            smallestRowSize = buffer.size();
            biggestRowIndex = i;
            biggestRowSize = buffer.size();
            areSet = true;
        }

        if (buffer.size() < smallestRowSize) {
            smallestRowIndex = i;
            smallestRowSize = buffer.size();
        }

        if (buffer.size() > biggestRowSize) {
            biggestRowIndex = i;
            biggestRowSize = buffer.size();
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
