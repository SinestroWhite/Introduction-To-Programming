#include <cstring>
#include <iostream>

const int MAX_BUFFER_SIZE = 100;

int strlen(char str[]) {
    int size = 0;

    while (str[size] != '\0') {
        size++;
    }

    return size;
}

int main() {
    char str[MAX_BUFFER_SIZE];

    std::cin.getline(str, MAX_BUFFER_SIZE);

    int size = strlen(str);

    bool isPalindrome = true;
    for (int i = 0; i < size / 2; ++i) {
        if (str[i] != str[size - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    std::cout << (isPalindrome ? "Is a palindrome" : "Isn't a palindrome")
              << std::endl;

    return 0;
}
